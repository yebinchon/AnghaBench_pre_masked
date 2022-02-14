
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct lbs_private {int dummy; } ;
struct TYPE_2__ {scalar_t__ result; void* size; void* command; } ;
struct cmd_ds_mesh_access {void* action; TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lbs_private*,int,struct cmd_ds_mesh_access*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct lbs_private *VAR_2, uint16_t VAR_3,
      struct cmd_ds_mesh_access *VAR_4)
{
 int VAR_5;

 FUNC_2(VAR_1, "action %d", VAR_3);

 VAR_4->hdr.command = FUNC_0(VAR_0);
 VAR_4->hdr.size = FUNC_0(sizeof(*VAR_4));
 VAR_4->hdr.result = 0;

 VAR_4->action = FUNC_0(VAR_3);

 VAR_5 = FUNC_1(VAR_2, VAR_0, VAR_4);

 FUNC_3(VAR_1);
 return VAR_5;
}
