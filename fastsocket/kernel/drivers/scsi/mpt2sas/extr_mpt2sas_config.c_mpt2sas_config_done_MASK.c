
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_6__ {scalar_t__ smid; int done; int status; int reply; } ;
struct MPT2SAS_ADAPTER {TYPE_1__ config_cmds; } ;
struct TYPE_7__ {int MsgLength; } ;
typedef TYPE_2__ MPI2DefaultReply_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct MPT2SAS_ADAPTER*,scalar_t__,char*,TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_2__*,int) ;
 TYPE_2__* FUNC_3 (struct MPT2SAS_ADAPTER*,int ) ;

u8
FUNC_4(struct MPT2SAS_ADAPTER *VAR_5, u16 VAR_6, u8 VAR_7,
    u32 VAR_8)
{
 MPI2DefaultReply_t *VAR_9;

 if (VAR_5->config_cmds.status == VAR_1)
  return 1;
 if (VAR_5->config_cmds.smid != VAR_6)
  return 1;
 VAR_5->config_cmds.status |= VAR_0;
 VAR_9 = FUNC_3(VAR_5, VAR_8);
 if (VAR_9) {
  VAR_5->config_cmds.status |= VAR_3;
  FUNC_2(VAR_5->config_cmds.reply, VAR_9,
      VAR_9->MsgLength*4);
 }
 VAR_5->config_cmds.status &= ~VAR_2;



 VAR_5->config_cmds.smid = VAR_4;
 FUNC_1(&VAR_5->config_cmds.done);
 return 1;
}
