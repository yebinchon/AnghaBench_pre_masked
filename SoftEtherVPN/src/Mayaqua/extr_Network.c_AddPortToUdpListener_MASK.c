
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {int Event; int PortList; } ;
typedef TYPE_1__ UDPLISTENER ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(UDPLISTENER *VAR_0, UINT VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == 0)
 {
  return;
 }

 FUNC_1(VAR_0->PortList);
 {
  FUNC_0(VAR_0->PortList, VAR_1);
 }
 FUNC_3(VAR_0->PortList);

 FUNC_2(VAR_0->Event);
}
