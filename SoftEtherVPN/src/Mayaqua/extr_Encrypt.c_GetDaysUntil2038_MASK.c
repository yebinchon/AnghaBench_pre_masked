
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int st ;
typedef scalar_t__ UINT64 ;
typedef int UINT ;
struct TYPE_4__ {int wYear; int wMonth; int wDay; } ;
typedef TYPE_1__ SYSTEMTIME ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;

UINT FUNC_3()
{
 UINT64 VAR_0 = FUNC_0();
 UINT64 VAR_1;
 SYSTEMTIME VAR_2;

 FUNC_2(&VAR_2, sizeof(VAR_2));
 VAR_2.wYear = 2038;
 VAR_2.wMonth = 1;
 VAR_2.wDay = 1;

 VAR_1 = FUNC_1(&VAR_2);

 if (VAR_0 >= VAR_1)
 {
  return 0;
 }
 else
 {
  return (UINT)((VAR_1 - VAR_0) / (UINT64)(1000 * 60 * 60 * 24));
 }
}
