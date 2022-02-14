
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_10__ {int OptionList; } ;
struct TYPE_9__ {int IsAccepted; int IsSupported; int AltDataSize; int AltData; } ;
typedef TYPE_1__ PPP_OPTION ;
typedef TYPE_2__ PPP_LCP ;
typedef int IP ;


 int FUNC_0 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int *,int) ;
 TYPE_1__* FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int ,int *,int) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int ,int *) ;

bool FUNC_8(PPP_LCP *VAR_0, UINT VAR_1, IP *VAR_2, bool VAR_3)
{
 IP VAR_4;
 UINT VAR_5;

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 VAR_5 = FUNC_4(VAR_2);

 if (FUNC_7(VAR_0, VAR_1, &VAR_4))
 {
  PPP_OPTION *VAR_6;
  VAR_6 = FUNC_3(VAR_0, VAR_1);

  if (VAR_6 != ((void*)0))
  {
   if (FUNC_5(VAR_2) == 0)
   {
    if (FUNC_1(&VAR_4, VAR_2) == 0)
    {

     VAR_6->IsAccepted = 1;
     VAR_6->IsSupported = 1;
    }
    else
    {

     VAR_6->IsAccepted = 0;
     VAR_6->IsSupported = 1;
     VAR_6->AltDataSize = 4;
     FUNC_2(VAR_6->AltData, &VAR_5, 4);
    }
   }
   else
   {


    VAR_6->IsSupported = 0;
    VAR_6->IsAccepted = 0;
   }
  }

  return 1;
 }
 else
 {
  if (FUNC_5(VAR_2) == 0)
  {

   if (VAR_3 != 0)
   {
    return 0;
   }
   else
   {
    PPP_OPTION *VAR_7 = FUNC_6(VAR_1, &VAR_5, 4);
    VAR_7->IsAccepted = VAR_7->IsSupported = 1;

    FUNC_0(VAR_0->OptionList, VAR_7);

    return 1;
   }
  }
  else
  {
   return 0;
  }
 }
}
