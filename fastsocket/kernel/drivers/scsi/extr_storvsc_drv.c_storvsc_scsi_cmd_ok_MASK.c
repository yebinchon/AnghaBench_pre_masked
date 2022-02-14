
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_cmnd {int* cmnd; int result; } ;


 int VAR_0 ;



__attribute__((used)) static bool FUNC_0(struct scsi_cmnd *VAR_1)
{
 bool VAR_2 = 1;
 u8 VAR_3 = VAR_1->cmnd[0];

 switch (VAR_3) {

 case 128:




 case 129:
  VAR_1->result = VAR_0 << 16;
  VAR_2 = 0;
  break;
 default:
  break;
 }
 return VAR_2;
}
