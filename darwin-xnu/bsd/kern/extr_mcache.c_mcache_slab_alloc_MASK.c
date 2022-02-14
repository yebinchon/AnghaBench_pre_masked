
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int64_t ;
typedef int u_int32_t ;
struct TYPE_4__ {intptr_t mc_bufsize; int mc_flags; int mc_align; intptr_t mc_chunksize; int mc_slab_zone; } ;
typedef TYPE_1__ mcache_t ;
struct TYPE_5__ {struct TYPE_5__* obj_next; } ;
typedef TYPE_2__ mcache_obj_t ;


 int FUNC_0 (void*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (intptr_t,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,void*,size_t) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static unsigned int
FUNC_5(void *VAR_2, mcache_obj_t ***VAR_3, unsigned int VAR_4,
    int VAR_5)
{
#pragma unused(wait)
 mcache_t *VAR_6 = VAR_2;
 unsigned int VAR_7 = VAR_4;
 size_t VAR_8 = FUNC_1(VAR_6->mc_bufsize, sizeof (u_int64_t));
 u_int32_t VAR_9 = VAR_6->mc_flags;
 void *VAR_10, *VAR_11, **VAR_12;
 mcache_obj_t **VAR_13 = *VAR_3;

 *VAR_13 = ((void*)0);

 for (;;) {
  VAR_10 = FUNC_4(VAR_6->mc_slab_zone);
  if (VAR_10 == ((void*)0))
   break;


  VAR_11 = (void *)FUNC_1((intptr_t)VAR_10 + sizeof (u_int64_t),
      VAR_6->mc_align);





  VAR_12 = (void **)((intptr_t)VAR_11 - sizeof (void *));
  *VAR_12 = VAR_10;

  FUNC_2 (((intptr_t)VAR_11 + VAR_6->mc_bufsize) <=
      ((intptr_t)VAR_10 + VAR_6->mc_chunksize));
  if (VAR_9 & VAR_1) {
   FUNC_2(((intptr_t)VAR_11 + VAR_8) <=
       ((intptr_t)VAR_10 + VAR_6->mc_chunksize));
   FUNC_3(VAR_0, VAR_11, VAR_8);
  }

  FUNC_2(FUNC_0(VAR_11, VAR_6->mc_align));
  *VAR_13 = (mcache_obj_t *)VAR_11;

  (*VAR_13)->obj_next = ((void*)0);
  VAR_13 = *VAR_3 = &(*VAR_13)->obj_next;


  if (--VAR_7 == 0)
   break;
 }

 return (VAR_4 - VAR_7);
}
