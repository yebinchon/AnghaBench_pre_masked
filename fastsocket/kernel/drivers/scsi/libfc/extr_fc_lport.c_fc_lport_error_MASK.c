
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_lport {scalar_t__ retry_count; scalar_t__ max_retry_count; int e_d_tov; int retry_work; } ;
struct fc_frame {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fc_lport*,char*,int ,int ,scalar_t__) ;
 int FUNC_1 (struct fc_frame*) ;
 int FUNC_2 (struct fc_lport*) ;
 int FUNC_3 (struct fc_lport*) ;
 unsigned long FUNC_4 (int) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct fc_lport *VAR_1, struct fc_frame *VAR_2)
{
 unsigned long VAR_3 = 0;
 FUNC_0(VAR_1, "Error %ld in state %s, retries %d\n",
       FUNC_1(VAR_2), FUNC_3(VAR_1),
       VAR_1->retry_count);

 if (FUNC_1(VAR_2) == -VAR_0)
  return;






 if (VAR_1->retry_count < VAR_1->max_retry_count) {
  VAR_1->retry_count++;
  if (!VAR_2)
   VAR_3 = FUNC_4(500);
  else
   VAR_3 = FUNC_4(VAR_1->e_d_tov);

  FUNC_5(&VAR_1->retry_work, VAR_3);
 } else
  FUNC_2(VAR_1);
}
