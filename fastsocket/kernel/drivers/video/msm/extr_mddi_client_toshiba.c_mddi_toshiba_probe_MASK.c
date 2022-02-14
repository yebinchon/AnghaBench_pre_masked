
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {struct msm_mddi_client_data* platform_data; } ;
struct platform_device {int id; TYPE_4__ dev; } ;
struct TYPE_5__ {TYPE_2__* platform_data; } ;
struct TYPE_7__ {char* name; int num_resources; TYPE_1__ dev; int resource; int id; } ;
struct TYPE_6__ {int caps; int * fb_data; int unblank; int blank; int clear_vsync; int request_vsync; int wait_vsync; int resume; int suspend; } ;
struct panel_info {TYPE_3__ pdev; TYPE_2__ panel_data; struct msm_mddi_client_data* client_data; } ;
struct msm_mddi_client_data {int fb_resource; int (* remote_write ) (struct msm_mddi_client_data*,int ,int ) ;struct msm_mddi_bridge_platform_data* private_client_data; } ;
struct msm_mddi_bridge_platform_data {int (* init ) (struct msm_mddi_bridge_platform_data*,struct msm_mddi_client_data*) ;int fb_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_4__*,char*) ;
 struct panel_info* FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct platform_device*,struct panel_info*) ;
 int FUNC_4 (struct panel_info*,int) ;
 int FUNC_5 (struct msm_mddi_client_data*,int ,int ) ;
 int FUNC_6 (struct msm_mddi_client_data*,int ,int ) ;
 int FUNC_7 (struct msm_mddi_bridge_platform_data*,struct msm_mddi_client_data*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_14)
{
 int VAR_15;
 struct msm_mddi_client_data *VAR_16 = VAR_14->dev.platform_data;
 struct msm_mddi_bridge_platform_data *VAR_17 =
  VAR_16->private_client_data;
 struct panel_info *VAR_18 =
  FUNC_1(sizeof(struct panel_info), VAR_1);
 if (!VAR_18)
  return -VAR_0;
 FUNC_3(VAR_14, VAR_18);


 VAR_16->remote_write(VAR_16, VAR_3, VAR_2);
 VAR_16->remote_write(VAR_16, VAR_5, VAR_4);

 VAR_15 = FUNC_4(VAR_18, 1);
 if (VAR_15) {
  FUNC_0(&VAR_14->dev, "mddi_bridge_setup_vsync failed\n");
  return VAR_15;
 }

 VAR_18->client_data = VAR_16;
 VAR_18->panel_data.suspend = VAR_11;
 VAR_18->panel_data.resume = VAR_10;
 VAR_18->panel_data.wait_vsync = VAR_13;
 VAR_18->panel_data.request_vsync = VAR_9;
 VAR_18->panel_data.clear_vsync = VAR_8;
 VAR_18->panel_data.blank = VAR_7;
 VAR_18->panel_data.unblank = VAR_12;
 VAR_18->panel_data.fb_data = &VAR_17->fb_data;
 VAR_18->panel_data.caps = VAR_6;

 VAR_18->pdev.name = "msm_panel";
 VAR_18->pdev.id = VAR_14->id;
 VAR_18->pdev.resource = VAR_16->fb_resource;
 VAR_18->pdev.num_resources = 1;
 VAR_18->pdev.dev.platform_data = &VAR_18->panel_data;
 VAR_17->init(VAR_17, VAR_16);
 FUNC_2(&VAR_18->pdev);

 return 0;
}
