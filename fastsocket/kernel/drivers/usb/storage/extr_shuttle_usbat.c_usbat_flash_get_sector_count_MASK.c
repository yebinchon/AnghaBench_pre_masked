
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usbat_info {int sectors; } ;
struct us_data {int dummy; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct us_data*,unsigned char*) ;
 int FUNC_5 (struct us_data*,unsigned char*,unsigned char*,int) ;
 int FUNC_6 (struct us_data*,unsigned char*,int,int ) ;

__attribute__((used)) static int FUNC_7(struct us_data *VAR_7,
     struct usbat_info *VAR_8)
{
 unsigned char VAR_9[3] = {
  VAR_3,
  VAR_2,
  VAR_1,
 };
 unsigned char VAR_10[3] = { 0x01, 0xA0, 0xEC };
 unsigned char *VAR_11;
 unsigned char VAR_12;
 int VAR_13;

 if (!VAR_7 || !VAR_8)
  return VAR_4;

 VAR_11 = FUNC_2(512, VAR_0);
 if (!VAR_11)
  return VAR_4;


 VAR_13 = FUNC_5(VAR_7, VAR_9, VAR_10, 3);
 if (VAR_13 != VAR_6) {
  FUNC_0("usbat_flash_get_sector_count: Gah! identify_device failed\n");
  VAR_13 = VAR_4;
  goto leave;
 }


 if (FUNC_4(VAR_7, &VAR_12) != VAR_6) {
  VAR_13 = VAR_4;
  goto leave;
 }

 FUNC_3(100);


 VAR_13 = FUNC_6(VAR_7, VAR_11, 512, 0);
 if (VAR_13 != VAR_5)
  goto leave;

 VAR_8->sectors = ((u32)(VAR_11[117]) << 24) |
  ((u32)(VAR_11[116]) << 16) |
  ((u32)(VAR_11[115]) << 8) |
  ((u32)(VAR_11[114]) );

 VAR_13 = VAR_5;

 leave:
 FUNC_1(VAR_11);
 return VAR_13;
}
