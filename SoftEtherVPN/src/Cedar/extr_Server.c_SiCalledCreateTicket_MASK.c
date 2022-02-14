
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int username ;
typedef int ticket_str ;
typedef int sessionname ;
typedef int realusername ;
typedef int hubname ;
typedef int groupname ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_15__ {int * TicketList; } ;
struct TYPE_14__ {int Cedar; } ;
struct TYPE_13__ {scalar_t__ CreatedTick; int SessionName; int GroupName; int UsernameReal; int Username; int * Ticket; int Policy; } ;
typedef TYPE_1__ TICKET ;
typedef TYPE_2__ SERVER ;
typedef int POLICY ;
typedef int PACK ;
typedef int LIST ;
typedef TYPE_3__ HUB ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (char*,int,int *,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_3__* FUNC_5 (int ,char*) ;
 int FUNC_6 (int *,int *) ;
 TYPE_1__* FUNC_7 (int *,scalar_t__) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_10 (int *) ;
 int * FUNC_11 () ;
 int FUNC_12 (int *,char*,int ) ;
 int FUNC_13 (int *,char*,int *) ;
 int FUNC_14 (int *,char*) ;
 int FUNC_15 (int *,char*,char*,int) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (int *) ;
 int VAR_2 ;
 int FUNC_18 (int ,char*,char*,char*,char*,char*,char*,int) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (int ,int,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_21 () ;
 int FUNC_22 (int *) ;
 TYPE_1__* FUNC_23 (int) ;

PACK *FUNC_24(SERVER *VAR_4, PACK *VAR_5)
{
 char VAR_6[VAR_1];
 char VAR_7[VAR_1];
 char VAR_8[VAR_1];
 char VAR_9[VAR_1];
 char VAR_10[VAR_0 + 1];
 POLICY VAR_11;
 UCHAR VAR_12[VAR_2];
 char VAR_13[VAR_1];
 HUB *VAR_14;
 UINT VAR_15;
 PACK *VAR_16;
 TICKET *VAR_17;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return FUNC_11();
 }

 FUNC_15(VAR_5, "UserName", VAR_6, sizeof(VAR_6));
 FUNC_15(VAR_5, "GroupName", VAR_8, sizeof(VAR_8));
 FUNC_15(VAR_5, "HubName", VAR_7, sizeof(VAR_7));
 FUNC_15(VAR_5, "RealUserName", VAR_9, sizeof(VAR_9));
 FUNC_15(VAR_5, "SessionName", VAR_10, sizeof(VAR_10));

 FUNC_6(&VAR_11, VAR_5);
 if (FUNC_14(VAR_5, "Ticket") == VAR_2)
 {
  FUNC_13(VAR_5, "Ticket", VAR_12);
 }

 FUNC_1(VAR_13, sizeof(VAR_13), VAR_12, VAR_2);

 FUNC_18(VAR_4->Cedar, "LS_TICKET_2", VAR_7, VAR_6, VAR_9, VAR_10,
  VAR_13, VAR_3 / 1000);


 VAR_14 = FUNC_5(VAR_4->Cedar, VAR_7);
 if (VAR_14 == ((void*)0))
 {
  return FUNC_11();
 }

 FUNC_9(VAR_14->TicketList);
 {
  LIST *VAR_18 = FUNC_10(((void*)0));

  for (VAR_15 = 0;VAR_15 < FUNC_8(VAR_14->TicketList);VAR_15++)
  {
   TICKET *VAR_19 = FUNC_7(VAR_14->TicketList, VAR_15);
   if ((VAR_19->CreatedTick + VAR_3) < FUNC_21())
   {
    FUNC_0(VAR_18, VAR_19);
   }
  }
  for (VAR_15 = 0;VAR_15 < FUNC_8(VAR_18);VAR_15++)
  {
   TICKET *VAR_20 = FUNC_7(VAR_18, VAR_15);
   FUNC_3(VAR_14->TicketList, VAR_20);
   FUNC_4(VAR_20);
  }
  FUNC_17(VAR_18);


  VAR_17 = FUNC_23(sizeof(TICKET));
  VAR_17->CreatedTick = FUNC_21();
  FUNC_2(&VAR_17->Policy, &VAR_11, sizeof(POLICY));
  FUNC_2(VAR_17->Ticket, VAR_12, VAR_2);
  FUNC_20(VAR_17->Username, sizeof(VAR_17->Username), VAR_6);
  FUNC_20(VAR_17->UsernameReal, sizeof(VAR_17->UsernameReal), VAR_9);
  FUNC_20(VAR_17->GroupName, sizeof(VAR_17->GroupName), VAR_8);
  FUNC_20(VAR_17->SessionName, sizeof(VAR_17->SessionName), VAR_10);

  FUNC_0(VAR_14->TicketList, VAR_17);
 }
 FUNC_22(VAR_14->TicketList);

 FUNC_16(VAR_14);

 VAR_16 = FUNC_11();

 FUNC_12(VAR_16, "Point", FUNC_19(VAR_4));

 return VAR_16;
}
