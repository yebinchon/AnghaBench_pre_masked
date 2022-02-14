
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef long long time_64t ;
typedef unsigned long long UINT64 ;
struct TYPE_4__ {scalar_t__ wMilliseconds; } ;
typedef TYPE_1__ SYSTEMTIME ;


 long long FUNC_0 (TYPE_1__*) ;

UINT64 FUNC_1(SYSTEMTIME *VAR_0)
{
 UINT64 VAR_1;
 time_64t VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = FUNC_0(VAR_0);







 if( VAR_2 < 32400000LL ) return 0;

 VAR_1 = (UINT64)VAR_2 * (UINT64)1000;
 VAR_1 += VAR_0->wMilliseconds;

 return VAR_1 - 32400000ULL;
}
