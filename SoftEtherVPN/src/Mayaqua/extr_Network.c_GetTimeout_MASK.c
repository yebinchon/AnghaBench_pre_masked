
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {scalar_t__ Type; int TimeOut; } ;
typedef TYPE_1__ SOCK ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

UINT FUNC_0(SOCK *VAR_3)
{

 if (VAR_3 == ((void*)0))
 {
  return VAR_0;
 }
 if (VAR_3->Type != VAR_2 && VAR_3->Type != VAR_1)
 {
  return VAR_0;
 }

 return VAR_3->TimeOut;
}
