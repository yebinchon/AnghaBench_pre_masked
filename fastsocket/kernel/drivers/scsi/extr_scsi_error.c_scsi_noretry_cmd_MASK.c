
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* request; int result; } ;
struct TYPE_2__ {int cmd_flags; int cmd_type; } ;



 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct scsi_cmnd *VAR_6)
{
 switch (FUNC_0(VAR_6->result)) {
 case 130:
  break;
 case 132:
  return (VAR_6->request->cmd_flags & VAR_3);
 case 129:
  return (VAR_6->request->cmd_flags & VAR_1);
 case 131:
  if (FUNC_1(VAR_6->result) == VAR_0 &&
      FUNC_2(VAR_6->result) == VAR_5)
   return 0;

 case 128:
  return (VAR_6->request->cmd_flags & VAR_2);
 }

 switch (FUNC_2(VAR_6->result)) {
 case 133:




  if (VAR_6->request->cmd_flags & VAR_1 ||
      VAR_6->request->cmd_type == VAR_4)
   return 1;
 }

 return 0;
}
