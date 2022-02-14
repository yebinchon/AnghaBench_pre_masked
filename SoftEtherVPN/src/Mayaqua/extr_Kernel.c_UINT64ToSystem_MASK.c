
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ time_64t ;
typedef scalar_t__ WORD ;
typedef unsigned long long UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_4__ {scalar_t__ wMilliseconds; } ;
typedef TYPE_1__ SYSTEMTIME ;


 unsigned long long FUNC_0 (unsigned long long) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;

void FUNC_2(SYSTEMTIME *VAR_0, UINT64 VAR_1)
{
 UINT64 VAR_2;
 UINT VAR_3, VAR_4;
 time_64t VAR_5;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_1 = FUNC_0(VAR_1 + 32400000ULL);
 VAR_2 = VAR_1 / (UINT64)1000;
 VAR_4 = (UINT)(VAR_1 - VAR_2 * (UINT64)1000);
 VAR_3 = (UINT)VAR_2;
 VAR_5 = (time_64t)VAR_3;
 FUNC_1(VAR_0, VAR_5);
 VAR_0->wMilliseconds = (WORD)VAR_4;
}
