
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdrom_mcn {scalar_t__* medium_catalog_number; } ;
struct cdrom_device_info {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,char*,int) ;
 scalar_t__ FUNC_1 (int ,char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_2(struct cdrom_device_info *VAR_2, struct cdrom_mcn *VAR_3)
{
 char VAR_4[12] =
     { VAR_1, 0, 0x40, 2, 0, 0, 0, 0, 24, 0, 0, 0 };
 char VAR_5[32];

 if (FUNC_1(VAR_2->handle, VAR_4, 24, VAR_5, "get mcn"))
  return -VAR_0;

 FUNC_0(VAR_3->medium_catalog_number, VAR_5 + 9, 13);
 VAR_3->medium_catalog_number[13] = 0;

 return 0;
}
