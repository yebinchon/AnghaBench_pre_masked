
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_9__ {int PacketGeneratorThread; scalar_t__ Id; int MacAddr; int Event; int PacketQueue; int Cancel; } ;
struct TYPE_8__ {TYPE_1__* PacketAdapter; } ;
struct TYPE_7__ {void* Param; } ;
typedef TYPE_2__ SESSION ;
typedef TYPE_3__ NULL_LAN ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int FUNC_4 (int ,scalar_t__,int ) ;
 int VAR_0 ;
 TYPE_3__* FUNC_5 (int) ;

bool FUNC_6(SESSION *VAR_1)
{
 NULL_LAN *VAR_2;
 static UINT VAR_3 = 0;

 if (VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_3++;

 VAR_2 = FUNC_5(sizeof(NULL_LAN));
 VAR_2->Id = VAR_3;
 VAR_1->PacketAdapter->Param = (void *)VAR_2;

 VAR_2->Cancel = FUNC_0();
 VAR_2->PacketQueue = FUNC_2();
 VAR_2->Event = FUNC_1();

 FUNC_4(VAR_2->MacAddr, VAR_2->Id, 0);

 VAR_2->PacketGeneratorThread = FUNC_3(VAR_0, VAR_2);

 return 1;
}
