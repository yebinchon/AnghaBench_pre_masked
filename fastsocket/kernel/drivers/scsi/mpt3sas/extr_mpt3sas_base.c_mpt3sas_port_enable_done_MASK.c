
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {int done; int reply; int status; } ;
struct MPT3SAS_ADAPTER {int port_enable_failed; int start_scan_failed; TYPE_1__ port_enable_cmds; scalar_t__ start_scan; scalar_t__ is_driver_loading; } ;
struct TYPE_6__ {scalar_t__ Function; int MsgLength; int IOCStatus; } ;
typedef TYPE_2__ MPI2DefaultReply_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_2__*,int) ;
 TYPE_2__* FUNC_3 (struct MPT3SAS_ADAPTER*,int ) ;
 int FUNC_4 (struct MPT3SAS_ADAPTER*) ;

u8
FUNC_5(struct MPT3SAS_ADAPTER *VAR_7, u16 VAR_8, u8 VAR_9,
 u32 VAR_10)
{
 MPI2DefaultReply_t *VAR_11;
 u16 VAR_12;

 if (VAR_7->port_enable_cmds.status == VAR_4)
  return 1;

 VAR_11 = FUNC_3(VAR_7, VAR_10);
 if (!VAR_11)
  return 1;

 if (VAR_11->Function != VAR_0)
  return 1;

 VAR_7->port_enable_cmds.status &= ~VAR_5;
 VAR_7->port_enable_cmds.status |= VAR_3;
 VAR_7->port_enable_cmds.status |= VAR_6;
 FUNC_2(VAR_7->port_enable_cmds.reply, VAR_11, VAR_11->MsgLength*4);
 VAR_12 = FUNC_1(VAR_11->IOCStatus) & VAR_1;
 if (VAR_12 != VAR_2)
  VAR_7->port_enable_failed = 1;

 if (VAR_7->is_driver_loading) {
  if (VAR_12 == VAR_2) {
   FUNC_4(VAR_7);
   return 1;
  } else {
   VAR_7->start_scan_failed = VAR_12;
   VAR_7->start_scan = 0;
   return 1;
  }
 }
 FUNC_0(&VAR_7->port_enable_cmds.done);
 return 1;
}
