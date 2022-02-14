
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_2__ {int ServerName; int Path; } ;
typedef TYPE_1__ LOG_FILE ;


 int FUNC_0 (int ,int ) ;

int FUNC_1(void *VAR_0, void *VAR_1)
{
 LOG_FILE *VAR_2, *VAR_3;
 UINT VAR_4;
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }
 VAR_2 = *(LOG_FILE **)VAR_0;
 VAR_3 = *(LOG_FILE **)VAR_1;
 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 VAR_4 = FUNC_0(VAR_2->Path, VAR_3->Path);
 if (VAR_4 != 0)
 {
  return VAR_4;
 }

 return FUNC_0(VAR_2->ServerName, VAR_3->ServerName);
}
