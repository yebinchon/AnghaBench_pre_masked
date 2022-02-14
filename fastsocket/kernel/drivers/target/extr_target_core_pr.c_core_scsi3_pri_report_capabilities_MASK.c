
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct t10_reservation {scalar_t__ pr_aptpl_active; } ;
struct se_device {struct t10_reservation t10_pr; } ;
struct se_cmd {int data_length; struct se_device* se_dev; } ;
typedef int sense_reason_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 unsigned char* FUNC_1 (struct se_cmd*) ;
 int FUNC_2 (struct se_cmd*) ;

__attribute__((used)) static sense_reason_t
FUNC_3(struct se_cmd *VAR_2)
{
 struct se_device *VAR_3 = VAR_2->se_dev;
 struct t10_reservation *VAR_4 = &VAR_3->t10_pr;
 unsigned char *VAR_5;
 u16 VAR_6 = 8;

 if (VAR_2->data_length < 6) {
  FUNC_0("PRIN SA REPORT_CAPABILITIES SCSI Data Length:"
   " %u too small\n", VAR_2->data_length);
  return VAR_0;
 }

 VAR_5 = FUNC_1(VAR_2);
 if (!VAR_5)
  return VAR_1;

 VAR_5[0] = ((VAR_6 << 8) & 0xff);
 VAR_5[1] = (VAR_6 & 0xff);
 VAR_5[2] |= 0x10;
 VAR_5[2] |= 0x08;
 VAR_5[2] |= 0x04;
 VAR_5[2] |= 0x01;




 VAR_5[3] |= 0x80;



 VAR_5[3] |= 0x10;



 if (VAR_4->pr_aptpl_active)
  VAR_5[3] |= 0x01;



 VAR_5[4] |= 0x80;
 VAR_5[4] |= 0x40;
 VAR_5[4] |= 0x20;
 VAR_5[4] |= 0x08;
 VAR_5[4] |= 0x02;
 VAR_5[5] |= 0x01;

 FUNC_2(VAR_2);

 return 0;
}
