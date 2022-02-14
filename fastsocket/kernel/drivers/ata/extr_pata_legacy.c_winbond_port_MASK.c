
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct legacy_probe {int private; } ;
struct legacy_data {int timing; } ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ,int,char*) ;

__attribute__((used)) static int FUNC_1(struct platform_device *VAR_1,
   struct legacy_probe *VAR_2, struct legacy_data *VAR_3)
{
 if (FUNC_0(&VAR_1->dev, VAR_2->private, 4, "winbond") == ((void*)0))
  return -VAR_0;
 VAR_3->timing = VAR_2->private;
 return 0;
}
