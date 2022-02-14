
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {struct m48t86_ops* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct m48t86_ops {unsigned char (* readbyte ) (int ) ;} ;
struct device {int dummy; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 (struct seq_file*,char*,char*) ;
 unsigned char FUNC_1 (int ) ;
 unsigned char FUNC_2 (int ) ;
 struct platform_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_4, struct seq_file *VAR_5)
{
 unsigned char VAR_6;
 struct platform_device *VAR_7 = FUNC_3(VAR_4);
 struct m48t86_ops *VAR_8 = VAR_7->dev.platform_data;

 VAR_6 = VAR_8->readbyte(VAR_0);

 FUNC_0(VAR_5, "mode\t\t: %s\n",
   (VAR_6 & VAR_1) ? "binary" : "bcd");

 VAR_6 = VAR_8->readbyte(VAR_2);

 FUNC_0(VAR_5, "battery\t\t: %s\n",
   (VAR_6 & VAR_3) ? "ok" : "exhausted");

 return 0;
}
