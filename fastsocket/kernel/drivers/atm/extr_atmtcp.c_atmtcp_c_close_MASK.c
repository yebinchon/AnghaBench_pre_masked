
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmtcp_dev_data {scalar_t__ persist; int * vcc; } ;
struct atm_vcc {int * dev_data; } ;
struct atm_dev {int * dev_data; } ;


 struct atmtcp_dev_data* FUNC_0 (struct atm_dev*) ;
 int VAR_0 ;
 int FUNC_1 (struct atm_dev*) ;
 int FUNC_2 (struct atmtcp_dev_data*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct atm_vcc *VAR_1)
{
 struct atm_dev *VAR_2;
 struct atmtcp_dev_data *VAR_3;

 VAR_2 = (struct atm_dev *) VAR_1->dev_data;
 VAR_3 = FUNC_0(VAR_2);
 VAR_3->vcc = ((void*)0);
 if (VAR_3->persist) return;
 VAR_2->dev_data = ((void*)0);
 FUNC_2(VAR_3);
 FUNC_1(VAR_2);
 VAR_1->dev_data = ((void*)0);
 FUNC_3(VAR_0);
}
