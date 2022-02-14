
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {int sc_data_direction; } ;
struct scatterlist {int dummy; } ;
struct TYPE_4__ {int num_sg; } ;
struct esp_cmd_priv {int tot_residue; TYPE_2__ u; struct scatterlist* cur_sg; scalar_t__ cur_residue; } ;
struct esp {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* map_sg ) (struct esp*,struct scatterlist*,int ,int) ;} ;


 int VAR_0 ;
 struct esp_cmd_priv* FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (struct scsi_cmnd*) ;
 struct scatterlist* FUNC_2 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_3 (struct scatterlist*) ;
 int FUNC_4 (struct esp*,struct scatterlist*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct esp *VAR_1, struct scsi_cmnd *VAR_2)
{
 struct esp_cmd_priv *VAR_3 = FUNC_0(VAR_2);
 struct scatterlist *VAR_4 = FUNC_2(VAR_2);
 int VAR_5 = VAR_2->sc_data_direction;
 int VAR_6, VAR_7;

 if (VAR_5 == VAR_0)
  return;

 VAR_3->u.num_sg = VAR_1->ops->map_sg(VAR_1, VAR_4, FUNC_1(VAR_2), VAR_5);
 VAR_3->cur_residue = FUNC_3(VAR_4);
 VAR_3->cur_sg = VAR_4;

 VAR_6 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_3->u.num_sg; VAR_7++)
  VAR_6 += FUNC_3(&VAR_4[VAR_7]);
 VAR_3->tot_residue = VAR_6;
}
