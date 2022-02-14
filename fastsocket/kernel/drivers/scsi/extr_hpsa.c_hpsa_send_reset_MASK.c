
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ctlr_info {TYPE_1__* pdev; } ;
struct ErrorInfo {scalar_t__ CommandStatus; } ;
struct CommandList {struct ErrorInfo* err_info; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct CommandList* FUNC_0 (struct ctlr_info*) ;
 int FUNC_1 (struct ctlr_info*,struct CommandList*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct CommandList*,int ,struct ctlr_info*,int *,int ,int ,unsigned char*,int ) ;
 int FUNC_4 (struct ctlr_info*,struct CommandList*) ;
 int FUNC_5 (struct CommandList*) ;

__attribute__((used)) static int FUNC_6(struct ctlr_info *VAR_4, unsigned char *VAR_5)
{
 int VAR_6 = VAR_2;
 struct CommandList *VAR_7;
 struct ErrorInfo *VAR_8;

 VAR_7 = FUNC_0(VAR_4);

 if (VAR_7 == ((void*)0)) {
  FUNC_2(&VAR_4->pdev->dev, "cmd_special_alloc returned NULL!\n");
  return -VAR_0;
 }

 FUNC_3(VAR_7, VAR_1, VAR_4, ((void*)0), 0, 0, VAR_5, VAR_3);
 FUNC_4(VAR_4, VAR_7);


 VAR_8 = VAR_7->err_info;
 if (VAR_8->CommandStatus != 0) {
  FUNC_5(VAR_7);
  VAR_6 = -1;
 }
 FUNC_1(VAR_4, VAR_7);
 return VAR_6;
}
