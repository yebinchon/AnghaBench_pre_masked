
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector {scalar_t__ encoder; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,char*) ;
 struct drm_connector* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
       struct device_attribute *VAR_2,
      char *VAR_3)
{
 struct drm_connector *VAR_4 = FUNC_1(VAR_1);

 return FUNC_0(VAR_3, VAR_0, "%s\n", VAR_4->encoder ? "enabled" :
   "disabled");
}
