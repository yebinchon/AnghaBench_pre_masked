
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct seq_file {int dummy; } ;
struct TYPE_2__ {struct m48t59_plat_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct m48t59_private {int lock; } ;
struct m48t59_plat_data {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct m48t59_private* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct seq_file*,char*,char*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct platform_device* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_2, struct seq_file *VAR_3)
{
 struct platform_device *VAR_4 = FUNC_5(VAR_2);
 struct m48t59_plat_data *VAR_5 = VAR_4->dev.platform_data;
 struct m48t59_private *VAR_6 = FUNC_1(VAR_4);
 unsigned long VAR_7;
 u8 VAR_8;

 FUNC_3(&VAR_6->lock, VAR_7);
 VAR_8 = FUNC_0(VAR_0);
 FUNC_4(&VAR_6->lock, VAR_7);

 FUNC_2(VAR_3, "battery\t\t: %s\n",
   (VAR_8 & VAR_1) ? "low" : "normal");
 return 0;
}
