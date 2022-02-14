
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fbcon_ops {int flags; } ;
struct fb_info {struct fbcon_ops* fbcon_par; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int* VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 struct fb_info** VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_6,
     struct device_attribute *VAR_7, char *VAR_8)
{
 struct fb_info *VAR_9;
 struct fbcon_ops *VAR_10;
 int VAR_11, VAR_12 = -1;

 if (VAR_3)
  return 0;

 FUNC_0();
 VAR_11 = VAR_2[VAR_4];

 if (VAR_11 == -1 || VAR_5[VAR_11] == ((void*)0))
  goto err;

 VAR_9 = VAR_5[VAR_11];
 VAR_10 = VAR_9->fbcon_par;

 if (!VAR_10)
  goto err;

 VAR_12 = (VAR_10->flags & VAR_0) ? 1 : 0;
err:
 FUNC_1();
 return FUNC_2(VAR_8, VAR_1, "%d\n", VAR_12);
}
