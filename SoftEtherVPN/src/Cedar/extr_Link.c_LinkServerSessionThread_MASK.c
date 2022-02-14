
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int wchar_t ;
typedef int name ;
struct TYPE_14__ {TYPE_2__* Session; int Protocol; } ;
struct TYPE_13__ {TYPE_1__* Option; TYPE_2__* ServerSession; int Hub; int Cedar; int Policy; } ;
struct TYPE_12__ {int LinkModeServer; int Hub; int Name; int ref; int Username; TYPE_3__* Link; } ;
struct TYPE_11__ {int AccountName; } ;
typedef int THREAD ;
typedef TYPE_2__ SESSION ;
typedef int POLICY ;
typedef TYPE_3__ LINK ;
typedef TYPE_4__ CONNECTION ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int *,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_4 (int ,int *,int *) ;
 TYPE_2__* FUNC_5 (int ,TYPE_4__*,int ,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *,int,int ) ;
 int * FUNC_11 (int) ;

void FUNC_12(THREAD *VAR_4, void *VAR_5)
{
 LINK *VAR_6 = (LINK *)VAR_5;
 CONNECTION *VAR_7;
 SESSION *VAR_8;
 POLICY *VAR_9;
 wchar_t VAR_10[VAR_3];

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return;
 }


 VAR_7 = FUNC_4(VAR_6->Cedar, ((void*)0), VAR_4);
 VAR_7->Protocol = VAR_0;


 VAR_9 = FUNC_11(sizeof(POLICY));
 FUNC_1(VAR_9, VAR_6->Policy, sizeof(POLICY));


 VAR_8 = FUNC_5(VAR_6->Cedar, VAR_7, VAR_6->Hub, VAR_1, VAR_9);
 VAR_8->LinkModeServer = 1;
 VAR_8->Link = VAR_6;
 VAR_7->Session = VAR_8;
 FUNC_7(VAR_7);


 VAR_8->Username = FUNC_2(VAR_2);

 VAR_6->ServerSession = VAR_8;
 FUNC_0(VAR_6->ServerSession->ref);


 FUNC_6(VAR_4);

 FUNC_10(VAR_10, sizeof(VAR_10), VAR_6->Option->AccountName);
 FUNC_3(VAR_8->Hub, "LH_LINK_START", VAR_10, VAR_8->Name);


 FUNC_9(VAR_8);

 FUNC_3(VAR_8->Hub, "LH_LINK_STOP", VAR_10);

 FUNC_8(VAR_8);
}
