
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int user_name_upper ;
typedef int ticket_str ;
typedef int name ;
typedef int hub_name_upper ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_7__ {int NumSessions; scalar_t__ Point; int hostname; } ;
struct TYPE_6__ {int Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef int POLICY ;
typedef int PACK ;
typedef TYPE_2__ FARM_MEMBER ;


 int FUNC_0 (char*,int,int *,int ) ;
 int FUNC_1 (char*,int,char*,char*,scalar_t__) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,char*,int *,int ) ;
 int FUNC_6 (int *,char*,char*) ;
 scalar_t__ FUNC_7 (int *,char*) ;
 int VAR_3 ;
 int FUNC_8 (int ,char*,int ,char*,char*,char*,char*,char*) ;
 int * FUNC_9 (TYPE_2__*,int *,char*) ;
 int FUNC_10 (char*,int,char*) ;
 int FUNC_11 (char*) ;

void FUNC_12(SERVER *VAR_4, FARM_MEMBER *VAR_5, char *VAR_6, char *VAR_7, char *VAR_8, POLICY *VAR_9, UCHAR *VAR_10, UINT VAR_11, char *VAR_12)
{
 PACK *VAR_13;
 char VAR_14[VAR_0 + 1];
 char VAR_15[VAR_1];
 char VAR_16[VAR_2 + 1];
 char VAR_17[VAR_1];
 UINT VAR_18;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || VAR_8 == ((void*)0) || VAR_6 == ((void*)0) || VAR_7 == ((void*)0) || VAR_9 == ((void*)0) || VAR_10 == ((void*)0))
 {
  return;
 }
 if (VAR_12 == ((void*)0))
 {
  VAR_12 = "";
 }

 VAR_13 = FUNC_3();
 FUNC_6(VAR_13, "HubName", VAR_6);
 FUNC_6(VAR_13, "UserName", VAR_7);
 FUNC_6(VAR_13, "groupname", VAR_12);
 FUNC_6(VAR_13, "RealUserName", VAR_8);
 FUNC_4(VAR_13, VAR_9);
 FUNC_5(VAR_13, "Ticket", VAR_10, VAR_3);

 FUNC_0(VAR_17, sizeof(VAR_17), VAR_10, VAR_3);

 FUNC_10(VAR_15, sizeof(VAR_15), VAR_6);
 FUNC_11(VAR_15);
 FUNC_10(VAR_16, sizeof(VAR_16), VAR_7);
 FUNC_11(VAR_16);
 FUNC_1(VAR_14, sizeof(VAR_14), "SID-%s-%u", VAR_16,
  VAR_11);
 FUNC_6(VAR_13, "SessionName", VAR_14);

 VAR_13 = FUNC_9(VAR_5, VAR_13, "createticket");

 FUNC_8(VAR_4->Cedar, "LS_TICKET_1", VAR_5->hostname, VAR_6, VAR_7, VAR_8, VAR_14, VAR_17);

 VAR_18 = FUNC_7(VAR_13, "Point");
 if (VAR_18 != 0)
 {
  VAR_5->Point = VAR_18;
  VAR_5->NumSessions++;
 }

 FUNC_2(VAR_13);
}
