
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int (* statcallb ) (TYPE_4__*) ;} ;
struct cardstate {int dev; TYPE_3__ iif; int myid; } ;
struct bc_state {int chstate; scalar_t__ channel; } ;
struct at_state_t {scalar_t__* str_var; struct bc_state* bcs; struct cardstate* cs; } ;
struct TYPE_6__ {int si1; int si2; scalar_t__* eazmsn; scalar_t__* phone; scalar_t__ plan; scalar_t__ screen; } ;
struct TYPE_7__ {TYPE_1__ setup; } ;
struct TYPE_9__ {int driver; scalar_t__ arg; int command; TYPE_2__ parm; } ;
typedef TYPE_4__ isdn_ctrl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (scalar_t__,char*) ;
 int FUNC_5 (scalar_t__*,scalar_t__,int) ;
 int FUNC_6 (TYPE_4__*) ;

int FUNC_7(struct at_state_t *VAR_10)
{
 struct cardstate *VAR_11 = VAR_10->cs;
 struct bc_state *VAR_12 = VAR_10->bcs;
 isdn_ctrl VAR_13;
 int VAR_14;


 VAR_13.parm.setup.si1 = 0;
 VAR_13.parm.setup.si2 = 0;
 VAR_13.parm.setup.screen = 0;
 VAR_13.parm.setup.plan = 0;
 if (!VAR_10->str_var[VAR_8]) {

  VAR_13.parm.setup.si1 = 1;
 } else if (!FUNC_4(VAR_10->str_var[VAR_8], "8890")) {

  VAR_13.parm.setup.si1 = 7;
 } else if (!FUNC_4(VAR_10->str_var[VAR_8], "8090A3")) {

  VAR_13.parm.setup.si1 = 1;
 } else if (!FUNC_4(VAR_10->str_var[VAR_8], "9090A3")) {

  VAR_13.parm.setup.si1 = 1;
  VAR_13.parm.setup.si2 = 2;
 } else {
  FUNC_2(VAR_11->dev, "RING ignored - unsupported BC %s\n",
       VAR_10->str_var[VAR_8]);
  return VAR_3;
 }
 if (VAR_10->str_var[VAR_7]) {
  FUNC_5(VAR_13.parm.setup.phone, VAR_10->str_var[VAR_7],
   sizeof VAR_13.parm.setup.phone - 1);
  VAR_13.parm.setup.phone[sizeof VAR_13.parm.setup.phone - 1] = 0;
 } else
  VAR_13.parm.setup.phone[0] = 0;
 if (VAR_10->str_var[VAR_9]) {
  FUNC_5(VAR_13.parm.setup.eazmsn, VAR_10->str_var[VAR_9],
   sizeof VAR_13.parm.setup.eazmsn - 1);
  VAR_13.parm.setup.eazmsn[sizeof VAR_13.parm.setup.eazmsn - 1] = 0;
 } else
  VAR_13.parm.setup.eazmsn[0] = 0;

 if (!VAR_12) {
  FUNC_1(VAR_11->dev, "no channel for incoming call\n");
  VAR_13.command = VAR_6;
  VAR_13.arg = 0;
 } else {
  FUNC_3(VAR_1, "Sending ICALL");
  VAR_13.command = VAR_5;
  VAR_13.arg = VAR_12->channel;
 }
 VAR_13.driver = VAR_11->myid;
 VAR_14 = VAR_11->iif.statcallb(&VAR_13);
 FUNC_3(VAR_1, "Response: %d", VAR_14);
 switch (VAR_14) {
 case 0:
  return VAR_3;
 case 1:
  VAR_12->chstate |= VAR_0;
  return VAR_2;
 case 2:
  return VAR_4;
 case 3:
  FUNC_2(VAR_11->dev,
         "LL requested unsupported feature: Incomplete Number\n");
  return VAR_3;
 case 4:



  return VAR_2;
 case 5:
  FUNC_2(VAR_11->dev,
    "LL requested unsupported feature: Call Deflection\n");
  return VAR_3;
 default:
  FUNC_0(VAR_11->dev, "LL error %d on ICALL\n", VAR_14);
  return VAR_3;
 }
}
