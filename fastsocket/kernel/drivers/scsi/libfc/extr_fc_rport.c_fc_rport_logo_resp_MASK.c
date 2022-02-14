
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fc_seq {int dummy; } ;
struct fc_lport {int dummy; } ;
struct fc_frame {int dummy; } ;
struct TYPE_2__ {int did; } ;


 int FUNC_0 (struct fc_lport*,int ,char*,int ) ;
 scalar_t__ FUNC_1 (struct fc_frame*) ;
 int FUNC_2 (struct fc_frame*) ;
 int FUNC_3 (struct fc_frame*) ;
 TYPE_1__* FUNC_4 (struct fc_seq*) ;

__attribute__((used)) static void FUNC_5(struct fc_seq *VAR_0, struct fc_frame *VAR_1,
          void *VAR_2)
{
 struct fc_lport *VAR_3 = VAR_2;

 FUNC_0(VAR_3, FUNC_4(VAR_0)->did,
   "Received a LOGO %s\n", FUNC_2(VAR_1));
 if (FUNC_1(VAR_1))
  return;
 FUNC_3(VAR_1);
}
