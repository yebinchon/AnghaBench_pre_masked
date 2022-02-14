
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int pager; int root_page_num; } ;
typedef TYPE_1__ Table ;
typedef int Cursor ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 void* FUNC_1 (int ,int ) ;
 int * FUNC_2 (TYPE_1__*,int ,int ) ;
 int * FUNC_3 (TYPE_1__*,int ,int ) ;

Cursor* FUNC_4(Table* VAR_1, uint32_t VAR_2) {
  uint32_t VAR_3 = VAR_1->root_page_num;
  void* VAR_4 = FUNC_1(VAR_1->pager, VAR_3);

  if (FUNC_0(VAR_4) == VAR_0) {
    return FUNC_3(VAR_1, VAR_3, VAR_2);
  } else {
    return FUNC_2(VAR_1, VAR_3, VAR_2);
  }
}
