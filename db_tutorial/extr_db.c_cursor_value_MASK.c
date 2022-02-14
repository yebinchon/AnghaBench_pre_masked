
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int cell_num; TYPE_1__* table; int page_num; } ;
struct TYPE_4__ {int pager; } ;
typedef TYPE_2__ Cursor ;


 void* FUNC_0 (int ,int ) ;
 void* FUNC_1 (void*,int ) ;

void* FUNC_2(Cursor* VAR_0) {
  uint32_t VAR_1 = VAR_0->page_num;
  void* VAR_2 = FUNC_0(VAR_0->table->pager, VAR_1);
  return FUNC_1(VAR_2, VAR_0->cell_num);
}
