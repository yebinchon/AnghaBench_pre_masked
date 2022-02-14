
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_4__ {scalar_t__ AsyncMode; } ;
typedef TYPE_1__ SOCK ;


 scalar_t__ FUNC_0 (TYPE_1__*,int *,scalar_t__,int) ;

bool FUNC_1(SOCK *VAR_0, void *VAR_1, UINT VAR_2, bool VAR_3)
{
 UCHAR *VAR_4;
 UINT VAR_5;
 UINT VAR_6;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }
 if (VAR_0->AsyncMode)
 {
  return 0;
 }
 if (VAR_2 == 0)
 {
  return 1;
 }

 VAR_4 = (UCHAR *)VAR_1;
 VAR_5 = 0;

 while (1)
 {
  VAR_6 = FUNC_0(VAR_0, VAR_4, VAR_2 - VAR_5, VAR_3);
  if (VAR_6 == 0)
  {
   return 0;
  }
  VAR_5 += VAR_6;
  VAR_4 += VAR_6;
  if (VAR_5 >= VAR_2)
  {
   return 1;
  }
 }
}
