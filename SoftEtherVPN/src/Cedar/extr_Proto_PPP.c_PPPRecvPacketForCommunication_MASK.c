
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * LastStoredPacket; } ;
typedef TYPE_1__ PPP_SESSION ;
typedef int PPP_PACKET ;


 int * FUNC_0 (TYPE_1__*,int) ;

PPP_PACKET *FUNC_1(PPP_SESSION *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 if (VAR_0->LastStoredPacket != ((void*)0))
 {
  PPP_PACKET *VAR_1 = VAR_0->LastStoredPacket;
  VAR_0->LastStoredPacket = ((void*)0);
  return VAR_1;
 }

 return FUNC_0(VAR_0, 1);
}
