
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ctlr_info {TYPE_1__* pdev; } ;
struct ReportLUNdata {int dummy; } ;
struct ErrorInfo {scalar_t__ CommandStatus; } ;
struct TYPE_4__ {int* CDB; } ;
struct CommandList {struct ErrorInfo* err_info; TYPE_2__ Request; } ;
typedef int scsi3addr ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct CommandList* FUNC_0 (struct ctlr_info*) ;
 int FUNC_1 (struct ctlr_info*,struct CommandList*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct CommandList*,int ,struct ctlr_info*,struct ReportLUNdata*,int,int ,unsigned char*,int ) ;
 int FUNC_4 (struct ctlr_info*,struct CommandList*,int ) ;
 int FUNC_5 (struct CommandList*) ;
 int FUNC_6 (unsigned char*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct ctlr_info *VAR_6, int VAR_7,
  struct ReportLUNdata *VAR_8, int VAR_9,
  int VAR_10)
{
 int VAR_11 = VAR_3;
 struct CommandList *VAR_12;
 unsigned char VAR_13[8];
 struct ErrorInfo *VAR_14;

 VAR_12 = FUNC_0(VAR_6);
 if (VAR_12 == ((void*)0)) {
  FUNC_2(&VAR_6->pdev->dev, "cmd_special_alloc returned NULL!\n");
  return -1;
 }

 FUNC_6(VAR_13, 0, sizeof(VAR_13));
 FUNC_3(VAR_12, VAR_7 ? VAR_1 : VAR_2, VAR_6,
  VAR_8, VAR_9, 0, VAR_13, VAR_5);
 if (VAR_10)
  VAR_12->Request.CDB[1] = VAR_10;
 FUNC_4(VAR_6, VAR_12, VAR_4);
 VAR_14 = VAR_12->err_info;
 if (VAR_14->CommandStatus != 0 &&
     VAR_14->CommandStatus != VAR_0) {
  FUNC_5(VAR_12);
  VAR_11 = -1;
 }
 FUNC_1(VAR_6, VAR_12);
 return VAR_11;
}
