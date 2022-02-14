
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * BufferQueue; int * s; } ;
struct TYPE_4__ {scalar_t__ Protocol; int * FirstSock; TYPE_2__* Udp; int Session; int Cedar; scalar_t__ ServerMode; } ;
typedef TYPE_1__ CONNECTION ;
typedef int BUF ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(CONNECTION *VAR_1)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }
 if (VAR_1->Protocol != VAR_0)
 {
  return;
 }


 if (VAR_1->ServerMode)
 {
  FUNC_0(VAR_1->Cedar, VAR_1->Session);
 }


 if (VAR_1->Udp != ((void*)0))
 {
  if (VAR_1->Udp->s != ((void*)0))
  {
   FUNC_6(VAR_1->Udp->s);
  }
  if (VAR_1->Udp->BufferQueue != ((void*)0))
  {

   BUF *VAR_2;
   while ((VAR_2 = FUNC_4(VAR_1->Udp->BufferQueue)))
   {
    FUNC_3(VAR_2);
   }
   FUNC_5(VAR_1->Udp->BufferQueue);
  }
  FUNC_2(VAR_1->Udp);
  VAR_1->Udp = ((void*)0);
 }

 if (VAR_1->FirstSock != ((void*)0))
 {
  FUNC_1(VAR_1->FirstSock);
  FUNC_6(VAR_1->FirstSock);
  VAR_1->FirstSock = ((void*)0);
 }
}
