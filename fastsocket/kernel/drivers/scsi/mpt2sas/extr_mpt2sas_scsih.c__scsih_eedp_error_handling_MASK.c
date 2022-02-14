
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct scsi_cmnd {int result; int sense_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int,int) ;

__attribute__((used)) static void
FUNC_1(struct scsi_cmnd *VAR_4, u16 VAR_5)
{
 u8 VAR_6;

 switch (VAR_5) {
 case 129:
  VAR_6 = 0x01;
  break;
 case 130:
  VAR_6 = 0x02;
  break;
 case 128:
  VAR_6 = 0x03;
  break;
 default:
  VAR_6 = 0x00;
  break;
 }

 FUNC_0(0, VAR_4->sense_buffer, VAR_2, 0x10, VAR_6);
 VAR_4->result = VAR_1 << 24 | (VAR_0 << 16) |
     VAR_3;
}
