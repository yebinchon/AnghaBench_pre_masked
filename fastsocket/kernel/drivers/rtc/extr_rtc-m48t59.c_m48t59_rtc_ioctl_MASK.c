
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct m48t59_plat_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct m48t59_private {int lock; } ;
struct m48t59_plat_data {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;


 struct m48t59_private* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct platform_device* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_3, unsigned int VAR_4,
   unsigned long VAR_5)
{
 struct platform_device *VAR_6 = FUNC_4(VAR_3);
 struct m48t59_plat_data *VAR_7 = VAR_6->dev.platform_data;
 struct m48t59_private *VAR_8 = FUNC_1(VAR_6);
 unsigned long VAR_9;
 int VAR_10 = 0;

 FUNC_2(&VAR_8->lock, VAR_9);
 switch (VAR_4) {
 case 129:
  FUNC_0(0x00, VAR_1);
  break;
 case 128:
  FUNC_0(VAR_2, VAR_1);
  break;
 default:
  VAR_10 = -VAR_0;
  break;
 }
 FUNC_3(&VAR_8->lock, VAR_9);

 return VAR_10;
}
