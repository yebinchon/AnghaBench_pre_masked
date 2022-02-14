
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_8__ {int TicketList; } ;
struct TYPE_7__ {int Policy; int GroupName; int SessionName; int UsernameReal; int Username; int Ticket; } ;
typedef TYPE_1__ TICKET ;
typedef int POLICY ;
typedef TYPE_2__ HUB ;


 scalar_t__ FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;
 int FUNC_7 (char*,scalar_t__,int ) ;
 int FUNC_8 (int ) ;

bool FUNC_9(HUB *VAR_1, UCHAR *VAR_2, char *VAR_3, UINT VAR_4, char *VAR_5, UINT VAR_6, POLICY *VAR_7, char *VAR_8, UINT VAR_9, char *VAR_10, UINT VAR_11)
{
 bool VAR_12 = 0;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_5 == ((void*)0) || VAR_7 == ((void*)0) || VAR_8 == ((void*)0))
 {
  return 0;
 }

 FUNC_6(VAR_1->TicketList);
 {
  UINT VAR_13;
  for (VAR_13 = 0;VAR_13 < FUNC_5(VAR_1->TicketList);VAR_13++)
  {
   TICKET *VAR_14 = FUNC_4(VAR_1->TicketList, VAR_13);
   if (FUNC_0(VAR_14->Ticket, VAR_2, VAR_0) == 0)
   {
    VAR_12 = 1;
    FUNC_7(VAR_3, VAR_4, VAR_14->Username);
    FUNC_7(VAR_5, VAR_6, VAR_14->UsernameReal);
    FUNC_7(VAR_8, VAR_9, VAR_14->SessionName);
    FUNC_7(VAR_10, VAR_11, VAR_14->GroupName);
    FUNC_1(VAR_7, &VAR_14->Policy, sizeof(POLICY));
    FUNC_2(VAR_1->TicketList, VAR_14);
    FUNC_3(VAR_14);
    break;
   }
  }
 }
 FUNC_8(VAR_1->TicketList);

 return VAR_12;
}
