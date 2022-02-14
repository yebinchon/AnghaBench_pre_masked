
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdrom_mcn {char* medium_catalog_number; } ;
struct cdrom_device_info {int * handle; } ;
typedef int ide_drive_t ;
typedef int buf ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (int *,unsigned char*,int ,char*,unsigned int*,int *,int ,int ) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (unsigned char*,int ,int) ;

int FUNC_3(struct cdrom_device_info *VAR_2,
        struct cdrom_mcn *VAR_3)
{
 ide_drive_t *VAR_4 = VAR_2->handle;
 int VAR_5, VAR_6;
 char VAR_7[24];
 unsigned char VAR_8[VAR_0];
 unsigned VAR_9 = sizeof(VAR_7);

 FUNC_2(VAR_8, 0, VAR_0);

 VAR_8[0] = VAR_1;
 VAR_8[1] = 2;
 VAR_8[2] = 0x40;
 VAR_8[3] = 2;
 VAR_8[8] = VAR_9;

 VAR_5 = FUNC_0(VAR_4, VAR_8, 0, VAR_7, &VAR_9, ((void*)0), 0, 0);
 if (VAR_5)
  return VAR_5;

 VAR_6 = sizeof(VAR_3->medium_catalog_number) - 1;
 FUNC_1(VAR_3->medium_catalog_number, VAR_7 + 9, VAR_6);
 VAR_3->medium_catalog_number[VAR_6] = '\0';

 return 0;
}
