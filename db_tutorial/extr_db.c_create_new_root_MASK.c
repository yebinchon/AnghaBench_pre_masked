
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_3__ {void* root_page_num; int pager; } ;
typedef TYPE_1__ Table ;


 int VAR_0 ;
 void* FUNC_0 (void*) ;
 void* FUNC_1 (int ,void*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (void*) ;
 void** FUNC_4 (void*,int ) ;
 void** FUNC_5 (void*,int ) ;
 int* FUNC_6 (void*) ;
 void** FUNC_7 (void*) ;
 int FUNC_8 (void*,void*,int ) ;
 void** FUNC_9 (void*) ;
 int FUNC_10 (void*,int) ;

void FUNC_11(Table* VAR_1, uint32_t VAR_2) {
  void* VAR_3 = FUNC_1(VAR_1->pager, VAR_1->root_page_num);
  void* VAR_4 = FUNC_1(VAR_1->pager, VAR_2);
  uint32_t VAR_5 = FUNC_2(VAR_1->pager);
  void* VAR_6 = FUNC_1(VAR_1->pager, VAR_5);


  FUNC_8(VAR_6, VAR_3, VAR_0);
  FUNC_10(VAR_6, 0);


  FUNC_3(VAR_3);
  FUNC_10(VAR_3, 1);
  *FUNC_6(VAR_3) = 1;
  *FUNC_4(VAR_3, 0) = VAR_5;
  uint32_t VAR_7 = FUNC_0(VAR_6);
  *FUNC_5(VAR_3, 0) = VAR_7;
  *FUNC_7(VAR_3) = VAR_2;
  *FUNC_9(VAR_6) = VAR_1->root_page_num;
  *FUNC_9(VAR_4) = VAR_1->root_page_num;
}
