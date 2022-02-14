
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_scsi_target_state {struct scatterlist* sg; } ;
struct virtio_scsi_cmd {int resp; int req; struct scsi_cmnd* sc; } ;
struct scsi_cmnd {scalar_t__ sc_data_direction; } ;
struct scatterlist {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (struct scatterlist*,int *,size_t) ;
 int FUNC_3 (struct scatterlist*,unsigned int*,int ) ;

__attribute__((used)) static void FUNC_4(struct virtio_scsi_target_state *VAR_2,
        struct virtio_scsi_cmd *VAR_3,
        unsigned *VAR_4, unsigned *VAR_5,
        size_t VAR_6, size_t VAR_7)
{
 struct scsi_cmnd *VAR_8 = VAR_3->sc;
 struct scatterlist *VAR_9 = VAR_2->sg;
 unsigned int VAR_10 = 0;


 FUNC_2(&VAR_9[VAR_10++], &VAR_3->req, VAR_6);


 if (VAR_8 && VAR_8->sc_data_direction != VAR_0)
  FUNC_3(VAR_9, &VAR_10, FUNC_1(VAR_8));

 *VAR_4 = VAR_10;


 FUNC_2(&VAR_9[VAR_10++], &VAR_3->resp, VAR_7);


 if (VAR_8 && VAR_8->sc_data_direction != VAR_1)
  FUNC_3(VAR_9, &VAR_10, FUNC_0(VAR_8));

 *VAR_5 = VAR_10 - *VAR_4;
}
