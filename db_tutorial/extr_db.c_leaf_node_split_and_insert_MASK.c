
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int32_t ;
struct TYPE_6__ {int pager; } ;
struct TYPE_5__ {int page_num; int cell_num; TYPE_3__* table; } ;
typedef int Row ;
typedef TYPE_1__ Cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (TYPE_3__*,int,int) ;
 scalar_t__ FUNC_6 (void*) ;
 void* FUNC_7 (void*,int) ;
 int* FUNC_8 (void*,int) ;
 int* FUNC_9 (void*) ;
 int* FUNC_10 (void*) ;
 int FUNC_11 (void*,int) ;
 int FUNC_12 (void*,void*,int ) ;
 int* FUNC_13 (void*) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (void*,int,int) ;

void FUNC_16(Cursor* VAR_4, uint32_t VAR_5, Row* VAR_6) {






  void* VAR_7 = FUNC_2(VAR_4->table->pager, VAR_4->page_num);
  uint32_t VAR_8 = FUNC_1(VAR_7);
  uint32_t VAR_9 = FUNC_3(VAR_4->table->pager);
  void* VAR_10 = FUNC_2(VAR_4->table->pager, VAR_9);
  FUNC_4(VAR_10);
  *FUNC_13(VAR_10) = *FUNC_13(VAR_7);
  *FUNC_9(VAR_10) = *FUNC_9(VAR_7);
  *FUNC_9(VAR_7) = VAR_9;






  for (int32_t VAR_11 = VAR_2; VAR_11 >= 0; VAR_11--) {
    void* VAR_12;
    if (VAR_11 >= VAR_1) {
      VAR_12 = VAR_10;
    } else {
      VAR_12 = VAR_7;
    }
    uint32_t VAR_13 = VAR_11 % VAR_1;
    void* VAR_14 = FUNC_7(VAR_12, VAR_13);

    if (VAR_11 == VAR_4->cell_num) {
      FUNC_14(VAR_6,
                    FUNC_11(VAR_12, VAR_13));
      *FUNC_8(VAR_12, VAR_13) = VAR_5;
    } else if (VAR_11 > VAR_4->cell_num) {
      FUNC_12(VAR_14, FUNC_7(VAR_7, VAR_11 - 1), VAR_0);
    } else {
      FUNC_12(VAR_14, FUNC_7(VAR_7, VAR_11), VAR_0);
    }
  }


  *(FUNC_10(VAR_7)) = VAR_1;
  *(FUNC_10(VAR_10)) = VAR_3;

  if (FUNC_6(VAR_7)) {
    return FUNC_0(VAR_4->table, VAR_9);
  } else {
    uint32_t VAR_15 = *FUNC_13(VAR_7);
    uint32_t VAR_16 = FUNC_1(VAR_7);
    void* VAR_17 = FUNC_2(VAR_4->table->pager, VAR_15);

    FUNC_15(VAR_17, VAR_8, VAR_16);
    FUNC_5(VAR_4->table, VAR_15, VAR_9);
    return;
  }
}
