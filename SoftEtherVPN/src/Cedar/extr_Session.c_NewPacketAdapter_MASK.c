
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * PutPacket; int * GetNextPacket; int * GetCancel; int * Free; int * Init; } ;
typedef int PA_PUTPACKET ;
typedef int PA_INIT ;
typedef int PA_GETNEXTPACKET ;
typedef int PA_GETCANCEL ;
typedef int PA_FREE ;
typedef TYPE_1__ PACKET_ADAPTER ;


 TYPE_1__* FUNC_0 (int) ;

PACKET_ADAPTER *FUNC_1(PA_INIT *VAR_0, PA_GETCANCEL *VAR_1, PA_GETNEXTPACKET *VAR_2,
         PA_PUTPACKET *VAR_3, PA_FREE *VAR_4)
{
 PACKET_ADAPTER *VAR_5;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_5 = FUNC_0(sizeof(PACKET_ADAPTER));

 VAR_5->Init = VAR_0;
 VAR_5->Free = VAR_4;
 VAR_5->GetCancel = VAR_1;
 VAR_5->GetNextPacket = VAR_2;
 VAR_5->PutPacket = VAR_3;

 return VAR_5;
}
