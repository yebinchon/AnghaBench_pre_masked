
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ root_page_num; TYPE_2__* pager; } ;
typedef TYPE_1__ Table ;
struct TYPE_8__ {scalar_t__ num_pages; } ;
typedef TYPE_2__ Pager ;


 void* FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (void*) ;
 TYPE_1__* FUNC_2 (int) ;
 TYPE_2__* FUNC_3 (char const*) ;
 int FUNC_4 (void*,int) ;

Table* FUNC_5(const char* VAR_0) {
  Pager* VAR_1 = FUNC_3(VAR_0);

  Table* VAR_2 = FUNC_2(sizeof(Table));
  VAR_2->pager = VAR_1;
  VAR_2->root_page_num = 0;

  if (VAR_1->num_pages == 0) {

    void* VAR_3 = FUNC_0(VAR_1, 0);
    FUNC_1(VAR_3);
    FUNC_4(VAR_3, 1);
  }

  return VAR_2;
}
