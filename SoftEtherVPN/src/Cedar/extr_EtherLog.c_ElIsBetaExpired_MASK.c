
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int st ;
typedef scalar_t__ UINT64 ;
struct TYPE_4__ {int wDay; int wMonth; int wYear; } ;
typedef TYPE_1__ SYSTEMTIME ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;

bool FUNC_3()
{
 SYSTEMTIME VAR_4;
 UINT64 VAR_5;
 UINT64 VAR_6;
 if (VAR_3 == 0)
 {
  return 0;
 }

 FUNC_2(&VAR_4, sizeof(VAR_4));

 VAR_4.wYear = VAR_2;
 VAR_4.wMonth = VAR_1;
 VAR_4.wDay = VAR_0;

 VAR_5 = FUNC_1(&VAR_4);
 VAR_6 = FUNC_0();

 if (VAR_6 >= VAR_5)
 {
  return 1;
 }

 return 0;
}
