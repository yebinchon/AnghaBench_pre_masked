
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct platform_device* FUNC_0 (int) ;
 int FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*,void const*,size_t) ;
 struct platform_device* FUNC_3 (char const*,int) ;
 int FUNC_4 (struct platform_device*) ;

struct platform_device *FUNC_5(
  struct device *VAR_1,
  const char *VAR_2, int VAR_3,
  const void *VAR_4, size_t VAR_5)
{
 struct platform_device *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_2, VAR_3);
 if (!VAR_6) {
  VAR_7 = -VAR_0;
  goto error;
 }

 VAR_6->dev.parent = VAR_1;

 if (VAR_5) {
  VAR_7 = FUNC_2(VAR_6, VAR_4, VAR_5);
  if (VAR_7)
   goto error;
 }

 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7)
  goto error;

 return VAR_6;

error:
 FUNC_4(VAR_6);
 return FUNC_0(VAR_7);
}
