
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int buffer ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_4__ {scalar_t__ AsyncMode; } ;
typedef TYPE_1__ SOCK ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,scalar_t__,int) ;
 scalar_t__ VAR_0 ;

bool FUNC_2(SOCK *VAR_1, UINT VAR_2, bool VAR_3)
{
 static UCHAR VAR_4[4096];
 UINT VAR_5, VAR_6, VAR_7;
 if (VAR_1 == ((void*)0))
 {
  return 0;
 }
 if (VAR_2 == 0)
 {
  return 1;
 }
 if (VAR_1->AsyncMode)
 {
  return 0;
 }

 VAR_5 = 0;

 while (1)
 {
  VAR_6 = FUNC_0(VAR_2 - VAR_5, sizeof(VAR_4));
  VAR_7 = FUNC_1(VAR_1, VAR_4, VAR_6, VAR_3);
  if (VAR_7 == 0)
  {
   return 0;
  }
  if (VAR_7 == VAR_0)
  {




   return 0;
  }
  VAR_5 += VAR_7;
  if (VAR_5 >= VAR_2)
  {
   return 1;
  }
 }
}
