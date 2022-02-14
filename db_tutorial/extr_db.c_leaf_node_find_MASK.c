
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int pager; } ;
typedef TYPE_1__ Table ;
struct TYPE_7__ {int page_num; int end_of_table; int cell_num; TYPE_1__* table; } ;
typedef TYPE_2__ Cursor ;


 void* FUNC_0 (int ,int) ;
 int* FUNC_1 (void*,int) ;
 int* FUNC_2 (void*) ;
 TYPE_2__* FUNC_3 (int) ;

Cursor* FUNC_4(Table* VAR_0, uint32_t VAR_1, uint32_t VAR_2) {
  void* VAR_3 = FUNC_0(VAR_0->pager, VAR_1);
  uint32_t VAR_4 = *FUNC_2(VAR_3);

  Cursor* VAR_5 = FUNC_3(sizeof(Cursor));
  VAR_5->table = VAR_0;
  VAR_5->page_num = VAR_1;
  VAR_5->end_of_table = 0;


  uint32_t VAR_6 = 0;
  uint32_t VAR_7 = VAR_4;
  while (VAR_7 != VAR_6) {
    uint32_t VAR_8 = (VAR_6 + VAR_7) / 2;
    uint32_t VAR_9 = *FUNC_1(VAR_3, VAR_8);
    if (VAR_2 == VAR_9) {
      VAR_5->cell_num = VAR_8;
      return VAR_5;
    }
    if (VAR_2 < VAR_9) {
      VAR_7 = VAR_8;
    } else {
      VAR_6 = VAR_8 + 1;
    }
  }

  VAR_5->cell_num = VAR_6;
  return VAR_5;
}
