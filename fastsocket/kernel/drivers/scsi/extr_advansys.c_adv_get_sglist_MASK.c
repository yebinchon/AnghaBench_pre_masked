
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct scatterlist {int dummy; } ;
struct asc_board {TYPE_3__* adv_sgblkp; } ;
struct TYPE_11__ {struct TYPE_11__* next_sgblkp; int sg_block; } ;
typedef TYPE_3__ adv_sgblk_t ;
struct TYPE_12__ {TYPE_3__* sgblkp; int scsi_req_q; } ;
typedef TYPE_4__ adv_req_t ;
struct TYPE_14__ {void* sg_real_addr; TYPE_5__* sg_list_ptr; } ;
struct TYPE_13__ {long sg_ptr; int sg_cnt; TYPE_1__* sg_list; } ;
struct TYPE_10__ {int host; } ;
struct TYPE_9__ {void* sg_count; void* sg_addr; } ;
typedef TYPE_5__ ADV_SG_BLOCK ;
typedef TYPE_6__ ADV_SCSI_REQ_Q ;
typedef int ADV_PADDR ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_6 (int ) ;
 struct scatterlist* FUNC_7 (struct scsi_cmnd*) ;
 int FUNC_8 (struct scatterlist*) ;
 int FUNC_9 (struct scatterlist*) ;
 int FUNC_10 (TYPE_5__*) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_11(struct asc_board *VAR_5, adv_req_t *VAR_6, struct scsi_cmnd *VAR_7,
        int VAR_8)
{
 adv_sgblk_t *VAR_9;
 ADV_SCSI_REQ_Q *VAR_10;
 struct scatterlist *VAR_11;
 int VAR_12;
 ADV_SG_BLOCK *VAR_13, *VAR_14;
 ADV_PADDR VAR_15;
 int VAR_16;

 VAR_10 = (ADV_SCSI_REQ_Q *)FUNC_0(&VAR_6->scsi_req_q);
 VAR_11 = FUNC_7(VAR_7);
 VAR_12 = VAR_8;
 VAR_14 = ((void*)0);
 VAR_6->sgblkp = ((void*)0);

 for (;;) {





  if ((VAR_9 = VAR_5->adv_sgblkp) == ((void*)0)) {
   FUNC_2(1, "no free adv_sgblk_t\n");
   FUNC_3(VAR_7->device->host, VAR_3);





   while ((VAR_9 = VAR_6->sgblkp) != ((void*)0)) {

    VAR_6->sgblkp = VAR_9->next_sgblkp;


    VAR_9->next_sgblkp = VAR_5->adv_sgblkp;
    VAR_5->adv_sgblkp = VAR_9;
   }
   return VAR_1;
  }


  VAR_5->adv_sgblkp = VAR_9->next_sgblkp;
  VAR_9->next_sgblkp = ((void*)0);





  VAR_13 = (ADV_SG_BLOCK *)FUNC_1(&VAR_9->sg_block);
  VAR_15 = FUNC_10(VAR_13);





  if (VAR_6->sgblkp == ((void*)0)) {

   VAR_6->sgblkp = VAR_9;





   VAR_10->sg_list_ptr = VAR_13;
   VAR_10->sg_real_addr = FUNC_6(VAR_15);
  } else {

   VAR_9->next_sgblkp = VAR_6->sgblkp;
   VAR_6->sgblkp = VAR_9;





   VAR_14->sg_ptr = FUNC_6(VAR_15);
  }

  for (VAR_16 = 0; VAR_16 < VAR_2; VAR_16++) {
   VAR_13->sg_list[VAR_16].sg_addr =
     FUNC_6(FUNC_8(VAR_11));
   VAR_13->sg_list[VAR_16].sg_count =
     FUNC_6(FUNC_9(VAR_11));
   FUNC_4(VAR_7->device->host, VAR_4,
          FUNC_5(FUNC_9(VAR_11), 512));

   if (--VAR_12 == 0) {
    VAR_13->sg_cnt = VAR_16 + 1;
    VAR_13->sg_ptr = 0L;
    return VAR_0;
   }
   VAR_11++;
  }
  VAR_13->sg_cnt = VAR_2;
  VAR_14 = VAR_13;
 }
}
