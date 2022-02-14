
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int pager; } ;
typedef TYPE_1__ Table ;
typedef int Cursor ;




 int FUNC_0 (void*) ;
 void* FUNC_1 (int ,int ) ;
 int * FUNC_2 (void*,int ) ;
 int FUNC_3 (void*,int ) ;
 int * FUNC_4 (TYPE_1__*,int ,int ) ;

Cursor* FUNC_5(Table* VAR_0, uint32_t VAR_1, uint32_t VAR_2) {
  void* VAR_3 = FUNC_1(VAR_0->pager, VAR_1);

  uint32_t VAR_4 = FUNC_3(VAR_3, VAR_2);
  uint32_t VAR_5 = *FUNC_2(VAR_3, VAR_4);
  void* VAR_6 = FUNC_1(VAR_0->pager, VAR_5);
  switch (FUNC_0(VAR_6)) {
    case 128:
      return FUNC_4(VAR_0, VAR_5, VAR_2);
    case 129:
      return FUNC_5(VAR_0, VAR_5, VAR_2);
  }
}
