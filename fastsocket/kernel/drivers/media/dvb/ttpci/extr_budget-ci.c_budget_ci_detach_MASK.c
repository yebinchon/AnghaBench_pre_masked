
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7146_dev {scalar_t__ ext_priv; } ;
struct TYPE_2__ {scalar_t__ dvb_frontend; scalar_t__ ci_present; struct saa7146_dev* dev; } ;
struct budget_ci {TYPE_1__ budget; } ;


 int VAR_0 ;
 int FUNC_0 (struct budget_ci*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct budget_ci*) ;
 int FUNC_4 (struct budget_ci*) ;
 int FUNC_5 (struct saa7146_dev*,int,int ) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(struct saa7146_dev *VAR_1)
{
 struct budget_ci *VAR_2 = (struct budget_ci *) VAR_1->ext_priv;
 struct saa7146_dev *VAR_3 = VAR_2->budget.dev;
 int VAR_4;

 if (VAR_2->budget.ci_present)
  FUNC_0(VAR_2);
 FUNC_4(VAR_2);
 if (VAR_2->budget.dvb_frontend) {
  FUNC_2(VAR_2->budget.dvb_frontend);
  FUNC_1(VAR_2->budget.dvb_frontend);
 }
 VAR_4 = FUNC_6(&VAR_2->budget);


 FUNC_5(VAR_3, 2, VAR_0);

 FUNC_3(VAR_2);

 return VAR_4;
}
