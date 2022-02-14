
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct fc_seq {int dummy; } ;
struct fc_lport {scalar_t__ state; int lp_mutex; } ;
struct fc_frame {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct fc_frame* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct fc_lport*,char*,int ) ;
 scalar_t__ FUNC_2 (struct fc_frame*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct fc_frame*) ;
 int FUNC_4 (struct fc_frame*) ;
 scalar_t__ FUNC_5 (struct fc_frame*) ;
 int FUNC_6 (struct fc_lport*) ;
 int FUNC_7 (struct fc_lport*,struct fc_frame*) ;
 int FUNC_8 (struct fc_lport*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct fc_seq *VAR_3, struct fc_frame *VAR_4,
         void *VAR_5)
{
 struct fc_lport *VAR_6 = VAR_5;
 u8 VAR_7;

 FUNC_1(VAR_6, "Received a SCR %s\n", FUNC_3(VAR_4));

 if (VAR_4 == FUNC_0(-VAR_1))
  return;

 FUNC_9(&VAR_6->lp_mutex);

 if (VAR_6->state != VAR_2) {
  FUNC_1(VAR_6, "Received a SCR response, but in state "
        "%s\n", FUNC_8(VAR_6));
  if (FUNC_2(VAR_4))
   goto err;
  goto out;
 }

 if (FUNC_2(VAR_4)) {
  FUNC_7(VAR_6, VAR_4);
  goto err;
 }

 VAR_7 = FUNC_5(VAR_4);
 if (VAR_7 == VAR_0)
  FUNC_6(VAR_6);
 else
  FUNC_7(VAR_6, VAR_4);

out:
 FUNC_4(VAR_4);
err:
 FUNC_10(&VAR_6->lp_mutex);
}
