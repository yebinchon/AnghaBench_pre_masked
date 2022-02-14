
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nents; int * sgl; } ;
struct TYPE_4__ {unsigned int length; TYPE_1__ table; } ;
struct scsi_cmnd {int sc_data_direction; TYPE_2__ sdb; } ;
struct isd200_info {int sg; struct scsi_cmnd srb; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 (int *,void*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct isd200_info *VAR_0,
 enum dma_data_direction VAR_1, void* VAR_2, unsigned VAR_3)
{
 struct scsi_cmnd *VAR_4 = &VAR_0->srb;

 if (VAR_2)
  FUNC_0(&VAR_0->sg, VAR_2, VAR_3);

 VAR_4->sc_data_direction = VAR_1;
 VAR_4->sdb.table.sgl = VAR_2 ? &VAR_0->sg : ((void*)0);
 VAR_4->sdb.length = VAR_3;
 VAR_4->sdb.table.nents = VAR_2 ? 1 : 0;
}
