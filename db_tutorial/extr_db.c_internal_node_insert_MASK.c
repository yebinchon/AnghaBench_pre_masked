
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int pager; } ;
typedef TYPE_1__ Table ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void*) ;
 void* FUNC_2 (int ,scalar_t__) ;
 void* FUNC_3 (void*,scalar_t__) ;
 scalar_t__* FUNC_4 (void*,scalar_t__) ;
 scalar_t__ FUNC_5 (void*,scalar_t__) ;
 scalar_t__* FUNC_6 (void*,scalar_t__) ;
 scalar_t__* FUNC_7 (void*) ;
 scalar_t__* FUNC_8 (void*) ;
 int FUNC_9 (void*,void*,int ) ;
 int FUNC_10 (char*) ;

void FUNC_11(Table* VAR_3, uint32_t VAR_4,
                          uint32_t VAR_5) {




  void* VAR_6 = FUNC_2(VAR_3->pager, VAR_4);
  void* VAR_7 = FUNC_2(VAR_3->pager, VAR_5);
  uint32_t VAR_8 = FUNC_1(VAR_7);
  uint32_t VAR_9 = FUNC_5(VAR_6, VAR_8);

  uint32_t VAR_10 = *FUNC_7(VAR_6);
  *FUNC_7(VAR_6) = VAR_10 + 1;

  if (VAR_10 >= VAR_2) {
    FUNC_10("Need to implement splitting internal node\n");
    FUNC_0(VAR_0);
  }

  uint32_t VAR_11 = *FUNC_8(VAR_6);
  void* VAR_12 = FUNC_2(VAR_3->pager, VAR_11);

  if (VAR_8 > FUNC_1(VAR_12)) {

    *FUNC_4(VAR_6, VAR_10) = VAR_11;
    *FUNC_6(VAR_6, VAR_10) =
        FUNC_1(VAR_12);
    *FUNC_8(VAR_6) = VAR_5;
  } else {

    for (uint32_t VAR_13 = VAR_10; VAR_13 > VAR_9; VAR_13--) {
      void* VAR_14 = FUNC_3(VAR_6, VAR_13);
      void* VAR_15 = FUNC_3(VAR_6, VAR_13 - 1);
      FUNC_9(VAR_14, VAR_15, VAR_1);
    }
    *FUNC_4(VAR_6, VAR_9) = VAR_5;
    *FUNC_6(VAR_6, VAR_9) = VAR_8;
  }
}
