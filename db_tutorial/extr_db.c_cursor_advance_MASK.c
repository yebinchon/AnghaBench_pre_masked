
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ page_num; scalar_t__ cell_num; int end_of_table; TYPE_1__* table; } ;
struct TYPE_4__ {int pager; } ;
typedef TYPE_2__ Cursor ;


 void* FUNC_0 (int ,scalar_t__) ;
 scalar_t__* FUNC_1 (void*) ;
 scalar_t__* FUNC_2 (void*) ;

void FUNC_3(Cursor* VAR_0) {
  uint32_t VAR_1 = VAR_0->page_num;
  void* VAR_2 = FUNC_0(VAR_0->table->pager, VAR_1);

  VAR_0->cell_num += 1;
  if (VAR_0->cell_num >= (*FUNC_2(VAR_2))) {

    uint32_t VAR_3 = *FUNC_1(VAR_2);
    if (VAR_3 == 0) {

      VAR_0->end_of_table = 1;
    } else {
      VAR_0->page_num = VAR_3;
      VAR_0->cell_num = 0;
    }
  }
}
