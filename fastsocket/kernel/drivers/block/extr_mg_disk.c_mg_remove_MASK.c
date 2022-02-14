
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mg_drv_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mg_host {scalar_t__ dev_base; scalar_t__ rst; scalar_t__ rstout; int irq; int major; scalar_t__ breq; scalar_t__ gd; int timer; } ;
struct mg_drv_data {scalar_t__ dev_attr; int use_polling; struct mg_host* host; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct mg_host*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct mg_host*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_2)
{
 struct mg_drv_data *VAR_3 = VAR_2->dev.platform_data;
 struct mg_host *VAR_4 = VAR_3->host;
 int VAR_5 = 0;


 FUNC_2(&VAR_4->timer);


 if (VAR_4->gd) {
  FUNC_1(VAR_4->gd);
  FUNC_7(VAR_4->gd);
 }

 if (VAR_4->breq)
  FUNC_0(VAR_4->breq);


 FUNC_8(VAR_4->major, VAR_1);


 if (!VAR_3->use_polling)
  FUNC_3(VAR_4->irq, VAR_4);


 if (VAR_3->dev_attr != VAR_0)
  FUNC_4(VAR_4->rstout);


 if (VAR_4->rst)
  FUNC_4(VAR_4->rst);


 if (VAR_4->dev_base)
  FUNC_5(VAR_4->dev_base);


 FUNC_6(VAR_4);

 return VAR_5;
}
