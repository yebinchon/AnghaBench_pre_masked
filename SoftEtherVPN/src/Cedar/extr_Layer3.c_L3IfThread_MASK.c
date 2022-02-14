
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_11__ ;


typedef int username ;
typedef int tmp ;
typedef int name ;
struct TYPE_25__ {TYPE_3__* Session; int Protocol; } ;
struct TYPE_24__ {TYPE_3__* Session; TYPE_13__* Hub; TYPE_2__* Switch; } ;
struct TYPE_23__ {int NoBroadcastLimiter; } ;
struct TYPE_22__ {int L3SwitchMode; char* UserNameReal; int ref; int * Username; TYPE_5__* L3If; int * Name; } ;
struct TYPE_21__ {int Name; TYPE_11__* Cedar; } ;
struct TYPE_20__ {scalar_t__ ServerType; } ;
struct TYPE_19__ {int SessionCounter; } ;
struct TYPE_18__ {TYPE_1__* Server; } ;
typedef int THREAD ;
typedef TYPE_3__ SESSION ;
typedef TYPE_4__ POLICY ;
typedef TYPE_5__ L3IF ;
typedef TYPE_6__ CONNECTION ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_4__* FUNC_1 (int ) ;
 int FUNC_2 (char*,int,char*) ;
 void* FUNC_3 (char*) ;
 int FUNC_4 (char*,int,char*,char*,int ,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int ) ;
 char* VAR_1 ;
 int VAR_2 ;
 TYPE_6__* FUNC_9 (TYPE_11__*,int *,int *) ;
 TYPE_3__* FUNC_10 (TYPE_11__*,TYPE_6__*,TYPE_13__*,char*,TYPE_4__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_6__*) ;
 int FUNC_13 (TYPE_3__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (char*,int,int ) ;
 int FUNC_16 (char*,int,char*) ;
 int FUNC_17 (char*) ;

void FUNC_18(THREAD *VAR_4, void *VAR_5)
{
 L3IF *VAR_6;
 CONNECTION *VAR_7;
 SESSION *VAR_8;
 POLICY *VAR_9;
 char VAR_10[VAR_2];
 char VAR_11[VAR_2];
 char VAR_12[VAR_2];

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return;
 }

 VAR_6 = (L3IF *)VAR_5;

 FUNC_16(VAR_12, sizeof(VAR_12), VAR_1);
 if (VAR_6->Switch != ((void*)0))
 {
  FUNC_15(VAR_12, sizeof(VAR_12), VAR_6->Switch->Name);
 }


 VAR_7 = FUNC_9(VAR_6->Switch->Cedar, ((void*)0), VAR_4);
 VAR_7->Protocol = VAR_0;


 VAR_9 = FUNC_1(FUNC_6());

 VAR_9->NoBroadcastLimiter = 1;
 VAR_8 = FUNC_10(VAR_6->Switch->Cedar, VAR_7, VAR_6->Hub, VAR_12, VAR_9);
 VAR_7->Session = VAR_8;

 FUNC_12(VAR_7);


 FUNC_7(VAR_10, sizeof(VAR_10));
 if (VAR_6->Switch->Cedar->Server->ServerType == VAR_3)
 {
  FUNC_4(VAR_11, sizeof(VAR_11), "SID-L3-%s-%u", VAR_6->Switch->Name, FUNC_8(VAR_6->Hub->SessionCounter));
 }
 else
 {
  FUNC_4(VAR_11, sizeof(VAR_11), "SID-L3-%s-%s-%u", VAR_10, VAR_6->Switch->Name, FUNC_8(VAR_6->Hub->SessionCounter));
 }
 FUNC_2(VAR_11, sizeof(VAR_11), VAR_11);
 FUNC_17(VAR_11);

 FUNC_5(VAR_8->Name);
 VAR_8->Name = FUNC_3(VAR_11);

 VAR_8->L3SwitchMode = 1;
 VAR_8->L3If = VAR_6;

 if (VAR_8->Username != ((void*)0))
 {
  FUNC_5(VAR_8->Username);
 }
 VAR_8->Username = FUNC_3(VAR_12);

 FUNC_16(VAR_8->UserNameReal, sizeof(VAR_8->UserNameReal), VAR_12);

 VAR_6->Session = VAR_8;
 FUNC_0(VAR_8->ref);


 FUNC_11(VAR_4);


 FUNC_14(VAR_8);


 FUNC_13(VAR_8);
}
