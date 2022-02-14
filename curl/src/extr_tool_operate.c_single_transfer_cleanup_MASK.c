
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct State {int * inglob; int uploadfile; int httpgetfields; int outfiles; int * urls; } ;
struct OperationConfig {struct State state; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct OperationConfig *VAR_0)
{
  if(VAR_0) {
    struct State *VAR_1 = &VAR_0->state;
    if(VAR_1->urls) {

      FUNC_1(VAR_1->urls);
      VAR_1->urls = ((void*)0);
    }
    FUNC_0(VAR_1->outfiles);
    FUNC_0(VAR_1->httpgetfields);
    FUNC_0(VAR_1->uploadfile);
    if(VAR_1->inglob) {

      FUNC_1(VAR_1->inglob);
      VAR_1->inglob = ((void*)0);
    }
  }
}
