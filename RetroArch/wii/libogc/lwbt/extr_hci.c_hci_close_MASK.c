
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_link {int * p; } ;
typedef int err_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct hci_link*) ;
 int FUNC_1 (int *,struct hci_link*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

err_t FUNC_3(struct hci_link *VAR_3)
{
 if(VAR_3->p != ((void*)0)) {
  FUNC_2(VAR_3->p);
 }

 FUNC_0(&(VAR_1), VAR_3);
 FUNC_1(&VAR_2, VAR_3);
 VAR_3 = ((void*)0);
 return VAR_0;
}
