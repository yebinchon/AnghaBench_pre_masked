
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rc_dev {TYPE_1__* raw; } ;
struct ir_raw_event {int pulse; int duration; } ;
struct TYPE_2__ {int kfifo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,void*,int) ;

int FUNC_4(struct rc_dev *VAR_2, struct ir_raw_event *VAR_3)
{
 if (!VAR_2->raw)
  return -VAR_0;

 FUNC_0(2, "sample: (%05dus %s)\n",
     FUNC_2(VAR_3->duration), FUNC_1(VAR_3->pulse));

 if (FUNC_3(VAR_2->raw->kfifo, (void *)VAR_3, sizeof(*VAR_3)) != sizeof(*VAR_3))
  return -VAR_1;

 return 0;
}
