
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u16 ;
struct lbs_private {scalar_t__ mesh_fw_ver; } ;
struct TYPE_2__ {scalar_t__ result; void* size; void* command; } ;
struct cmd_ds_mesh_config {void* action; void* type; TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lbs_private*,int,struct cmd_ds_mesh_config*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct lbs_private *VAR_6,
      struct cmd_ds_mesh_config *VAR_7,
      uint16_t VAR_8, uint16_t VAR_9)
{
 int VAR_10;
 u16 VAR_11 = VAR_1;

 FUNC_2(VAR_2);





 if (VAR_6->mesh_fw_ver == VAR_3)
  VAR_11 = VAR_0 |
     (VAR_5 << VAR_4);

 VAR_7->hdr.command = FUNC_0(VAR_11);
 VAR_7->hdr.size = FUNC_0(sizeof(struct cmd_ds_mesh_config));
 VAR_7->hdr.result = 0;

 VAR_7->type = FUNC_0(VAR_9);
 VAR_7->action = FUNC_0(VAR_8);

 VAR_10 = FUNC_1(VAR_6, VAR_11, VAR_7);

 FUNC_3(VAR_2);
 return VAR_10;
}
