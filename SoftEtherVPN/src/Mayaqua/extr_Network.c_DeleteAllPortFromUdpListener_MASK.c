
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int Event; int PortList; } ;
typedef TYPE_1__ UDPLISTENER ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int* FUNC_7 (int) ;

void FUNC_8(UDPLISTENER *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_0->PortList);
 {
  UINT VAR_1 = FUNC_3(VAR_0->PortList);
  UINT *VAR_2 = FUNC_7(sizeof(UINT) * VAR_1);
  UINT VAR_3;

  for (VAR_3 = 0;VAR_3 < VAR_1;VAR_3++)
  {
   VAR_2[VAR_3] = *((UINT *)(FUNC_2(VAR_0->PortList, VAR_3)));
  }

  for (VAR_3 = 0;VAR_3 < VAR_1;VAR_3++)
  {
   UINT VAR_4 = VAR_2[VAR_3];

   FUNC_0(VAR_0->PortList, VAR_4);
  }

  FUNC_1(VAR_2);
 }
 FUNC_6(VAR_0->PortList);

 FUNC_5(VAR_0->Event);
}
