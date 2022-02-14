
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct saa7146_dev {int dummy; } ;
struct dvb_ca_en50221 {scalar_t__ data; } ;
struct TYPE_3__ {struct saa7146_dev* dev; } ;
struct budget_ci {TYPE_1__ budget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct saa7146_dev*,int,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int,int,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int,int,int,int ) ;
 int FUNC_3 (struct saa7146_dev*,int ) ;

__attribute__((used)) static int FUNC_4(struct dvb_ca_en50221 *VAR_6, int VAR_7)
{
 struct budget_ci *VAR_8 = (struct budget_ci *) VAR_6->data;
 struct saa7146_dev *VAR_9 = VAR_8->budget.dev;
 int VAR_10;

 if (VAR_7 != 0)
  return -VAR_4;

 FUNC_0(VAR_9, 1, VAR_5);

 VAR_10 = FUNC_1(&VAR_8->budget, VAR_3, VAR_2, 1, 1, 0);
 FUNC_2(&VAR_8->budget, VAR_3, VAR_2, 1,
          VAR_10 | VAR_1, 1, 0);

 FUNC_3(VAR_9, VAR_0);
 return 0;
}
