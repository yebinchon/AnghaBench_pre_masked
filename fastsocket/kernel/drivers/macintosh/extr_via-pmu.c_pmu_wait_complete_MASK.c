
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adb_request {int complete; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;

void
FUNC_1(struct adb_request *VAR_4)
{
 if (!VAR_3)
  return;
 while((VAR_2 != VAR_0 && VAR_2 != VAR_1) || !VAR_4->complete)
  FUNC_0(0, ((void*)0));
}
