
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcd_unit {int present; } ;
struct cdrom_device_info {struct pcd_unit* handle; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct cdrom_device_info *VAR_1, int VAR_2)
{
 struct pcd_unit *VAR_3 = VAR_1->handle;
 if (!VAR_3->present)
  return -VAR_0;
 return 0;
}
