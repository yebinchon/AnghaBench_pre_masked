
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_fsf_req {scalar_t__ fsf_command; int status; int completion; scalar_t__ erp_action; int (* handler ) (struct zfcp_fsf_req*) ;int timer; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct zfcp_fsf_req*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (struct zfcp_fsf_req*) ;
 int FUNC_7 (struct zfcp_fsf_req*) ;
 int FUNC_8 (struct zfcp_fsf_req*) ;
 int FUNC_9 (struct zfcp_fsf_req*) ;

__attribute__((used)) static void FUNC_10(struct zfcp_fsf_req *VAR_2)
{
 if (FUNC_4(VAR_2->fsf_command == VAR_0)) {
  FUNC_9(VAR_2);
  return;
 }

 FUNC_1(&VAR_2->timer);
 FUNC_7(VAR_2);
 FUNC_6(VAR_2);
 VAR_2->handler(VAR_2);

 if (VAR_2->erp_action)
  FUNC_5(VAR_2->erp_action, 0);

 if (FUNC_2(VAR_2->status & VAR_1))
  FUNC_8(VAR_2);
 else
  FUNC_0(&VAR_2->completion);
}
