
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t10_vpd {int association; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (char*,unsigned char*) ;
 int FUNC_2 (unsigned char*,char*,...) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;

int FUNC_4(
 struct t10_vpd *VAR_2,
 unsigned char *VAR_3,
 int VAR_4)
{
 unsigned char VAR_5[VAR_1];
 int VAR_6 = 0;
 int VAR_7;

 FUNC_0(VAR_5, 0, VAR_1);
 VAR_7 = FUNC_2(VAR_5, "T10 VPD Identifier Association: ");

 switch (VAR_2->association) {
 case 0x00:
  FUNC_2(VAR_5+VAR_7, "addressed logical unit\n");
  break;
 case 0x10:
  FUNC_2(VAR_5+VAR_7, "target port\n");
  break;
 case 0x20:
  FUNC_2(VAR_5+VAR_7, "SCSI target device\n");
  break;
 default:
  FUNC_2(VAR_5+VAR_7, "Unknown 0x%02x\n", VAR_2->association);
  VAR_6 = -VAR_0;
  break;
 }

 if (VAR_3)
  FUNC_3(VAR_3, VAR_5, VAR_4);
 else
  FUNC_1("%s", VAR_5);

 return VAR_6;
}
