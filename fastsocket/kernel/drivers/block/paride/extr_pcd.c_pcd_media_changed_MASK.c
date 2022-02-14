
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcd_unit {int changed; } ;
struct cdrom_device_info {struct pcd_unit* handle; } ;



__attribute__((used)) static int FUNC_0(struct cdrom_device_info *VAR_0, int VAR_1)
{
 struct pcd_unit *VAR_2 = VAR_0->handle;
 int VAR_3 = VAR_2->changed;
 if (VAR_3)
  VAR_2->changed = 0;
 return VAR_3;
}
