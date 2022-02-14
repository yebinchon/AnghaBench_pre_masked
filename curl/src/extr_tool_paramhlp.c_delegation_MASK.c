
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct OperationConfig {int global; } ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,char*,char*) ;

long FUNC_2(struct OperationConfig *VAR_3, char *VAR_4)
{
  if(FUNC_0("none", VAR_4))
    return VAR_1;
  if(FUNC_0("policy", VAR_4))
    return VAR_2;
  if(FUNC_0("always", VAR_4))
    return VAR_0;

  FUNC_1(VAR_3->global, "unrecognized delegation method '%s', using none\n",
        VAR_4);

  return VAR_1;
}
