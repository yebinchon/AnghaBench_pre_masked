
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef scalar_t__ UCHAR ;
struct TYPE_7__ {int OptionList; } ;
struct TYPE_6__ {scalar_t__ Type; } ;
typedef TYPE_1__ PPP_OPTION ;
typedef TYPE_2__ PPP_LCP ;


 TYPE_1__* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

PPP_OPTION *FUNC_2(PPP_LCP *VAR_0, UCHAR VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 for (VAR_2 = 0;VAR_2 < FUNC_1(VAR_0->OptionList);VAR_2++)
 {
  PPP_OPTION *VAR_3 = FUNC_0(VAR_0->OptionList, VAR_2);

  if (VAR_3->Type == VAR_1)
  {
   return VAR_3;
  }
 }

 return ((void*)0);
}
