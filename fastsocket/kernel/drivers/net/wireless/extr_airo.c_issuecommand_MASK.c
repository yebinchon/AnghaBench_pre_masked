
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct airo_info {TYPE_1__* dev; } ;
struct TYPE_8__ {int parm0; int parm1; int parm2; int cmd; } ;
struct TYPE_7__ {int status; int rsp0; int rsp1; int rsp2; } ;
struct TYPE_6__ {int name; } ;
typedef TYPE_2__ Resp ;
typedef TYPE_3__ Cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct airo_info*,int ) ;
 int FUNC_1 (struct airo_info*,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static u16 FUNC_5(struct airo_info *VAR_16, Cmd *VAR_17, Resp *VAR_18) {

 int VAR_19 = 600000;

 if (FUNC_0(VAR_16, VAR_5) & VAR_7)
  FUNC_1(VAR_16, VAR_4, VAR_7);

 FUNC_1(VAR_16, VAR_8, VAR_17->parm0);
 FUNC_1(VAR_16, VAR_9, VAR_17->parm1);
 FUNC_1(VAR_16, VAR_10, VAR_17->parm2);
 FUNC_1(VAR_16, VAR_1, VAR_17->cmd);

 while (VAR_19-- && (FUNC_0(VAR_16, VAR_5) & VAR_7) == 0) {
  if ((FUNC_0(VAR_16, VAR_1)) == VAR_17->cmd)

   FUNC_1(VAR_16, VAR_1, VAR_17->cmd);
  if (!FUNC_3() && (VAR_19 & 255) == 0)
   FUNC_4();
 }

 if ( VAR_19 == -1 ) {
  FUNC_2(VAR_16->dev->name,
   "Max tries exceeded when issueing command");
  if (FUNC_0(VAR_16, VAR_1) & VAR_2)
   FUNC_1(VAR_16, VAR_4, VAR_6);
  return VAR_3;
 }


 VAR_18->status = FUNC_0(VAR_16, VAR_14);
 VAR_18->rsp0 = FUNC_0(VAR_16, VAR_11);
 VAR_18->rsp1 = FUNC_0(VAR_16, VAR_12);
 VAR_18->rsp2 = FUNC_0(VAR_16, VAR_13);
 if ((VAR_18->status & 0xff00)!=0 && VAR_17->cmd != VAR_0)
  FUNC_2(VAR_16->dev->name,
   "cmd:%x status:%x rsp0:%x rsp1:%x rsp2:%x",
   VAR_17->cmd, VAR_18->status, VAR_18->rsp0, VAR_18->rsp1,
   VAR_18->rsp2);


 if (FUNC_0(VAR_16, VAR_1) & VAR_2) {
  FUNC_1(VAR_16, VAR_4, VAR_6);
 }

 FUNC_1(VAR_16, VAR_4, VAR_7);

 return VAR_15;
}
