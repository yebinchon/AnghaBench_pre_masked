
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int fbcon_par; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 () ;
 int* VAR_0 ;
 int FUNC_1 (struct fb_info*) ;
 int VAR_1 ;
 int FUNC_2 (struct fb_info*) ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 struct fb_info** VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 (char const*,char**,int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_5,
      struct device_attribute *VAR_6,
      const char *VAR_7, size_t VAR_8)
{
 struct fb_info *VAR_9;
 int VAR_10, VAR_11;
 char **VAR_12 = ((void*)0);

 if (VAR_2)
  return VAR_8;

 FUNC_0();
 VAR_11 = VAR_0[VAR_3];

 if (VAR_11 == -1 || VAR_4[VAR_11] == ((void*)0))
  goto err;

 VAR_9 = VAR_4[VAR_11];

 if (!VAR_9->fbcon_par)
  goto err;

 VAR_10 = FUNC_4(VAR_7, VAR_12, 0);

 if (VAR_10) {
  VAR_1 = 0;
  FUNC_1(VAR_9);
 } else {
  VAR_1 = 1;
  FUNC_2(VAR_9);
 }

err:
 FUNC_3();
 return VAR_8;
}
