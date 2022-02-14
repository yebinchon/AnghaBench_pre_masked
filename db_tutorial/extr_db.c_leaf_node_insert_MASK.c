
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {scalar_t__ cell_num; int page_num; TYPE_1__* table; } ;
struct TYPE_5__ {int pager; } ;
typedef int Row ;
typedef TYPE_2__ Cursor ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (void*,scalar_t__) ;
 scalar_t__* FUNC_2 (void*,scalar_t__) ;
 int* FUNC_3 (void*) ;
 int FUNC_4 (TYPE_2__*,scalar_t__,int *) ;
 int FUNC_5 (void*,scalar_t__) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int *,int ) ;

void FUNC_8(Cursor* VAR_2, uint32_t VAR_3, Row* VAR_4) {
  void* VAR_5 = FUNC_0(VAR_2->table->pager, VAR_2->page_num);

  uint32_t VAR_6 = *FUNC_3(VAR_5);
  if (VAR_6 >= VAR_1) {

    FUNC_4(VAR_2, VAR_3, VAR_4);
    return;
  }

  if (VAR_2->cell_num < VAR_6) {

    for (uint32_t VAR_7 = VAR_6; VAR_7 > VAR_2->cell_num; VAR_7--) {
      FUNC_6(FUNC_1(VAR_5, VAR_7), FUNC_1(VAR_5, VAR_7 - 1),
             VAR_0);
    }
  }

  *(FUNC_3(VAR_5)) += 1;
  *(FUNC_2(VAR_5, VAR_2->cell_num)) = VAR_3;
  FUNC_7(VAR_4, FUNC_5(VAR_5, VAR_2->cell_num));
}
