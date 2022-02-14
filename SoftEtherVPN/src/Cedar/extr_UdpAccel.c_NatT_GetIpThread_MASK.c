
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tmp ;
typedef int hostname ;
typedef int UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_10__ {int NatT_Halt; int NatT_IP_Changed; int NatT_HaltEvent; int NatT_Lock; int NatT_IP; } ;
typedef TYPE_1__ UDP_ACCEL ;
struct TYPE_11__ {int member_0; } ;
typedef int THREAD ;
typedef TYPE_2__ IP ;


 int FUNC_0 (int *,TYPE_2__*,int) ;
 int FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (TYPE_2__*,char*,int ,int*) ;
 int FUNC_3 (char*,int,TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_7 (int,int) ;
 int FUNC_8 (char*,int,TYPE_2__*) ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_2__*,int,int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,scalar_t__) ;

void FUNC_13(THREAD *VAR_3, void *VAR_4)
{
 UDP_ACCEL *VAR_5;
 char VAR_6[VAR_0];
 static IP VAR_7 = {0};
 UINT VAR_8 = 0;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return;
 }

 VAR_5 = (UDP_ACCEL *)VAR_4;

 if (FUNC_4(&VAR_7))
 {
  FUNC_10(&VAR_7, 11, FUNC_9(), FUNC_9(), FUNC_9());
 }

 FUNC_8(VAR_6, sizeof(VAR_6), &VAR_7);

 while (VAR_5->NatT_Halt == 0)
 {
  IP VAR_9;
  UINT VAR_10 = VAR_1;


  bool VAR_11 = FUNC_2(&VAR_9, VAR_6, 0, &VAR_5->NatT_Halt);

  if (VAR_11 && (FUNC_5(&VAR_9) == 0))
  {
   char VAR_12[128];


   FUNC_6(VAR_5->NatT_Lock);
   {
    FUNC_0(&VAR_5->NatT_IP, &VAR_9, sizeof(IP));
   }
   FUNC_11(VAR_5->NatT_Lock);

   FUNC_3(VAR_12, sizeof(VAR_12), &VAR_9);
   FUNC_1("NAT-T IP Address Resolved: %s = %s\n", VAR_6, VAR_12);

   VAR_5->NatT_IP_Changed = 1;

   break;
  }


  VAR_8++;

  VAR_10 = (UINT)(FUNC_7((UINT64)VAR_1 * (UINT64)VAR_8, (UINT64)VAR_2));

  FUNC_12(VAR_5->NatT_HaltEvent, VAR_10);
 }
}
