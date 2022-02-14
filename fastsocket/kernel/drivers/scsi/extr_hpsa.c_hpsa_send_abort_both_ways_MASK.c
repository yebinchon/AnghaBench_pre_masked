
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ctlr_info {int cmpQ; TYPE_2__* pdev; } ;
struct TYPE_3__ {int * CDB; } ;
struct CommandList {int scsi_cmd; TYPE_1__ Request; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 struct CommandList* FUNC_1 (struct ctlr_info*,int ,int *) ;
 struct CommandList* FUNC_2 (struct ctlr_info*,int *,int *) ;
 int FUNC_3 (struct ctlr_info*,unsigned char*,struct CommandList*,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct ctlr_info *VAR_0,
 unsigned char *VAR_1, struct CommandList *VAR_2)
{
 u8 VAR_3[8];
 struct CommandList *VAR_4;
 int VAR_5 = 0, VAR_6 = 0;





 FUNC_4(VAR_3, &VAR_2->Request.CDB[4], 8);
 FUNC_5(VAR_3);
 VAR_4 = FUNC_2(VAR_0, VAR_3, &VAR_0->cmpQ);
 if (VAR_4 != ((void*)0)) {
  FUNC_0(&VAR_0->pdev->dev, "Unexpectedly found byte-swapped tag in completion queue.\n");
  return FUNC_3(VAR_0, VAR_1, VAR_2, 0);
 }
 VAR_5 = FUNC_3(VAR_0, VAR_1, VAR_2, 0);





 VAR_4 = FUNC_1(VAR_0, VAR_2->scsi_cmd, &VAR_0->cmpQ);
 if (VAR_4)
  VAR_6 = FUNC_3(VAR_0, VAR_1, VAR_2, 1);
 return VAR_5 && VAR_6;
}
