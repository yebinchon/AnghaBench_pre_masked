
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7146_dev {int dummy; } ;
struct dvb_ca_en50221 {scalar_t__ data; } ;
struct TYPE_2__ {struct saa7146_dev* dev; } ;
struct budget_av {int slot_status; TYPE_1__ budget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (struct saa7146_dev*,int ) ;

__attribute__((used)) static int FUNC_2(struct dvb_ca_en50221 *VAR_2, int VAR_3)
{
 struct budget_av *VAR_4 = (struct budget_av *) VAR_2->data;
 struct saa7146_dev *VAR_5 = VAR_4->budget.dev;

 if (VAR_3 != 0)
  return -VAR_1;

 FUNC_0(1, "ciintf_slot_ts_enable: %d\n", VAR_4->slot_status);

 FUNC_1(VAR_5, VAR_0);

 return 0;
}
