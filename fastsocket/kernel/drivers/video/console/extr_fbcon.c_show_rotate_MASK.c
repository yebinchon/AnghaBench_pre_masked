
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int* VAR_1 ;
 int FUNC_1 (struct fb_info*) ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 struct fb_info** VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_5,
      struct device_attribute *VAR_6,char *VAR_7)
{
 struct fb_info *VAR_8;
 int VAR_9 = 0, VAR_10;

 if (VAR_2)
  return 0;

 FUNC_0();
 VAR_10 = VAR_1[VAR_3];

 if (VAR_10 == -1 || VAR_4[VAR_10] == ((void*)0))
  goto err;

 VAR_8 = VAR_4[VAR_10];
 VAR_9 = FUNC_1(VAR_8);
err:
 FUNC_2();
 return FUNC_3(VAR_7, VAR_0, "%d\n", VAR_9);
}
