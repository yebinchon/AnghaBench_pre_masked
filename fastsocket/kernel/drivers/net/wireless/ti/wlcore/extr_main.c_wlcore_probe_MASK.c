
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {int nvs_loading_complete; struct platform_device* pdev; int * dev; int ptable; int ops; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct platform_device*,struct wl1271*) ;
 int FUNC_2 (int ,int ,int ,int *,int ,struct wl1271*,int ) ;
 int FUNC_3 (char*,int) ;
 int VAR_5 ;

int FUNC_4(struct wl1271 *VAR_6, struct platform_device *VAR_7)
{
 int VAR_8;

 if (!VAR_6->ops || !VAR_6->ptable)
  return -VAR_0;

 VAR_6->dev = &VAR_7->dev;
 VAR_6->pdev = VAR_7;
 FUNC_1(VAR_7, VAR_6);

 VAR_8 = FUNC_2(VAR_3, VAR_1,
          VAR_4, &VAR_7->dev, VAR_2,
          VAR_6, VAR_5);
 if (VAR_8 < 0) {
  FUNC_3("request_firmware_nowait failed: %d", VAR_8);
  FUNC_0(&VAR_6->nvs_loading_complete);
 }

 return VAR_8;
}
