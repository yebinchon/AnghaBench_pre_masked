
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7146_dev {int dummy; } ;
struct dvb_ca_en50221 {scalar_t__ data; } ;
struct TYPE_2__ {struct saa7146_dev* dev; } ;
struct budget_ci {TYPE_1__ budget; int slot_status; scalar_t__ ci_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct saa7146_dev*,int,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int,int ,int,int ) ;
 int FUNC_3 (struct saa7146_dev*,int ) ;

__attribute__((used)) static int FUNC_4(struct dvb_ca_en50221 *VAR_8, int VAR_9)
{
 struct budget_ci *VAR_10 = (struct budget_ci *) VAR_8->data;
 struct saa7146_dev *VAR_11 = VAR_10->budget.dev;

 if (VAR_9 != 0)
  return -VAR_4;

 if (VAR_10->ci_irq) {

  FUNC_1(VAR_11, 0, VAR_5);
 }
 VAR_10->slot_status = VAR_7;
 FUNC_2(&VAR_10->budget, VAR_3, VAR_2, 1, 0, 1, 0);
 FUNC_0(1);
 FUNC_2(&VAR_10->budget, VAR_3, VAR_2, 1,
          VAR_1, 1, 0);

 FUNC_1(VAR_11, 1, VAR_6);
 FUNC_3(VAR_11, VAR_0);
 return 0;
}
