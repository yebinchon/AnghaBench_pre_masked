
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int info ;
struct TYPE_4__ {int dwOSVersionInfoSize; scalar_t__ dwPlatformId; } ;
typedef TYPE_1__ OSVERSIONINFO ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;

bool FUNC_2()
{
 OSVERSIONINFO VAR_1;

 FUNC_1(&VAR_1, sizeof(VAR_1));
 VAR_1.dwOSVersionInfoSize = sizeof(VAR_1);

 if (FUNC_0(&VAR_1) == 0)
 {
  return 0;
 }

 if (VAR_1.dwPlatformId == VAR_0)
 {
  return 1;
 }

 return 0;
}
