
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_2__ {int Cancel; int PacketQueue; int MacAddr; int Id; scalar_t__ Halt; int Event; } ;
typedef int THREAD ;
typedef TYPE_1__ NULL_LAN ;
typedef int BLOCK ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int) ;
 int * FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,char*) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int) ;
 int VAR_0 ;

void FUNC_12(THREAD *VAR_1, void *VAR_2)
{
 NULL_LAN *VAR_3 = (NULL_LAN *)VAR_2;
 UINT64 VAR_4 = FUNC_9() + (UINT64)(60 * 1000);
 UINT VAR_5 = 0;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 while (1)
 {





  FUNC_11(VAR_3->Event, FUNC_7() % 1500);
  if (VAR_3->Halt)
  {
   break;
  }

  FUNC_3(VAR_3->PacketQueue);
  {
   UCHAR *VAR_6;
   BLOCK *VAR_7;
   UINT VAR_8 = FUNC_7() % 1500 + 14;
   UCHAR VAR_9[6];

   FUNC_6(VAR_3->MacAddr, VAR_3->Id, VAR_5);



   FUNC_8(VAR_9, "00-AC-7A-EF-83-FD");

   VAR_6 = FUNC_4(VAR_8);
   FUNC_1(VAR_6, VAR_0, 6);

   FUNC_1(VAR_6 + 6, VAR_3->MacAddr, 6);
   VAR_7 = FUNC_5(VAR_6, VAR_8, 0);
   FUNC_2(VAR_3->PacketQueue, VAR_7);
  }
  FUNC_10(VAR_3->PacketQueue);
  FUNC_0(VAR_3->Cancel);


 }
}
