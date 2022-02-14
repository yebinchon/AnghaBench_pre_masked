
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_orom {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 size_t FUNC_2 (struct isci_orom*,int,int,int *) ;
 int FUNC_3 (char*) ;

int FUNC_4(struct isci_orom *VAR_2)
{
 FILE *VAR_3;
 int VAR_4;
 size_t VAR_5;

 VAR_3 = FUNC_1(VAR_1, "w+");
 if (!VAR_3) {
  FUNC_3("Open file for write failed");
  FUNC_0(VAR_3);
  return -VAR_0;
 }

 VAR_5 = FUNC_2(VAR_2, sizeof(struct isci_orom), 1, VAR_3);
 if (VAR_5 != 1) {
  FUNC_3("Write data failed");
  FUNC_0(VAR_3);
  return -VAR_0;
 }

 FUNC_0(VAR_3);

 return 0;
}
