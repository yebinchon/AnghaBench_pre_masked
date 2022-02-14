
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct msm_mddi_client_data* platform_data; } ;
struct platform_device {int id; TYPE_1__ dev; } ;
struct TYPE_7__ {TYPE_3__* platform_data; } ;
struct TYPE_9__ {char* name; TYPE_2__ dev; int id; } ;
struct TYPE_8__ {int fb_data; int caps; int unblank; int blank; int resume; int suspend; } ;
struct panel_info {TYPE_4__ pdev; TYPE_3__ panel_data; } ;
struct msm_mddi_client_data {int private_client_data; int fb_resource; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct panel_info*) ;
 struct panel_info* FUNC_1 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_4__*,int ,int) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (struct platform_device*,struct panel_info*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_7)
{
 struct msm_mddi_client_data *VAR_8 = VAR_7->dev.platform_data;
 struct panel_info *VAR_9 =
  FUNC_1(sizeof(struct panel_info), VAR_1);
 int VAR_10;
 if (!VAR_9)
  return -VAR_0;
 FUNC_4(VAR_7, VAR_9);
 VAR_9->panel_data.suspend = VAR_5;
 VAR_9->panel_data.resume = VAR_4;
 VAR_9->panel_data.blank = VAR_3;
 VAR_9->panel_data.unblank = VAR_6;
 VAR_9->panel_data.caps = VAR_2;
 VAR_9->pdev.name = "msm_panel";
 VAR_9->pdev.id = VAR_7->id;
 FUNC_2(&VAR_9->pdev,
          VAR_8->fb_resource, 1);
 VAR_9->panel_data.fb_data = VAR_8->private_client_data;
 VAR_9->pdev.dev.platform_data = &VAR_9->panel_data;
 VAR_10 = FUNC_3(&VAR_9->pdev);
 if (VAR_10) {
  FUNC_0(VAR_9);
  return VAR_10;
 }
 return 0;
}
