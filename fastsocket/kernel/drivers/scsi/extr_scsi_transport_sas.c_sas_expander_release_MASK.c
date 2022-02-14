
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_rphy {scalar_t__ q; } ;
struct sas_expander_device {int dummy; } ;
struct device {int parent; } ;


 int FUNC_0 (scalar_t__) ;
 struct sas_rphy* FUNC_1 (struct device*) ;
 int FUNC_2 (struct sas_expander_device*) ;
 int FUNC_3 (int ) ;
 struct sas_expander_device* FUNC_4 (struct sas_rphy*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0)
{
 struct sas_rphy *VAR_1 = FUNC_1(VAR_0);
 struct sas_expander_device *VAR_2 = FUNC_4(VAR_1);

 if (VAR_1->q)
  FUNC_0(VAR_1->q);

 FUNC_3(VAR_0->parent);
 FUNC_2(VAR_2);
}
