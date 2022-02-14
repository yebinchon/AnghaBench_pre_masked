
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_16__ {TYPE_1__* CurrentIkeSa; scalar_t__ ServerPort; int ServerIP; scalar_t__ ClientPort; int ClientIP; } ;
struct TYPE_15__ {scalar_t__ InitiatorCookie; scalar_t__ ResponderCookie; } ;
struct TYPE_14__ {scalar_t__ InitiatorCookie; scalar_t__ ResponderCookie; TYPE_5__* IkeClient; } ;
struct TYPE_13__ {int IkeSaList; int ClientList; } ;
struct TYPE_12__ {scalar_t__ InitiatorCookie; scalar_t__ ResponderCookie; } ;
typedef int IP ;
typedef TYPE_2__ IKE_SERVER ;
typedef TYPE_3__ IKE_SA ;
typedef TYPE_4__ IKE_PACKET ;
typedef TYPE_5__ IKE_CLIENT ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int) ;
 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_5__* FUNC_4 (int ,TYPE_5__*) ;

IKE_CLIENT *FUNC_5(IKE_SERVER *VAR_1, IP *VAR_2, UINT VAR_3, IP *VAR_4, UINT VAR_5, IKE_PACKET *VAR_6)
{
 IKE_CLIENT VAR_7;
 IKE_CLIENT *VAR_8 = ((void*)0);

 if (VAR_1 == ((void*)0) || VAR_6 == ((void*)0) || VAR_2 == ((void*)0) || VAR_4 == ((void*)0) || VAR_3 == 0 || VAR_5 == 0)
 {
  return ((void*)0);
 }

 if (1)
 {
  UINT VAR_9;

  if (VAR_6->InitiatorCookie != 0 && VAR_6->ResponderCookie != 0)
  {
   for (VAR_9 = 0;VAR_9 < FUNC_3(VAR_1->IkeSaList);VAR_9++)
   {
    IKE_SA *VAR_10 = FUNC_2(VAR_1->IkeSaList, VAR_9);


    if (VAR_10->InitiatorCookie == VAR_6->InitiatorCookie && VAR_10->ResponderCookie == VAR_6->ResponderCookie)
    {
     IKE_CLIENT *VAR_11 = VAR_10->IkeClient;

     if (FUNC_0(&VAR_11->ServerIP, VAR_4) == 0 &&
      FUNC_0(&VAR_11->ClientIP, VAR_2) == 0)
     {
      VAR_8 = VAR_11;
      break;
     }
    }
   }
  }
 }

 if (VAR_8 == ((void*)0))
 {

  FUNC_1(&VAR_7.ClientIP, VAR_2, sizeof(IP));
  VAR_7.ClientPort = VAR_3;
  FUNC_1(&VAR_7.ServerIP, VAR_4, sizeof(IP));
  VAR_7.ServerPort = VAR_5;

  VAR_8 = FUNC_4(VAR_1->ClientList, &VAR_7);

  if (VAR_8 != ((void*)0))
  {

   bool VAR_12 = 0;
   UINT VAR_13;

   if (VAR_5 == VAR_0)
   {

    VAR_12 = 1;
   }
   else
   {
    if (VAR_8->CurrentIkeSa != ((void*)0) &&
     VAR_8->CurrentIkeSa->InitiatorCookie == VAR_6->InitiatorCookie &&
     VAR_8->CurrentIkeSa->ResponderCookie == VAR_6->ResponderCookie)
    {
     VAR_12 = 1;
    }
    else
    {
     for (VAR_13 = 0;VAR_13 < FUNC_3(VAR_1->IkeSaList);VAR_13++)
     {
      IKE_SA *VAR_14 = FUNC_2(VAR_1->IkeSaList, VAR_13);

      if (VAR_14->IkeClient == VAR_8)
      {
       if (VAR_14->InitiatorCookie == VAR_6->InitiatorCookie &&
        VAR_14->ResponderCookie == VAR_6->ResponderCookie)
       {
        VAR_12 = 1;
        break;
       }
      }
     }
    }
   }

   if (VAR_12 == 0)
   {

    VAR_8 = ((void*)0);
   }
  }
 }

 return VAR_8;
}
