
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsm_handle {int sm_count; int sm_addrbuf; int sm_name; scalar_t__ sm_monitored; } ;
struct nlm_reboot {int mon; int len; int priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int ,...) ;
 int VAR_0 ;
 struct nsm_handle* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;

struct nsm_handle *FUNC_7(const struct nlm_reboot *VAR_1)
{
 struct nsm_handle *VAR_2;

 FUNC_4(&VAR_0);

 VAR_2 = FUNC_3(&VAR_1->priv);
 if (FUNC_6(VAR_2 == ((void*)0))) {
  FUNC_5(&VAR_0);
  FUNC_2("lockd: never saw rebooted peer '%.*s' before\n",
    VAR_1->len, VAR_1->mon);
  return VAR_2;
 }

 FUNC_0(&VAR_2->sm_count);
 FUNC_5(&VAR_0);





 VAR_2->sm_monitored = 0;

 FUNC_2("lockd: host %s (%s) rebooted, cnt %d\n",
   VAR_2->sm_name, VAR_2->sm_addrbuf,
   FUNC_1(&VAR_2->sm_count));
 return VAR_2;
}
