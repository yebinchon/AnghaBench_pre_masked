
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsm_handle {int sm_addrbuf; int sm_name; int sm_link; int sm_count; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (struct nsm_handle*) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;

void FUNC_5(struct nsm_handle *VAR_1)
{
 if (FUNC_0(&VAR_1->sm_count, &VAR_0)) {
  FUNC_3(&VAR_1->sm_link);
  FUNC_4(&VAR_0);
  FUNC_1("lockd: destroyed nsm_handle for %s (%s)\n",
    VAR_1->sm_name, VAR_1->sm_addrbuf);
  FUNC_2(VAR_1);
 }
}
