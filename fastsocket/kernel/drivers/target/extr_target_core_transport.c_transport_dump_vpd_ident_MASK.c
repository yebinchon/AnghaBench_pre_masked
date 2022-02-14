
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t10_vpd {int device_identifier_code_set; char* device_identifier; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (char*,unsigned char*) ;
 int FUNC_2 (unsigned char*,int,char*,char*) ;
 int FUNC_3 (unsigned char*,char*,int) ;
 int FUNC_4 (unsigned char*,unsigned char*,int) ;

int FUNC_5(
 struct t10_vpd *VAR_2,
 unsigned char *VAR_3,
 int VAR_4)
{
 unsigned char VAR_5[VAR_1];
 int VAR_6 = 0;

 FUNC_0(VAR_5, 0, VAR_1);

 switch (VAR_2->device_identifier_code_set) {
 case 0x01:
  FUNC_2(VAR_5, sizeof(VAR_5),
   "T10 VPD Binary Device Identifier: %s\n",
   &VAR_2->device_identifier[0]);
  break;
 case 0x02:
  FUNC_2(VAR_5, sizeof(VAR_5),
   "T10 VPD ASCII Device Identifier: %s\n",
   &VAR_2->device_identifier[0]);
  break;
 case 0x03:
  FUNC_2(VAR_5, sizeof(VAR_5),
   "T10 VPD UTF-8 Device Identifier: %s\n",
   &VAR_2->device_identifier[0]);
  break;
 default:
  FUNC_3(VAR_5, "T10 VPD Device Identifier encoding unsupported:"
   " 0x%02x", VAR_2->device_identifier_code_set);
  VAR_6 = -VAR_0;
  break;
 }

 if (VAR_3)
  FUNC_4(VAR_3, VAR_5, VAR_4);
 else
  FUNC_1("%s", VAR_5);

 return VAR_6;
}
