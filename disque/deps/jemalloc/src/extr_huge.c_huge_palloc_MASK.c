
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int tsd_t ;
typedef int tcache_t ;
typedef int extent_node_t ;
struct TYPE_9__ {int huge_mtx; int huge; } ;
typedef TYPE_1__ arena_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int *,TYPE_1__*) ;
 void* FUNC_2 (TYPE_1__*,size_t,size_t,int*) ;
 int FUNC_3 (TYPE_1__*,void*,size_t) ;
 int FUNC_4 (int) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int *,TYPE_1__*,void*,size_t,int,int) ;
 scalar_t__ FUNC_6 (void*,int *) ;
 int FUNC_7 (int *,int *,int *,int) ;
 int * FUNC_8 (int *,int ,int ,int,int *,int,TYPE_1__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (void*,int,size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_12 (int *,int ) ;
 int VAR_5 ;
 int FUNC_13 (int *,int *,int ) ;
 size_t FUNC_14 (size_t,size_t) ;
 scalar_t__ FUNC_15 (int) ;

void *
FUNC_16(tsd_t *VAR_6, arena_t *VAR_7, size_t VAR_8, size_t VAR_9,
    bool VAR_10, tcache_t *VAR_11)
{
 void *VAR_12;
 size_t VAR_13;
 extent_node_t *VAR_14;
 bool VAR_15;



 VAR_13 = FUNC_14(VAR_8, VAR_9);
 if (FUNC_15(VAR_13 == 0))
  return (((void*)0));
 FUNC_4(VAR_13 >= VAR_1);


 VAR_14 = FUNC_8(VAR_6, FUNC_0(sizeof(extent_node_t)),
     VAR_0, 0, VAR_11, 1, VAR_7);
 if (VAR_14 == ((void*)0))
  return (((void*)0));





 VAR_15 = VAR_10;
 VAR_7 = FUNC_1(VAR_6, VAR_7);
 if (FUNC_15(VAR_7 == ((void*)0)) || (VAR_12 = FUNC_2(VAR_7,
     VAR_8, VAR_9, &VAR_15)) == ((void*)0)) {
  FUNC_7(VAR_6, VAR_14, VAR_11, 1);
  return (((void*)0));
 }

 FUNC_5(VAR_14, VAR_7, VAR_12, VAR_8, VAR_15, 1);

 if (FUNC_6(VAR_12, VAR_14)) {
  FUNC_3(VAR_7, VAR_12, VAR_8);
  FUNC_7(VAR_6, VAR_14, VAR_11, 1);
  return (((void*)0));
 }


 FUNC_9(&VAR_7->huge_mtx);
 FUNC_12(VAR_14, VAR_5);
 FUNC_13(&VAR_7->huge, VAR_14, VAR_5);
 FUNC_10(&VAR_7->huge_mtx);

 if (VAR_10 || (VAR_2 && FUNC_15(VAR_4))) {
  if (!VAR_15)
   FUNC_11(VAR_12, 0, VAR_8);
 } else if (VAR_2 && FUNC_15(VAR_3))
  FUNC_11(VAR_12, 0xa5, VAR_8);

 return (VAR_12);
}
