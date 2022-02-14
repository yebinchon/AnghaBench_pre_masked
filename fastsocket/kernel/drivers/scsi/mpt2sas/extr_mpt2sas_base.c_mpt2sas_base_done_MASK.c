
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {int done; int status; int reply; } ;
struct MPT2SAS_ADAPTER {TYPE_1__ base_cmds; } ;
struct TYPE_6__ {scalar_t__ Function; int MsgLength; } ;
typedef TYPE_2__ MPI2DefaultReply_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,TYPE_2__*,int) ;
 TYPE_2__* FUNC_2 (struct MPT2SAS_ADAPTER*,int ) ;

u8
FUNC_3(struct MPT2SAS_ADAPTER *VAR_5, u16 VAR_6, u8 VAR_7,
    u32 VAR_8)
{
 MPI2DefaultReply_t *VAR_9;

 VAR_9 = FUNC_2(VAR_5, VAR_8);
 if (VAR_9 && VAR_9->Function == VAR_0)
  return 1;

 if (VAR_5->base_cmds.status == VAR_2)
  return 1;

 VAR_5->base_cmds.status |= VAR_1;
 if (VAR_9) {
  VAR_5->base_cmds.status |= VAR_4;
  FUNC_1(VAR_5->base_cmds.reply, VAR_9, VAR_9->MsgLength*4);
 }
 VAR_5->base_cmds.status &= ~VAR_3;

 FUNC_0(&VAR_5->base_cmds.done);
 return 1;
}
