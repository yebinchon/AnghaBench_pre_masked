
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_6__ {int Length; int Type; } ;
struct TYPE_5__ {int * Mtu; int * Prefix; int * TargetLinkLayer; int * SourceLinkLayer; } ;
typedef int ICMPV6_OPTION_PREFIX ;
typedef int ICMPV6_OPTION_MTU ;
typedef TYPE_1__ ICMPV6_OPTION_LIST ;
typedef int ICMPV6_OPTION_LINK_LAYER ;
typedef TYPE_2__ ICMPV6_OPTION ;






 int FUNC_0 (TYPE_1__*,int) ;

bool FUNC_1(ICMPV6_OPTION_LIST *VAR_0, UCHAR *VAR_1, UINT VAR_2)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 FUNC_0(VAR_0, sizeof(ICMPV6_OPTION_LIST));


 while (1)
 {
  ICMPV6_OPTION *VAR_3;
  UINT VAR_4;
  UCHAR *VAR_5;
  if (VAR_2 < sizeof(ICMPV6_OPTION))
  {

   return 1;
  }

  VAR_3 = (ICMPV6_OPTION *)VAR_1;

  VAR_4 = VAR_3->Length * 8;
  if (VAR_4 == 0)
  {

   return 1;
  }
  if (VAR_2 < VAR_4)
  {

   return 1;
  }

  VAR_5 = VAR_1;
  VAR_1 += VAR_4;
  VAR_2 -= VAR_4;

  switch (VAR_3->Type)
  {
  case 129:
  case 128:

   if (VAR_4 >= sizeof(ICMPV6_OPTION_LINK_LAYER))
   {
    if (VAR_3->Type == 129)
    {
     VAR_0->SourceLinkLayer = (ICMPV6_OPTION_LINK_LAYER *)VAR_5;
    }
    else
    {
     VAR_0->TargetLinkLayer = (ICMPV6_OPTION_LINK_LAYER *)VAR_5;
    }
   }
   else
   {

    return 0;
   }
   break;

  case 130:

   if (VAR_4 >= sizeof(ICMPV6_OPTION_PREFIX))
   {
    VAR_0->Prefix = (ICMPV6_OPTION_PREFIX *)VAR_5;
   }
   else
   {

   }
   break;

  case 131:

   if (VAR_4 >= sizeof(ICMPV6_OPTION_MTU))
   {
    VAR_0->Mtu = (ICMPV6_OPTION_MTU *)VAR_5;
   }
   else
   {

   }
   break;
  }
 }
}
