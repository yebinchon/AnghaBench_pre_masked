
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct se_lun {int lun_sep; } ;
struct TYPE_4__ {char* model; char* revision; } ;
struct se_device {TYPE_2__ t10_wwn; TYPE_1__* transport; } ;
struct se_cmd {struct se_device* se_dev; struct se_lun* se_lun; } ;
typedef int sense_reason_t ;
struct TYPE_3__ {scalar_t__ (* get_device_type ) (struct se_device*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned char*,int,char*,...) ;
 int FUNC_1 (int ,unsigned char*) ;
 scalar_t__ FUNC_2 (struct se_device*) ;

sense_reason_t
FUNC_3(struct se_cmd *VAR_1, unsigned char *VAR_2)
{
 struct se_lun *VAR_3 = VAR_1->se_lun;
 struct se_device *VAR_4 = VAR_1->se_dev;


 if (VAR_4->transport->get_device_type(VAR_4) == VAR_0)
  VAR_2[1] = 0x80;

 VAR_2[2] = 0x05;
 VAR_2[3] = 2;




 FUNC_1(VAR_3->lun_sep, VAR_2);

 VAR_2[7] = 0x2;

 FUNC_0(&VAR_2[8], 8, "LIO-ORG");
 FUNC_0(&VAR_2[16], 16, "%s", VAR_4->t10_wwn.model);
 FUNC_0(&VAR_2[32], 4, "%s", VAR_4->t10_wwn.revision);
 VAR_2[4] = 31;

 return 0;
}
