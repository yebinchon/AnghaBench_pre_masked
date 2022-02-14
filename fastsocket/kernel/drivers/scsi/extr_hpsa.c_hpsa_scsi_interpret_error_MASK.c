
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct ErrorInfo {int CommandStatus; int ScsiStatus; } ;
struct CommandList {struct ErrorInfo* err_info; TYPE_2__* h; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {struct device dev; } ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct CommandList *VAR_0)
{
 struct ErrorInfo *VAR_1;
 struct device *VAR_2 = &VAR_0->h->pdev->dev;

 VAR_1 = VAR_0->err_info;
 switch (VAR_1->CommandStatus) {
 case 131:
  FUNC_1(VAR_2, "cmd %p has completed with errors\n", VAR_0);
  FUNC_1(VAR_2, "cmd %p has SCSI Status = %x\n", VAR_0,
    VAR_1->ScsiStatus);
  if (VAR_1->ScsiStatus == 0)
   FUNC_1(VAR_2, "SCSI status is abnormally zero.  "
   "(probably indicates selection timeout "
   "reported incorrectly due to a known "
   "firmware bug, circa July, 2001.)\n");
  break;
 case 135:
   FUNC_0(VAR_2, "UNDERRUN\n");
  break;
 case 136:
  FUNC_1(VAR_2, "cp %p has completed with data overrun\n", VAR_0);
  break;
 case 133: {



  FUNC_1(VAR_2, "cp %p is reported invalid (probably means "
   "target device no longer present)\n", VAR_0);


  }
  break;
 case 132:
  FUNC_1(VAR_2, "cp %p has protocol error \n", VAR_0);
  break;
 case 134:

  FUNC_1(VAR_2, "cp %p had hardware error\n", VAR_0);
  break;
 case 137:
  FUNC_1(VAR_2, "cp %p had connection lost\n", VAR_0);
  break;
 case 139:
  FUNC_1(VAR_2, "cp %p was aborted\n", VAR_0);
  break;
 case 138:
  FUNC_1(VAR_2, "cp %p reports abort failed\n", VAR_0);
  break;
 case 128:
  FUNC_1(VAR_2, "cp %p aborted due to an unsolicited abort\n", VAR_0);
  break;
 case 130:
  FUNC_1(VAR_2, "cp %p timed out\n", VAR_0);
  break;
 case 129:
  FUNC_1(VAR_2, "Command unabortable\n");
  break;
 default:
  FUNC_1(VAR_2, "cp %p returned unknown status %x\n", VAR_0,
    VAR_1->CommandStatus);
 }
}
