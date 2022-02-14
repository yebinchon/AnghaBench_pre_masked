
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ses_component {unsigned char* desc; int addr; } ;
struct enclosure_component {struct ses_component* scratch; } ;
typedef enum scsi_protocol { ____Placeholder_scsi_protocol } scsi_protocol ;




__attribute__((used)) static void FUNC_0(struct enclosure_component *VAR_0,
       unsigned char *VAR_1)
{
 int VAR_2 = VAR_1[0] & 0x10;
 int VAR_3 = VAR_1[0] & 0x80;
 enum scsi_protocol VAR_4 = VAR_1[0] & 0x0f;
 u64 VAR_5 = 0;
 struct ses_component *VAR_6 = VAR_0->scratch;
 unsigned char *VAR_7;

 VAR_6->desc = VAR_1;

 if (VAR_3)
  return;

 switch (VAR_4) {
 case 128:
  if (VAR_2)
   VAR_7 = VAR_1 + 8;
  else
   VAR_7 = VAR_1 + 4;

  VAR_5 = (u64)VAR_7[12] << 56 |
   (u64)VAR_7[13] << 48 |
   (u64)VAR_7[14] << 40 |
   (u64)VAR_7[15] << 32 |
   (u64)VAR_7[16] << 24 |
   (u64)VAR_7[17] << 16 |
   (u64)VAR_7[18] << 8 |
   (u64)VAR_7[19];
  break;
 default:

  break;
 }
 VAR_6->addr = VAR_5;
}
