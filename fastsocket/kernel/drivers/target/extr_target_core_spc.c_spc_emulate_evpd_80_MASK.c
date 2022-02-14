
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef unsigned char u16 ;
struct TYPE_2__ {char* unit_serial; } ;
struct se_device {int dev_flags; TYPE_1__ t10_wwn; } ;
struct se_cmd {struct se_device* se_dev; } ;
typedef int sense_reason_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char*,char*,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static sense_reason_t
FUNC_2(struct se_cmd *VAR_1, unsigned char *VAR_2)
{
 struct se_device *VAR_3 = VAR_1->se_dev;
 u16 VAR_4 = 0;

 if (VAR_3->dev_flags & VAR_0) {
  u32 VAR_5;

  VAR_5 = FUNC_1(VAR_3->t10_wwn.unit_serial);
  VAR_5++;

  VAR_4 += FUNC_0(&VAR_2[4], "%s", VAR_3->t10_wwn.unit_serial);
  VAR_4++;
  VAR_2[3] = VAR_4;
 }
 return 0;
}
