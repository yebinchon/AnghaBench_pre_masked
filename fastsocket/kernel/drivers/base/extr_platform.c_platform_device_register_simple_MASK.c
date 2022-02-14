
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 struct platform_device* FUNC_0 (int) ;
 int FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*,struct resource*,unsigned int) ;
 struct platform_device* FUNC_3 (char const*,int) ;
 int FUNC_4 (struct platform_device*) ;

struct platform_device *FUNC_5(const char *VAR_1,
       int VAR_2,
       struct resource *VAR_3,
       unsigned int VAR_4)
{
 struct platform_device *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_1, VAR_2);
 if (!VAR_5) {
  VAR_6 = -VAR_0;
  goto error;
 }

 if (VAR_4) {
  VAR_6 = FUNC_2(VAR_5, VAR_3, VAR_4);
  if (VAR_6)
   goto error;
 }

 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6)
  goto error;

 return VAR_5;

error:
 FUNC_4(VAR_5);
 return FUNC_0(VAR_6);
}
