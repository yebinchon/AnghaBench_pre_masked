
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {struct se_device* lun_se_dev; } ;
struct se_portal_group {TYPE_3__ tpg_virt_lun0; } ;
struct se_device {TYPE_4__* transport; } ;
struct se_cmd {unsigned char* t_task_cdb; int data_length; TYPE_2__* se_lun; struct se_device* se_dev; } ;
typedef int sense_reason_t ;
typedef int buf ;
struct TYPE_11__ {unsigned char page; int (* emulate ) (struct se_cmd*,unsigned char*) ;} ;
struct TYPE_10__ {unsigned char (* get_device_type ) (struct se_device*) ;} ;
struct TYPE_8__ {TYPE_1__* lun_sep; } ;
struct TYPE_7__ {struct se_portal_group* sep_tpg; } ;


 int FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* VAR_3 ;
 int FUNC_1 (unsigned char*,unsigned char*,int ) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (char*,unsigned char) ;
 int FUNC_5 (struct se_cmd*,unsigned char*) ;
 unsigned char FUNC_6 (struct se_device*) ;
 int FUNC_7 (struct se_cmd*,unsigned char*) ;
 int FUNC_8 (struct se_cmd*,int ) ;
 unsigned char* FUNC_9 (struct se_cmd*) ;
 int FUNC_10 (struct se_cmd*) ;
 int VAR_4 ;

__attribute__((used)) static sense_reason_t
FUNC_11(struct se_cmd *VAR_5)
{
 struct se_device *VAR_6 = VAR_5->se_dev;
 struct se_portal_group *VAR_7 = VAR_5->se_lun->lun_sep->sep_tpg;
 unsigned char *VAR_8;
 unsigned char *VAR_9 = VAR_5->t_task_cdb;
 unsigned char VAR_10[VAR_1];
 sense_reason_t VAR_11;
 int VAR_12;

 FUNC_2(VAR_10, 0, VAR_1);

 if (VAR_6 == VAR_7->tpg_virt_lun0.lun_se_dev)
  VAR_10[0] = 0x3f;
 else
  VAR_10[0] = VAR_6->transport->get_device_type(VAR_6);

 if (!(VAR_9[1] & 0x1)) {
  if (VAR_9[2]) {
   FUNC_4("INQUIRY with EVPD==0 but PAGE CODE=%02x\n",
          VAR_9[2]);
   VAR_11 = VAR_2;
   goto out;
  }

  VAR_11 = FUNC_5(VAR_5, VAR_10);
  goto out;
 }

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_3); ++VAR_12) {
  if (VAR_9[2] == VAR_3[VAR_12].page) {
   VAR_10[1] = VAR_9[2];
   VAR_11 = VAR_3[VAR_12].emulate(VAR_5, VAR_10);
   goto out;
  }
 }

 FUNC_4("Unknown VPD Code: 0x%02x\n", VAR_9[2]);
 VAR_11 = VAR_2;

out:
 VAR_8 = FUNC_9(VAR_5);
 if (VAR_8) {
  FUNC_1(VAR_8, VAR_10, FUNC_3(VAR_4, sizeof(VAR_10), VAR_5->data_length));
  FUNC_10(VAR_5);
 }

 if (!VAR_11)
  FUNC_8(VAR_5, VAR_0);
 return VAR_11;
}
