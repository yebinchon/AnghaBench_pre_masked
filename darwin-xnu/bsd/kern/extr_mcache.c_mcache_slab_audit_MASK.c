
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int64_t ;
struct TYPE_4__ {intptr_t mc_chunksize; int mc_align; int mc_bufsize; } ;
typedef TYPE_1__ mcache_t ;
struct TYPE_5__ {struct TYPE_5__* obj_next; } ;
typedef TYPE_2__ mcache_obj_t ;
typedef int boolean_t ;


 int FUNC_0 (void*,int ) ;
 int VAR_0 ;
 size_t FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,void*,int ,size_t) ;
 int FUNC_4 (int ,void*,size_t) ;

__attribute__((used)) static void
FUNC_5(void *VAR_1, mcache_obj_t *VAR_2, boolean_t VAR_3)
{
 mcache_t *VAR_4 = VAR_1;
 size_t VAR_5 = FUNC_1(VAR_4->mc_bufsize, sizeof (u_int64_t));
 void *VAR_6, **VAR_7;

 while (VAR_2 != ((void*)0)) {
  mcache_obj_t *VAR_8 = VAR_2->obj_next;

  VAR_6 = VAR_2;
  FUNC_2(FUNC_0(VAR_6, VAR_4->mc_align));


  VAR_7 = (void **)((intptr_t)VAR_6 - sizeof (void *));

  FUNC_2(((intptr_t)VAR_6 + VAR_5) <=
      ((intptr_t)*VAR_7 + VAR_4->mc_chunksize));

  if (!VAR_3)
   FUNC_4(VAR_0, VAR_6, VAR_5);
  else
   FUNC_3(((void*)0), VAR_6, 0, VAR_5);

  VAR_2 = VAR_2->obj_next = VAR_8;
 }
}
