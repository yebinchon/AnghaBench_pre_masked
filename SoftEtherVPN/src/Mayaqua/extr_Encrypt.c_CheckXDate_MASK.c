
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ notBefore; scalar_t__ notAfter; } ;
typedef TYPE_1__ X ;
typedef scalar_t__ UINT64 ;



bool FUNC_0(X *VAR_0, UINT64 VAR_1)
{

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 if (VAR_0->notBefore >= VAR_1 || VAR_0->notAfter <= VAR_1)
 {
  return 0;
 }
 return 1;
}
