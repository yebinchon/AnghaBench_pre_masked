
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_15__ {scalar_t__ Code; } ;
struct TYPE_14__ {int IsControl; scalar_t__ Protocol; TYPE_9__* Lcp; } ;
struct TYPE_13__ {TYPE_10__* TubeRecv; int NextId; } ;
struct TYPE_12__ {int Event; } ;
typedef TYPE_1__ PPP_SESSION ;
typedef TYPE_2__ PPP_PACKET ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_10__*) ;
 TYPE_9__* FUNC_3 (int ,int ) ;
 TYPE_2__* FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ,scalar_t__) ;
 TYPE_2__* FUNC_8 (int) ;

void FUNC_9(PPP_SESSION *VAR_4)
{
 PPP_PACKET *VAR_5;
 PPP_PACKET *VAR_6;
 UINT64 VAR_7 = FUNC_6() + (UINT64)VAR_3;

 if (VAR_4 == ((void*)0))
 {
  return;
 }


 VAR_5 = FUNC_8(sizeof(PPP_PACKET));
 VAR_5->IsControl = 1;
 VAR_5->Protocol = VAR_2;
 VAR_5->Lcp = FUNC_3(VAR_1, VAR_4->NextId++);
 FUNC_0("PPP: Terminate Request is Sent.\n");
 if (FUNC_5(VAR_4, VAR_5) == 0)
 {
  goto LABEL_CLEANUP;
 }


 while (1)
 {
  UINT64 VAR_8 = FUNC_6();
  UINT VAR_9;

  if (VAR_8 >= VAR_7)
  {
   break;
  }

  while (1)
  {
   if (FUNC_2(VAR_4->TubeRecv) == 0)
   {
    break;
   }

   VAR_6 = FUNC_4(VAR_4, 1);

   if (VAR_6 == ((void*)0))
   {
    break;
   }

   if (VAR_6->IsControl && VAR_6->Protocol == VAR_2 && VAR_6->Lcp->Code == VAR_0)
   {
    FUNC_0("PPP: Terminate ACK is Received.\n");
    FUNC_1(VAR_6);
    goto LABEL_CLEANUP;
   }

   FUNC_1(VAR_6);
  }

  VAR_9 = (UINT)(VAR_7 - VAR_8);

  FUNC_7(VAR_4->TubeRecv->Event, VAR_9);
 }

LABEL_CLEANUP:
 FUNC_1(VAR_5);
}
