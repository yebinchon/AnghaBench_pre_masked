
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ semaphore_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;

kern_return_t
FUNC_1(
 semaphore_t VAR_6)
{
 kern_return_t VAR_7;

 if (VAR_6 == VAR_3)
  return VAR_0;

 VAR_7 = FUNC_0(VAR_6,
           VAR_5,
           VAR_4);
 if (VAR_7 == VAR_1)
  return VAR_2;
 return VAR_7;
}
