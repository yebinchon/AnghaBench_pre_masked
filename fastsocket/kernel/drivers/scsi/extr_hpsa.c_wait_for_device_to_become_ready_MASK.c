
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ctlr_info {TYPE_2__* pdev; } ;
struct CommandList {TYPE_1__* err_info; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__ CommandStatus; scalar_t__ ScsiStatus; scalar_t__* SenseInfo; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 struct CommandList* FUNC_0 (struct ctlr_info*) ;
 int FUNC_1 (struct ctlr_info*,struct CommandList*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (struct CommandList*,int ,struct ctlr_info*,int *,int ,int ,unsigned char*,int ) ;
 int FUNC_4 (struct ctlr_info*,struct CommandList*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct ctlr_info *VAR_10,
 unsigned char VAR_11[])
{
 int VAR_12 = 0;
 int VAR_13 = 0;
 int VAR_14 = 1;
 struct CommandList *VAR_15;

 VAR_15 = FUNC_0(VAR_10);
 if (!VAR_15) {
  FUNC_2(&VAR_10->pdev->dev, "out of memory in "
   "wait_for_device_to_become_ready.\n");
  return VAR_4;
 }


 while (VAR_13 < VAR_3) {




  FUNC_5(1000 * VAR_14);
  VAR_13++;


  if (VAR_14 < VAR_2)
   VAR_14 = VAR_14 * 2;


  FUNC_3(VAR_15, VAR_7, VAR_10, ((void*)0), 0, 0, VAR_11, VAR_8);
  FUNC_4(VAR_10, VAR_15);


  if (VAR_15->err_info->CommandStatus == VAR_0)
   break;

  if (VAR_15->err_info->CommandStatus == VAR_1 &&
   VAR_15->err_info->ScsiStatus == VAR_6 &&
   (VAR_15->err_info->SenseInfo[2] == VAR_5 ||
   VAR_15->err_info->SenseInfo[2] == VAR_9))
   break;

  FUNC_2(&VAR_10->pdev->dev, "waiting %d secs "
   "for device to become ready.\n", VAR_14);
  VAR_12 = 1;
 }

 if (VAR_12)
  FUNC_2(&VAR_10->pdev->dev, "giving up on device.\n");
 else
  FUNC_2(&VAR_10->pdev->dev, "device is ready.\n");

 FUNC_1(VAR_10, VAR_15);
 return VAR_12;
}
