
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct OperationConfig {struct OperationConfig* prev; } ;


 int FUNC_0 (struct OperationConfig*) ;
 int FUNC_1 (struct OperationConfig*) ;

void FUNC_2(struct OperationConfig *VAR_0)
{
  struct OperationConfig *VAR_1 = VAR_0;


  while(VAR_1) {
    struct OperationConfig *VAR_2 = VAR_1->prev;

    FUNC_1(VAR_1);
    FUNC_0(VAR_1);

    VAR_1 = VAR_2;
  }
}
