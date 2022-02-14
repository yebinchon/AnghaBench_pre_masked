
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ctlr_info {TYPE_1__* pdev; } ;
struct ErrorInfo {scalar_t__ CommandStatus; } ;
struct CommandList {struct ErrorInfo* err_info; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct CommandList* FUNC_0 (struct ctlr_info*) ;
 int FUNC_1 (struct ctlr_info*,struct CommandList*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct CommandList*,int ,struct ctlr_info*,unsigned char*,unsigned char,unsigned char,unsigned char*,int ) ;
 int FUNC_4 (struct ctlr_info*,struct CommandList*,int ) ;
 int FUNC_5 (struct CommandList*) ;

__attribute__((used)) static int FUNC_6(struct ctlr_info *VAR_6, unsigned char *VAR_7,
   unsigned char VAR_8, unsigned char *VAR_9,
   unsigned char VAR_10)
{
 int VAR_11 = VAR_3;
 struct CommandList *VAR_12;
 struct ErrorInfo *VAR_13;

 VAR_12 = FUNC_0(VAR_6);

 if (VAR_12 == ((void*)0)) {
  FUNC_2(&VAR_6->pdev->dev, "cmd_special_alloc returned NULL!\n");
  return -VAR_1;
 }

 FUNC_3(VAR_12, VAR_2, VAR_6, VAR_9, VAR_10, VAR_8, VAR_7, VAR_5);
 FUNC_4(VAR_6, VAR_12, VAR_4);
 VAR_13 = VAR_12->err_info;
 if (VAR_13->CommandStatus != 0 && VAR_13->CommandStatus != VAR_0) {
  FUNC_5(VAR_12);
  VAR_11 = -1;
 }
 FUNC_1(VAR_6, VAR_12);
 return VAR_11;
}
