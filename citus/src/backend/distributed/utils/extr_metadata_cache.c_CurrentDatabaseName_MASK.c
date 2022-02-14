
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int databaseNameValid; char* databaseName; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int ) ;

char *
FUNC_2(void)
{
 if (!VAR_0.databaseNameValid)
 {
  char *VAR_3 = FUNC_0(VAR_1);
  if (VAR_3 == ((void*)0))
  {
   return ((void*)0);
  }

  FUNC_1(VAR_0.databaseName, VAR_3, VAR_2);
  VAR_0.databaseNameValid = 1;
 }

 return VAR_0.databaseName;
}
