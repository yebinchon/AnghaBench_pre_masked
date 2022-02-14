
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int IpPacketQueue; } ;
struct TYPE_7__ {int * Packet; } ;
typedef int PKT ;
typedef TYPE_1__ L3PACKET ;
typedef TYPE_2__ L3IF ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;

void FUNC_2(L3IF *VAR_0)
{
 L3PACKET *VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }


 while ((VAR_1 = FUNC_0(VAR_0->IpPacketQueue)))
 {
  PKT *VAR_2 = VAR_1->Packet;


  FUNC_1(VAR_0, VAR_1);
 }
}
