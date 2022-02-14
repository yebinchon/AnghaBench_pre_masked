
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_orom {int dummy; } ;


 int FUNC_0 (struct isci_orom*) ;
 struct isci_orom* FUNC_1 (int) ;
 int FUNC_2 (struct isci_orom*,int ,int) ;
 int FUNC_3 (struct isci_orom*) ;
 int FUNC_4 (struct isci_orom*) ;

int FUNC_5(void)
{
 int VAR_0;
 struct isci_orom *VAR_1;

 VAR_1 = FUNC_1(sizeof(struct isci_orom));
 FUNC_2(VAR_1, 0, sizeof(struct isci_orom));

 FUNC_3(VAR_1);

 VAR_0 = FUNC_4(VAR_1);
 if (VAR_0 < 0) {
  FUNC_0(VAR_1);
  return VAR_0;
 }

 FUNC_0(VAR_1);
 return 0;
}
