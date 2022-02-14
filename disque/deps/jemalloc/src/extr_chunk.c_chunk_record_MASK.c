
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int extent_tree_t ;
typedef int extent_node_t ;
struct TYPE_14__ {int (* merge ) (void*,uintptr_t,void*,size_t,int,int ) ;} ;
typedef TYPE_1__ chunk_hooks_t ;
struct TYPE_15__ {int chunks_mtx; int ind; } ;
typedef TYPE_2__ arena_t ;


 int FUNC_0 (void*,size_t) ;
 int FUNC_1 (TYPE_2__*,int *,int) ;
 int FUNC_2 (TYPE_2__*,int *,int) ;
 int * FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*,void*,size_t,int ,size_t) ;
 void* FUNC_8 (int *) ;
 int FUNC_9 (int *,void*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,TYPE_2__*,void*,size_t,int,int) ;
 uintptr_t FUNC_12 (int *) ;
 int FUNC_13 (int *,uintptr_t) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *,int *) ;
 int * FUNC_17 (int *,int *) ;
 int * FUNC_18 (int *,int *) ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (int *,int *) ;
 int FUNC_21 (int *,int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (void*,size_t,void*,uintptr_t,int,int ) ;
 int FUNC_25 (void*,uintptr_t,void*,size_t,int,int ) ;

__attribute__((used)) static void
FUNC_26(arena_t *VAR_0, chunk_hooks_t *VAR_1,
    extent_tree_t *VAR_2, extent_tree_t *VAR_3, bool VAR_4,
    void *VAR_5, size_t VAR_6, bool VAR_7, bool VAR_8)
{
 bool VAR_9;
 extent_node_t *VAR_10, *VAR_11;
 extent_node_t VAR_12;

 FUNC_5(!VAR_4 || !VAR_7);
 VAR_9 = VAR_4 || !VAR_7;
 FUNC_0(VAR_5, VAR_6);

 FUNC_22(&VAR_0->chunks_mtx);
 FUNC_6(VAR_0, VAR_1);
 FUNC_11(&VAR_12, VAR_0, (void *)((uintptr_t)VAR_5 + VAR_6), 0,
     0, 0);
 VAR_10 = FUNC_17(VAR_3, &VAR_12);

 if (VAR_10 != ((void*)0) && FUNC_8(VAR_10) ==
     FUNC_8(&VAR_12) && FUNC_10(VAR_10) ==
     VAR_8 && !VAR_1->merge(VAR_5, VAR_6,
     FUNC_8(VAR_10), FUNC_12(VAR_10), 0,
     VAR_0->ind)) {





  FUNC_21(VAR_2, VAR_10);
  FUNC_2(VAR_0, VAR_10, VAR_4);
  FUNC_9(VAR_10, VAR_5);
  FUNC_13(VAR_10, VAR_6 + FUNC_12(VAR_10));
  FUNC_15(VAR_10, FUNC_14(VAR_10) &&
      !VAR_9);
  FUNC_20(VAR_2, VAR_10);
  FUNC_1(VAR_0, VAR_10, VAR_4);
 } else {

  VAR_10 = FUNC_3(VAR_0);
  if (VAR_10 == ((void*)0)) {






   if (VAR_4) {
    FUNC_7(VAR_0, VAR_1, VAR_5,
        VAR_6, 0, VAR_6);
   }
   goto label_return;
  }
  FUNC_11(VAR_10, VAR_0, VAR_5, VAR_6, !VAR_9,
      VAR_8);
  FUNC_16(VAR_3, VAR_10);
  FUNC_20(VAR_2, VAR_10);
  FUNC_1(VAR_0, VAR_10, VAR_4);
 }


 VAR_11 = FUNC_18(VAR_3, VAR_10);
 if (VAR_11 != ((void*)0) && (void *)((uintptr_t)FUNC_8(VAR_11) +
     FUNC_12(VAR_11)) == VAR_5 &&
     FUNC_10(VAR_11) == VAR_8 &&
     !VAR_1->merge(FUNC_8(VAR_11),
     FUNC_12(VAR_11), VAR_5, VAR_6, 0, VAR_0->ind)) {





  FUNC_21(VAR_2, VAR_11);
  FUNC_19(VAR_3, VAR_11);
  FUNC_2(VAR_0, VAR_11, VAR_4);
  FUNC_21(VAR_2, VAR_10);
  FUNC_2(VAR_0, VAR_10, VAR_4);
  FUNC_9(VAR_10, FUNC_8(VAR_11));
  FUNC_13(VAR_10, FUNC_12(VAR_11) +
      FUNC_12(VAR_10));
  FUNC_15(VAR_10, FUNC_14(VAR_11) &&
      FUNC_14(VAR_10));
  FUNC_20(VAR_2, VAR_10);
  FUNC_1(VAR_0, VAR_10, VAR_4);

  FUNC_4(VAR_0, VAR_11);
 }

label_return:
 FUNC_23(&VAR_0->chunks_mtx);
}
