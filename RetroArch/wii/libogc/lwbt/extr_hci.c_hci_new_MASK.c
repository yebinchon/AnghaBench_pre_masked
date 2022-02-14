
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_link {int dummy; } ;


 struct hci_link* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct hci_link*,int ,int) ;

struct hci_link* FUNC_2(void)
{
 struct hci_link *VAR_1;

 VAR_1 = FUNC_0(&VAR_0);
 if(VAR_1==((void*)0)) return ((void*)0);

 FUNC_1(VAR_1,0,sizeof(struct hci_link));
 return VAR_1;
}
