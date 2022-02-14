
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct OperationConfig {int global; } ;
typedef size_t HttpReq ;


 scalar_t__ FUNC_0 (char*,char const*) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (int ,char*) ;

void FUNC_3(struct OperationConfig *VAR_0, HttpReq VAR_1,
                          char *VAR_2)
{

  const char *VAR_3[]= {
    "GET",
    "GET",
    "HEAD",
    "POST",
    "POST"
  };

  if(!VAR_2)
    ;
  else if(FUNC_0(VAR_2, VAR_3[VAR_1])) {
    FUNC_1(VAR_0->global, "Unnecessary use of -X or --request, %s is already "
          "inferred.\n", VAR_3[VAR_1]);
  }
  else if(FUNC_0(VAR_2, "head")) {
    FUNC_2(VAR_0->global,
          "Setting custom HTTP method to HEAD with -X/--request may not work "
          "the way you want. Consider using -I/--head instead.\n");
  }
}
