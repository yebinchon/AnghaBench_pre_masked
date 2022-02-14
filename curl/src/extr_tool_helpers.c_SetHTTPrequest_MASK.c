
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct OperationConfig {int global; } ;
typedef size_t HttpReq ;


 size_t VAR_0 ;
 int FUNC_0 (int ,char*,char const*,char const*) ;

int FUNC_1(struct OperationConfig *VAR_1, HttpReq VAR_2, HttpReq *VAR_3)
{

  const char *VAR_4[]= {
    "",
    "GET (-G, --get)",
    "HEAD (-I, --head)",
    "multipart formpost (-F, --form)",
    "POST (-d, --data)"
  };

  if((*VAR_3 == VAR_0) ||
     (*VAR_3 == VAR_2)) {
    *VAR_3 = VAR_2;
    return 0;
  }
  FUNC_0(VAR_1->global, "You can only select one HTTP request method! "
        "You asked for both %s and %s.\n",
        VAR_4[VAR_2], VAR_4[*VAR_3]);

  return 1;
}
