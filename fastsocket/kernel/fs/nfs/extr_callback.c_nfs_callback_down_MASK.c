
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_callback_data {scalar_t__ users; int * task; int * rqst; int * serv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct nfs_callback_data* VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;

void FUNC_4(int VAR_2)
{
 struct nfs_callback_data *VAR_3 = &VAR_0[VAR_2];

 FUNC_1(&VAR_1);
 VAR_3->users--;
 if (VAR_3->users == 0 && VAR_3->task != ((void*)0)) {
  FUNC_0(VAR_3->task);
  FUNC_3(VAR_3->rqst);
  VAR_3->serv = ((void*)0);
  VAR_3->rqst = ((void*)0);
  VAR_3->task = ((void*)0);
 }
 FUNC_2(&VAR_1);
}
