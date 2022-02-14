
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7146_dev {scalar_t__ ext_priv; } ;
struct TYPE_2__ {int * dvb_frontend; scalar_t__ ci_present; } ;
struct budget_av {int has_saa7113; TYPE_1__ budget; int vd; } ;


 int VAR_0 ;
 int FUNC_0 (struct budget_av*) ;
 int FUNC_1 (int,char*,struct saa7146_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct budget_av*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct saa7146_dev*,int ,int ) ;
 int FUNC_7 (int *,struct saa7146_dev*) ;
 int FUNC_8 (struct saa7146_dev*) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_10(struct saa7146_dev *VAR_1)
{
 struct budget_av *VAR_2 = (struct budget_av *) VAR_1->ext_priv;
 int VAR_3;

 FUNC_1(2, "dev: %p\n", VAR_1);

 if (1 == VAR_2->has_saa7113) {
  FUNC_6(VAR_1, 0, VAR_0);

  FUNC_5(200);

  FUNC_7(&VAR_2->vd, VAR_1);

  FUNC_8(VAR_1);
 }

 if (VAR_2->budget.ci_present)
  FUNC_0(VAR_2);

 if (VAR_2->budget.dvb_frontend != ((void*)0)) {
  FUNC_3(VAR_2->budget.dvb_frontend);
  FUNC_2(VAR_2->budget.dvb_frontend);
 }
 VAR_3 = FUNC_9(&VAR_2->budget);

 FUNC_4(VAR_2);

 return VAR_3;
}
