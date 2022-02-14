
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fileglob {int fg_lock; int fg_cred; int * fg_vn_data; } ;


 int FUNC_0 (struct fileglob*,int,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct fileglob*) ;
 int VAR_2 ;

void
FUNC_7(struct fileglob *VAR_3)
{
 FUNC_2(-1, &VAR_2);

 if (VAR_3->fg_vn_data) {
  FUNC_3(VAR_3->fg_vn_data);
  VAR_3->fg_vn_data = ((void*)0);
 }

 if (FUNC_1(VAR_3->fg_cred)) {
  FUNC_4(&VAR_3->fg_cred);
 }
 FUNC_5(&VAR_3->fg_lock, VAR_1);




 FUNC_0(VAR_3, sizeof *VAR_3, VAR_0);
}
