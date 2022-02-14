
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_13__ {scalar_t__ Protocol; int lock; TYPE_1__* Udp; } ;
struct TYPE_12__ {int Cancel1; TYPE_4__* Connection; } ;
struct TYPE_11__ {int ref; } ;
struct TYPE_10__ {int port; int ip; TYPE_2__* s; } ;
typedef TYPE_2__ SOCK ;
typedef TYPE_3__ SESSION ;
typedef int IP ;
typedef TYPE_4__ CONNECTION ;
typedef int CEDAR ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int) ;
 TYPE_3__* FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_4__*,int *,int) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ) ;

void FUNC_11(CEDAR *VAR_1, SOCK *VAR_2, IP *VAR_3, UINT VAR_4, void *VAR_5, UINT VAR_6)
{
 SESSION *VAR_7;
 UINT *VAR_8;
 UCHAR *VAR_9;
 CONNECTION *VAR_10;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_5 == ((void*)0) || VAR_6 == 0 || VAR_1 == ((void*)0))
 {
  return;
 }

 if (VAR_6 < 16)
 {

  return;
 }
 VAR_9 = (UCHAR *)VAR_5;
 VAR_8 = (UINT *)(VAR_9 + 4);



 VAR_7 = FUNC_5(VAR_1, FUNC_4(*VAR_8));
 if (VAR_7 == ((void*)0))
 {
  FUNC_3("Invalid UDP Session Key 32: 0x%X\n", *VAR_8);
  return;
 }

 VAR_10 = VAR_7->Connection;


 FUNC_7(VAR_10, VAR_9, VAR_6);


 FUNC_6(VAR_10->lock);
 {
  if (VAR_10->Protocol == VAR_0)
  {
   if (VAR_10->Udp->s != VAR_2)
   {
    if (VAR_10->Udp->s != ((void*)0))
    {
     FUNC_9(VAR_10->Udp->s);
    }
    FUNC_0(VAR_2->ref);
    VAR_10->Udp->s = VAR_2;
   }
   FUNC_2(&VAR_10->Udp->ip, VAR_3, sizeof(UINT));
   VAR_10->Udp->port = VAR_4;
  }
 }
 FUNC_10(VAR_10->lock);


 FUNC_1(VAR_7->Cancel1);


 FUNC_8(VAR_7);
}
