
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_5__ {scalar_t__ smid; int done; int status; int reply; } ;
struct MPT2SAS_ADAPTER {TYPE_1__ scsih_cmds; } ;
struct TYPE_6__ {int MsgLength; } ;
typedef TYPE_2__ MPI2DefaultReply_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,TYPE_2__*,int) ;
 TYPE_2__* FUNC_2 (struct MPT2SAS_ADAPTER*,int ) ;

__attribute__((used)) static u8
FUNC_3(struct MPT2SAS_ADAPTER *VAR_4, u16 VAR_5, u8 VAR_6, u32 VAR_7)
{
 MPI2DefaultReply_t *VAR_8;

 VAR_8 = FUNC_2(VAR_4, VAR_7);
 if (VAR_4->scsih_cmds.status == VAR_1)
  return 1;
 if (VAR_4->scsih_cmds.smid != VAR_5)
  return 1;
 VAR_4->scsih_cmds.status |= VAR_0;
 if (VAR_8) {
  FUNC_1(VAR_4->scsih_cmds.reply, VAR_8,
      VAR_8->MsgLength*4);
  VAR_4->scsih_cmds.status |= VAR_3;
 }
 VAR_4->scsih_cmds.status &= ~VAR_2;
 FUNC_0(&VAR_4->scsih_cmds.done);
 return 1;
}
