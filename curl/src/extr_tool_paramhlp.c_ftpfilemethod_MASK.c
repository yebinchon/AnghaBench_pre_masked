
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct OperationConfig {int global; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,char const*) ;
 int FUNC_1 (int ,char*,char const*) ;

int FUNC_2(struct OperationConfig *VAR_3, const char *VAR_4)
{
  if(FUNC_0("singlecwd", VAR_4))
    return VAR_2;
  if(FUNC_0("nocwd", VAR_4))
    return VAR_1;
  if(FUNC_0("multicwd", VAR_4))
    return VAR_0;

  FUNC_1(VAR_3->global, "unrecognized ftp file method '%s', using default\n",
        VAR_4);

  return VAR_0;
}
