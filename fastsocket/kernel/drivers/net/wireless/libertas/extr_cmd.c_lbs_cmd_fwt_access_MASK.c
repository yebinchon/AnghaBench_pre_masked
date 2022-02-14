
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct cmd_ds_fwt_access {void* action; } ;
struct TYPE_2__ {struct cmd_ds_fwt_access fwt; } ;
struct cmd_ds_command {scalar_t__ result; void* size; void* command; TYPE_1__ params; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cmd_ds_fwt_access*,void*,int) ;
 int FUNC_4 (struct cmd_ds_fwt_access*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct cmd_ds_command *VAR_3,
          u16 VAR_4, void *VAR_5)
{
 struct cmd_ds_fwt_access *VAR_6 = &VAR_3->params.fwt;
 FUNC_1(VAR_1, "action %d", VAR_4);

 VAR_3->command = FUNC_0(VAR_0);
 VAR_3->size = FUNC_0(sizeof(struct cmd_ds_fwt_access) + VAR_2);
 VAR_3->result = 0;

 if (VAR_5)
  FUNC_3(VAR_6, VAR_5, sizeof(*VAR_6));
 else
  FUNC_4(VAR_6, 0, sizeof(*VAR_6));

 VAR_6->action = FUNC_0(VAR_4);

 FUNC_2(VAR_1);
 return 0;
}
