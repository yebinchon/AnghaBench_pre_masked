
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int extent_node_t ;
struct TYPE_4__ {int huge_mtx; } ;
typedef TYPE_1__ arena_t ;


 size_t FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (TYPE_1__*,void*,size_t,size_t,int*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *,size_t) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (void*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (void*,int,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static bool
FUNC_10(void *VAR_3, size_t VAR_4, size_t VAR_5, bool VAR_6) {
 extent_node_t *VAR_7;
 arena_t *VAR_8;
 bool VAR_9, VAR_10;

 VAR_7 = FUNC_5(VAR_3);
 VAR_8 = FUNC_2(VAR_7);
 FUNC_6(&VAR_8->huge_mtx);
 VAR_9 = FUNC_4(VAR_7);
 FUNC_7(&VAR_8->huge_mtx);





 VAR_10 = VAR_6;

 if (FUNC_1(VAR_8, VAR_3, VAR_4, VAR_5,
      &VAR_10))
  return (1);

 FUNC_6(&VAR_8->huge_mtx);

 FUNC_3(VAR_7, VAR_5);
 FUNC_7(&VAR_8->huge_mtx);

 if (VAR_6 || (VAR_0 && FUNC_9(VAR_2))) {
  if (!VAR_9) {
   FUNC_8((void *)((uintptr_t)VAR_3 + VAR_4), 0,
       FUNC_0(VAR_4) - VAR_4);
  }
  if (!VAR_10) {
   FUNC_8((void *)((uintptr_t)VAR_3 +
       FUNC_0(VAR_4)), 0, VAR_5 -
       FUNC_0(VAR_4));
  }
 } else if (VAR_0 && FUNC_9(VAR_1)) {
  FUNC_8((void *)((uintptr_t)VAR_3 + VAR_4), 0xa5, VAR_5 -
      VAR_4);
 }

 return (0);
}
