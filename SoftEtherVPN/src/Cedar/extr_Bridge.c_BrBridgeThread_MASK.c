
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int name ;
struct TYPE_17__ {int Name; TYPE_1__* Session; TYPE_2__* Hub; int Policy; int Cedar; } ;
struct TYPE_16__ {TYPE_1__* Session; int Protocol; } ;
struct TYPE_15__ {int ref; } ;
struct TYPE_14__ {int BridgeMode; int ref; int Username; TYPE_4__* Bridge; int Name; } ;
typedef int THREAD ;
typedef TYPE_1__ SESSION ;
typedef TYPE_2__ HUB ;
typedef TYPE_3__ CONNECTION ;
typedef TYPE_4__ BRIDGE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (TYPE_2__*,char*,char*,...) ;
 int VAR_3 ;
 TYPE_3__* FUNC_4 (int ,int *,int *) ;
 TYPE_1__* FUNC_5 (int ,TYPE_3__*,TYPE_2__*,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (char*,int,int ) ;

void FUNC_12(THREAD *VAR_4, void *VAR_5)
{
 BRIDGE *VAR_6;
 CONNECTION *VAR_7;
 SESSION *VAR_8;
 HUB *VAR_9;
 char VAR_10[VAR_3];

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return;
 }

 VAR_6 = (BRIDGE *)VAR_5;


 VAR_7 = FUNC_4(VAR_6->Cedar, ((void*)0), VAR_4);
 VAR_7->Protocol = VAR_2;


 VAR_8 = FUNC_5(VAR_6->Cedar, VAR_7, VAR_6->Hub, VAR_0, VAR_6->Policy);
 FUNC_3(VAR_6->Hub, "LH_START_BRIDGE", VAR_6->Name, VAR_8->Name);
 FUNC_11(VAR_10, sizeof(VAR_10), VAR_6->Name);
 VAR_9 = VAR_6->Hub;
 FUNC_0(VAR_9->ref);
 VAR_8->BridgeMode = 1;
 VAR_8->Bridge = VAR_6;
 VAR_7->Session = VAR_8;
 FUNC_7(VAR_7);


 VAR_8->Username = FUNC_1(VAR_1);

 VAR_6->Session = VAR_8;
 FUNC_0(VAR_8->ref);


 FUNC_6(VAR_4);


 FUNC_2("Bridge %s Start.\n", VAR_6->Name);
 FUNC_10(VAR_8);
 FUNC_2("Bridge %s Stop.\n", VAR_6->Name);

 FUNC_3(VAR_9, "LH_STOP_BRIDGE", VAR_10);

 FUNC_8(VAR_9);

 FUNC_9(VAR_8);
}
