
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mg_drv_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mg_host {scalar_t__ dev_base; } ;
struct mg_drv_data {int use_polling; struct mg_host* host; } ;
typedef int pm_message_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct mg_host*,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_7, pm_message_t VAR_8)
{
 struct mg_drv_data *VAR_9 = VAR_7->dev.platform_data;
 struct mg_host *VAR_10 = VAR_9->host;

 if (FUNC_0(VAR_10, VAR_5, VAR_6))
  return -VAR_1;

 if (!VAR_9->use_polling)
  FUNC_2(VAR_0, (unsigned long)VAR_10->dev_base + VAR_4);

 FUNC_2(VAR_2, (unsigned long)VAR_10->dev_base + VAR_3);

 FUNC_1(1);

 if (FUNC_0(VAR_10, VAR_5, VAR_6)) {
  if (!VAR_9->use_polling)
   FUNC_2(0, (unsigned long)VAR_10->dev_base + VAR_4);
  return -VAR_1;
 }

 return 0;
}
