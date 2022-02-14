
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146_dev {scalar_t__ ext_priv; } ;
struct budget_patch {scalar_t__ dvb_frontend; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct budget_patch*) ;
 int FUNC_3 (struct budget_patch*) ;

__attribute__((used)) static int FUNC_4 (struct saa7146_dev* VAR_0)
{
 struct budget_patch *VAR_1 = (struct budget_patch*) VAR_0->ext_priv;
 int VAR_2;

 if (VAR_1->dvb_frontend) {
  FUNC_1(VAR_1->dvb_frontend);
  FUNC_0(VAR_1->dvb_frontend);
 }
 VAR_2 = FUNC_3 (VAR_1);

 FUNC_2 (VAR_1);

 return VAR_2;
}
