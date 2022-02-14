
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int st ;
typedef int now ;
typedef scalar_t__ UINT64 ;
typedef int UINT ;
struct TYPE_5__ {int wYear; int wMonth; int wDay; } ;
typedef TYPE_1__ SYSTEMTIME ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;

UINT FUNC_5()
{
 SYSTEMTIME VAR_0;

 FUNC_4(&VAR_0, sizeof(VAR_0));
 FUNC_1(&VAR_0);

 if (VAR_0.wYear >= 2030)
 {
  UINT64 VAR_1 = FUNC_2();
  UINT64 VAR_2;
  SYSTEMTIME VAR_3;

  FUNC_4(&VAR_3, sizeof(VAR_3));
  VAR_3.wYear = 2049;
  VAR_3.wMonth = 12;
  VAR_3.wDay = 30;

  VAR_2 = FUNC_3(&VAR_3);

  if (VAR_1 >= VAR_2)
  {
   return 0;
  }
  else
  {
   return (UINT)((VAR_2 - VAR_1) / (UINT64)(1000 * 60 * 60 * 24));
  }
 }
 else
 {
  return FUNC_0();
 }
}
