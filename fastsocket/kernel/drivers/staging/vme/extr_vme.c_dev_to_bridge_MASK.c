
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vme_bridge {int dummy; } ;
struct device {struct vme_bridge* platform_data; } ;



__attribute__((used)) static struct vme_bridge *FUNC_0(struct device *VAR_0)
{
 return VAR_0->platform_data;
}
