
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ ret ;
typedef int extent_tree_t ;
typedef int extent_node_t ;
struct TYPE_15__ {scalar_t__ (* commit ) (void*,size_t,int ,size_t,int ) ;scalar_t__ (* split ) (void*,size_t,size_t,size_t,int,int ) ;} ;
typedef TYPE_1__ chunk_hooks_t ;
struct TYPE_16__ {int chunks_mtx; int ind; } ;
typedef TYPE_2__ arena_t ;


 uintptr_t FUNC_0 (uintptr_t,size_t) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (void*,size_t) ;
 int FUNC_3 (TYPE_2__*,int *,int) ;
 int FUNC_4 (TYPE_2__*,int *,int) ;
 int * FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (int) ;
 int * FUNC_8 (TYPE_2__*,int *,int *,size_t) ;
 int FUNC_9 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_10 (TYPE_2__*,TYPE_1__*,int *,int *,int,void*,size_t,int,int) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,TYPE_2__*,void*,size_t,int,int) ;
 size_t FUNC_14 (int *) ;
 int FUNC_15 (int *,size_t) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int *,int *) ;
 int * FUNC_19 (int *,int *) ;
 int FUNC_20 (int *,int *) ;
 int FUNC_21 (int *,int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (void*,int ,size_t) ;
 int FUNC_25 (size_t) ;
 scalar_t__ FUNC_26 (void*,size_t,size_t,size_t,int,int ) ;
 scalar_t__ FUNC_27 (void*,size_t,size_t,size_t,int,int ) ;
 scalar_t__ FUNC_28 (void*,size_t,int ,size_t,int ) ;

__attribute__((used)) static void *
FUNC_29(arena_t *VAR_2, chunk_hooks_t *VAR_3,
    extent_tree_t *VAR_4, extent_tree_t *VAR_5, bool VAR_6,
    void *VAR_7, size_t VAR_8, size_t VAR_9, bool *VAR_10, bool *VAR_11,
    bool VAR_12)
{
 void *VAR_13;
 extent_node_t *VAR_14;
 size_t VAR_15, VAR_16, VAR_17;
 bool VAR_18, VAR_19;

 FUNC_7(VAR_7 == ((void*)0) || VAR_9 == VAR_0);





 FUNC_7(VAR_12 || VAR_7 != ((void*)0));

 VAR_15 = FUNC_1(FUNC_25(VAR_8 + VAR_9 - VAR_0));

 if (VAR_15 < VAR_8)
  return (((void*)0));
 FUNC_22(&VAR_2->chunks_mtx);
 FUNC_9(VAR_2, VAR_3);
 if (VAR_7 != ((void*)0)) {
  extent_node_t VAR_20;
  FUNC_13(&VAR_20, VAR_2, VAR_7, VAR_15, 0,
      0);
  VAR_14 = FUNC_19(VAR_5, &VAR_20);
 } else {
  VAR_14 = FUNC_8(VAR_2, VAR_4, VAR_5,
      VAR_15);
 }
 if (VAR_14 == ((void*)0) || (VAR_7 != ((void*)0) && FUNC_14(VAR_14) <
     VAR_8)) {
  FUNC_23(&VAR_2->chunks_mtx);
  return (((void*)0));
 }
 VAR_16 = FUNC_0((uintptr_t)FUNC_11(VAR_14),
     VAR_9) - (uintptr_t)FUNC_11(VAR_14);
 FUNC_7(VAR_7 == ((void*)0) || VAR_16 == 0);
 FUNC_7(FUNC_14(VAR_14) >= VAR_16 + VAR_8);
 VAR_17 = FUNC_14(VAR_14) - VAR_16 - VAR_8;
 VAR_13 = (void *)((uintptr_t)FUNC_11(VAR_14) + VAR_16);
 VAR_18 = FUNC_16(VAR_14);
 if (VAR_18)
  *VAR_10 = 1;
 VAR_19 = FUNC_12(VAR_14);
 if (VAR_19)
  *VAR_11 = 1;

 if (VAR_16 != 0 &&
     VAR_3->split(FUNC_11(VAR_14),
     FUNC_14(VAR_14), VAR_16, VAR_8, 0, VAR_2->ind)) {
  FUNC_23(&VAR_2->chunks_mtx);
  return (((void*)0));
 }

 FUNC_21(VAR_4, VAR_14);
 FUNC_18(VAR_5, VAR_14);
 FUNC_4(VAR_2, VAR_14, VAR_6);
 if (VAR_16 != 0) {

  FUNC_15(VAR_14, VAR_16);
  FUNC_20(VAR_4, VAR_14);
  FUNC_17(VAR_5, VAR_14);
  FUNC_3(VAR_2, VAR_14, VAR_6);
  VAR_14 = ((void*)0);
 }
 if (VAR_17 != 0) {

  if (VAR_3->split(VAR_13, VAR_8 + VAR_17, VAR_8,
      VAR_17, 0, VAR_2->ind)) {
   if (VAR_12 && VAR_14 != ((void*)0))
    FUNC_6(VAR_2, VAR_14);
   FUNC_23(&VAR_2->chunks_mtx);
   FUNC_10(VAR_2, VAR_3, VAR_4, VAR_5,
       VAR_6, VAR_13, VAR_8 + VAR_17, VAR_18, VAR_19);
   return (((void*)0));
  }

  if (VAR_14 == ((void*)0)) {
   VAR_14 = FUNC_5(VAR_2);
   if (VAR_14 == ((void*)0)) {
    FUNC_23(&VAR_2->chunks_mtx);
    FUNC_10(VAR_2, VAR_3, VAR_4,
        VAR_5, VAR_6, VAR_13, VAR_8 + VAR_17,
        VAR_18, VAR_19);
    return (((void*)0));
   }
  }
  FUNC_13(VAR_14, VAR_2, (void *)((uintptr_t)(VAR_13) + VAR_8),
      VAR_17, VAR_18, VAR_19);
  FUNC_20(VAR_4, VAR_14);
  FUNC_17(VAR_5, VAR_14);
  FUNC_3(VAR_2, VAR_14, VAR_6);
  VAR_14 = ((void*)0);
 }
 if (!VAR_19 && VAR_3->commit(VAR_13, VAR_8, 0, VAR_8, VAR_2->ind)) {
  FUNC_23(&VAR_2->chunks_mtx);
  FUNC_10(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
      VAR_13, VAR_8, VAR_18, VAR_19);
  return (((void*)0));
 }
 FUNC_23(&VAR_2->chunks_mtx);

 FUNC_7(VAR_12 || VAR_14 != ((void*)0));
 if (VAR_12 && VAR_14 != ((void*)0))
  FUNC_6(VAR_2, VAR_14);
 if (*VAR_10) {
  if (!VAR_18)
   FUNC_24(VAR_13, 0, VAR_8);
  else if (VAR_1) {
   size_t VAR_21;
   size_t *VAR_22 = (size_t *)(uintptr_t)VAR_13;

   FUNC_2(VAR_13, VAR_8);
   for (VAR_21 = 0; VAR_21 < VAR_8 / sizeof(size_t); VAR_21++)
    FUNC_7(VAR_22[VAR_21] == 0);
  }
 }
 return (VAR_13);
}
