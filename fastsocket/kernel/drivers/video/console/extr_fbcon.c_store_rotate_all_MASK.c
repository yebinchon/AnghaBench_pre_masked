
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 () ;
 int* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct fb_info*,int) ;
 size_t VAR_2 ;
 struct fb_info** VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (char const*,char**,int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_4,
    struct device_attribute *VAR_5,const char *VAR_6,
    size_t VAR_7)
{
 struct fb_info *VAR_8;
 int VAR_9, VAR_10;
 char **VAR_11 = ((void*)0);

 if (VAR_1)
  return VAR_7;

 FUNC_0();
 VAR_10 = VAR_0[VAR_2];

 if (VAR_10 == -1 || VAR_3[VAR_10] == ((void*)0))
  goto err;

 VAR_8 = VAR_3[VAR_10];
 VAR_9 = FUNC_3(VAR_6, VAR_11, 0);
 FUNC_1(VAR_8, VAR_9);
err:
 FUNC_2();
 return VAR_7;
}
