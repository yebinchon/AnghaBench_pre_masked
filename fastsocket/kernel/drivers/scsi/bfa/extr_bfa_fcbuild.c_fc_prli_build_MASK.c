
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct fchs_s {int dummy; } ;
struct TYPE_3__ {int initiator; int retry; int rec_support; int confirm; scalar_t__ task_retry_id; } ;
struct TYPE_4__ {TYPE_1__ servparams; } ;
struct fc_prli_s {TYPE_2__ parampage; int command; } ;


 int VAR_0 ;
 int FUNC_0 (struct fchs_s*,int ,int ,int) ;
 int FUNC_1 (struct fc_prli_s*,int *,int) ;
 int VAR_1 ;

u16
FUNC_2(struct fchs_s *VAR_2, void *VAR_3, u32 VAR_4, u32 VAR_5,
       u16 VAR_6)
{
 struct fc_prli_s *VAR_7 = (struct fc_prli_s *) (VAR_3);

 FUNC_0(VAR_2, VAR_4, VAR_5, VAR_6);
 FUNC_1(VAR_7, &VAR_1, sizeof(struct fc_prli_s));

 VAR_7->command = VAR_0;
 VAR_7->parampage.servparams.initiator = 1;
 VAR_7->parampage.servparams.retry = 1;
 VAR_7->parampage.servparams.rec_support = 1;
 VAR_7->parampage.servparams.task_retry_id = 0;
 VAR_7->parampage.servparams.confirm = 1;

 return sizeof(struct fc_prli_s);
}
