
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct OperationConfig {int global; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char const*) ;
 int FUNC_1 (int ,char*,char const*) ;

int FUNC_2(struct OperationConfig *VAR_2, const char *VAR_3)
{
  if(FUNC_0("passive", VAR_3))
    return VAR_1;
  if(FUNC_0("active", VAR_3))
    return VAR_0;

  FUNC_1(VAR_2->global, "unrecognized ftp CCC method '%s', using default\n",
        VAR_3);

  return VAR_1;
}
