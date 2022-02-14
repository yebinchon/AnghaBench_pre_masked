
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_device {int dummy; } ;
struct se_cmd {struct se_device* se_dev; } ;
typedef int sense_reason_t ;


 scalar_t__ FUNC_0 (struct se_device*) ;

__attribute__((used)) static sense_reason_t
FUNC_1(struct se_cmd *VAR_0, unsigned char *VAR_1)
{
 struct se_device *VAR_2 = VAR_0->se_dev;

 VAR_1[3] = 0x3c;

 VAR_1[5] = 0x07;


 if (FUNC_0(VAR_2))
  VAR_1[6] = 0x01;
 return 0;
}
