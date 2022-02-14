
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcd_unit {int dummy; } ;
struct cdrom_device_info {struct pcd_unit* handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct pcd_unit*,char*,int,int ,int ) ;
 scalar_t__ FUNC_2 (struct pcd_unit*,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct cdrom_device_info *VAR_5, int VAR_6)
{
 char VAR_7[12] = { 0x25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
 struct pcd_unit *VAR_8 = VAR_5->handle;

 if (FUNC_2(VAR_8, VAR_3))
  return VAR_1;
 if (FUNC_1(VAR_8, VAR_7, 8, VAR_4, FUNC_0("check media")))
  return VAR_2;
 return VAR_0;
}
