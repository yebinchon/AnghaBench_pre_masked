
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct t10_pr_registration {int pr_res_type; int pr_res_key; int pr_res_scope; } ;
struct TYPE_2__ {int pr_generation; } ;
struct se_device {int dev_reservation_lock; struct t10_pr_registration* dev_pr_res_holder; TYPE_1__ t10_pr; } ;
struct se_cmd {int data_length; struct se_device* se_dev; } ;
typedef int sense_reason_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 unsigned char* FUNC_3 (struct se_cmd*) ;
 int FUNC_4 (struct se_cmd*) ;

__attribute__((used)) static sense_reason_t
FUNC_5(struct se_cmd *VAR_4)
{
 struct se_device *VAR_5 = VAR_4->se_dev;
 struct t10_pr_registration *VAR_6;
 unsigned char *VAR_7;
 u64 VAR_8;
 u32 VAR_9 = 16;

 if (VAR_4->data_length < 8) {
  FUNC_0("PRIN SA READ_RESERVATIONS SCSI Data Length: %u"
   " too small\n", VAR_4->data_length);
  return VAR_2;
 }

 VAR_7 = FUNC_3(VAR_4);
 if (!VAR_7)
  return VAR_3;

 VAR_7[0] = ((VAR_5->t10_pr.pr_generation >> 24) & 0xff);
 VAR_7[1] = ((VAR_5->t10_pr.pr_generation >> 16) & 0xff);
 VAR_7[2] = ((VAR_5->t10_pr.pr_generation >> 8) & 0xff);
 VAR_7[3] = (VAR_5->t10_pr.pr_generation & 0xff);

 FUNC_1(&VAR_5->dev_reservation_lock);
 VAR_6 = VAR_5->dev_pr_res_holder;
 if (VAR_6) {



  VAR_7[4] = ((VAR_9 >> 24) & 0xff);
  VAR_7[5] = ((VAR_9 >> 16) & 0xff);
  VAR_7[6] = ((VAR_9 >> 8) & 0xff);
  VAR_7[7] = (VAR_9 & 0xff);

  if (VAR_4->data_length < 22)
   goto err;
  if ((VAR_6->pr_res_type == VAR_1) ||
      (VAR_6->pr_res_type == VAR_0))
   VAR_8 = 0;
  else
   VAR_8 = VAR_6->pr_res_key;

  VAR_7[8] = ((VAR_8 >> 56) & 0xff);
  VAR_7[9] = ((VAR_8 >> 48) & 0xff);
  VAR_7[10] = ((VAR_8 >> 40) & 0xff);
  VAR_7[11] = ((VAR_8 >> 32) & 0xff);
  VAR_7[12] = ((VAR_8 >> 24) & 0xff);
  VAR_7[13] = ((VAR_8 >> 16) & 0xff);
  VAR_7[14] = ((VAR_8 >> 8) & 0xff);
  VAR_7[15] = (VAR_8 & 0xff);



  VAR_7[21] = (VAR_6->pr_res_scope & 0xf0) |
     (VAR_6->pr_res_type & 0x0f);
 }

err:
 FUNC_2(&VAR_5->dev_reservation_lock);
 FUNC_4(VAR_4);

 return 0;
}
