
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int extent_node_t ;
struct TYPE_9__ {scalar_t__ (* split ) (void*,size_t,size_t,size_t,int,int ) ;} ;
typedef TYPE_1__ chunk_hooks_t ;
struct TYPE_10__ {int huge_mtx; int ind; } ;
typedef TYPE_2__ arena_t ;


 int FUNC_0 (uintptr_t) ;
 int FUNC_1 (uintptr_t) ;
 size_t FUNC_2 (size_t) ;
 int FUNC_3 (TYPE_2__*,void*,size_t,size_t) ;
 int FUNC_4 (int) ;
 TYPE_1__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*,int ,size_t,int ,size_t) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_7 (int *) ;
 int FUNC_8 (int *,size_t) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (void*,size_t) ;
 int * FUNC_12 (void*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_15 (void*,size_t,size_t,size_t,int,int ) ;
 scalar_t__ FUNC_16 (int ) ;

__attribute__((used)) static bool
FUNC_17(void *VAR_2, size_t VAR_3, size_t VAR_4)
{
 extent_node_t *VAR_5;
 arena_t *VAR_6;
 chunk_hooks_t VAR_7;
 size_t VAR_8;
 bool VAR_9, VAR_10;

 VAR_5 = FUNC_12(VAR_2);
 VAR_6 = FUNC_7(VAR_5);
 VAR_9 = FUNC_9(VAR_5);
 VAR_7 = FUNC_5(VAR_6);

 FUNC_4(VAR_3 > VAR_4);


 VAR_8 = FUNC_2(VAR_3) - FUNC_2(VAR_4);
 if (VAR_8 != 0 && VAR_7.split(VAR_2, FUNC_2(VAR_3),
     FUNC_2(VAR_4), VAR_8, 1, VAR_6->ind))
  return (1);

 if (VAR_3 > VAR_4) {
  size_t VAR_11 = VAR_3 - VAR_4;
  if (VAR_0 && FUNC_16(VAR_1)) {
   FUNC_11((void *)((uintptr_t)VAR_2 + VAR_4),
       VAR_11);
   VAR_10 = 0;
  } else {
   VAR_10 = !FUNC_6(VAR_6, &VAR_7,
       FUNC_0((uintptr_t)VAR_2 + VAR_4),
       FUNC_2(VAR_3),
       FUNC_1((uintptr_t)VAR_2 + VAR_4), VAR_11);
  }
 } else
  VAR_10 = VAR_9;

 FUNC_13(&VAR_6->huge_mtx);

 FUNC_8(VAR_5, VAR_4);

 FUNC_10(VAR_5, VAR_10);
 FUNC_14(&VAR_6->huge_mtx);


 FUNC_3(VAR_6, VAR_2, VAR_3, VAR_4);

 return (0);
}
