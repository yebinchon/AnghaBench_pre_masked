
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_7__ {int pager; } ;
typedef TYPE_1__ Table ;
struct TYPE_8__ {int end_of_table; int page_num; } ;
typedef TYPE_2__ Cursor ;


 void* FUNC_0 (int ,int ) ;
 scalar_t__* FUNC_1 (void*) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int ) ;

Cursor* FUNC_3(Table* VAR_0) {
  Cursor* VAR_1 = FUNC_2(VAR_0, 0);

  void* VAR_2 = FUNC_0(VAR_0->pager, VAR_1->page_num);
  uint32_t VAR_3 = *FUNC_1(VAR_2);
  VAR_1->end_of_table = (VAR_3 == 0);

  return VAR_1;
}
