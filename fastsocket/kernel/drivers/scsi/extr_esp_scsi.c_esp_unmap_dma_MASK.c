
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {int sc_data_direction; } ;
struct TYPE_4__ {int num_sg; } ;
struct esp_cmd_priv {TYPE_2__ u; } ;
struct esp {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* unmap_sg ) (struct esp*,int ,int ,int) ;} ;


 int VAR_0 ;
 struct esp_cmd_priv* FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (struct esp*,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct esp *VAR_1, struct scsi_cmnd *VAR_2)
{
 struct esp_cmd_priv *VAR_3 = FUNC_0(VAR_2);
 int VAR_4 = VAR_2->sc_data_direction;

 if (VAR_4 == VAR_0)
  return;

 VAR_1->ops->unmap_sg(VAR_1, FUNC_1(VAR_2), VAR_3->u.num_sg, VAR_4);
}
