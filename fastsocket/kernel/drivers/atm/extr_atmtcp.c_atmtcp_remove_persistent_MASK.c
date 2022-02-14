
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmtcp_dev_data {scalar_t__ vcc; scalar_t__ persist; } ;
struct atm_dev {int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct atmtcp_dev_data* FUNC_0 (struct atm_dev*) ;
 int FUNC_1 (struct atm_dev*) ;
 struct atm_dev* FUNC_2 (int) ;
 int FUNC_3 (struct atm_dev*) ;
 int VAR_2 ;
 int FUNC_4 (struct atmtcp_dev_data*) ;

__attribute__((used)) static int FUNC_5(int VAR_3)
{
 struct atm_dev *VAR_4;
 struct atmtcp_dev_data *VAR_5;

 VAR_4 = FUNC_2(VAR_3);
 if (!VAR_4) return -VAR_1;
 if (VAR_4->ops != &VAR_2) {
  FUNC_3(VAR_4);
  return -VAR_0;
 }
 VAR_5 = FUNC_0(VAR_4);
 if (!VAR_5->persist) return 0;
 VAR_5->persist = 0;
 if (FUNC_0(VAR_4)->vcc) return 0;
 FUNC_4(VAR_5);
 FUNC_3(VAR_4);
 FUNC_1(VAR_4);
 return 0;
}
