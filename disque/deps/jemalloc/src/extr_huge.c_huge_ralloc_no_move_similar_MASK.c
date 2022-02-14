
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int extent_node_t ;
typedef int chunk_hooks_t ;
struct TYPE_5__ {int huge_mtx; } ;
typedef TYPE_1__ arena_t ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,void*,size_t,size_t) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int *,void*,int ,size_t,size_t) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_4 (int *) ;
 size_t FUNC_5 (int *) ;
 int FUNC_6 (int *,size_t) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int * FUNC_9 (void*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (void*,int,size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_13 (size_t) ;
 scalar_t__ FUNC_14 (int ) ;

__attribute__((used)) static void
FUNC_15(void *VAR_5, size_t VAR_6, size_t VAR_7,
    size_t VAR_8, bool VAR_9)
{
 size_t VAR_10, VAR_11;
 extent_node_t *VAR_12;
 arena_t *VAR_13;
 chunk_hooks_t VAR_14 = VAR_0;
 bool VAR_15, VAR_16;


 for (VAR_10 = VAR_7; VAR_10 < VAR_8 && (VAR_11 = FUNC_13(VAR_10+1))
     <= VAR_6; VAR_10 = VAR_11)
  ;

 if (VAR_6 == VAR_10)
  return;

 VAR_12 = FUNC_9(VAR_5);
 VAR_13 = FUNC_4(VAR_12);
 VAR_15 = FUNC_7(VAR_12);


 if (VAR_6 > VAR_10) {
  size_t VAR_17 = VAR_6 - VAR_10;
  if (VAR_1 && FUNC_14(VAR_3)) {
   FUNC_12((void *)((uintptr_t)VAR_5 + VAR_10), 0x5a, VAR_17);
   VAR_16 = 0;
  } else {
   VAR_16 = !FUNC_3(VAR_13, &VAR_14,
       VAR_5, FUNC_0(VAR_6), VAR_10, VAR_17);
  }
 } else
  VAR_16 = VAR_15;

 FUNC_10(&VAR_13->huge_mtx);

 FUNC_2(FUNC_5(VAR_12) != VAR_10);
 FUNC_6(VAR_12, VAR_10);

 FUNC_8(VAR_12, VAR_16);
 FUNC_11(&VAR_13->huge_mtx);

 FUNC_1(VAR_13, VAR_5, VAR_6, VAR_10);


 if (VAR_6 < VAR_10) {
  if (VAR_9 || (VAR_1 && FUNC_14(VAR_4))) {
   if (!VAR_15) {
    FUNC_12((void *)((uintptr_t)VAR_5 + VAR_6), 0,
        VAR_10 - VAR_6);
   }
  } else if (VAR_1 && FUNC_14(VAR_2)) {
   FUNC_12((void *)((uintptr_t)VAR_5 + VAR_6), 0xa5, VAR_10 -
       VAR_6);
  }
 }
}
