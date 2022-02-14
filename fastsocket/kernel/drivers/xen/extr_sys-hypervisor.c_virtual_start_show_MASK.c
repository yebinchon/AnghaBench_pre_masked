
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_platform_parameters {int virt_start; } ;
struct hyp_sysfs_attr {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct xen_platform_parameters*) ;
 int VAR_2 ;
 int FUNC_1 (struct xen_platform_parameters*) ;
 struct xen_platform_parameters* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct hyp_sysfs_attr *VAR_3, char *VAR_4)
{
 int VAR_5 = -VAR_0;
 struct xen_platform_parameters *VAR_6;

 VAR_6 = FUNC_2(sizeof(struct xen_platform_parameters), VAR_1);
 if (VAR_6) {
  VAR_5 = FUNC_0(VAR_2,
          VAR_6);
  if (!VAR_5)
   VAR_5 = FUNC_3(VAR_4, "%lx\n", VAR_6->virt_start);
  FUNC_1(VAR_6);
 }

 return VAR_5;
}
