
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct srp_direct_buf {int len; } ;
struct TYPE_3__ {scalar_t__ ptr; } ;
struct scsi_cmnd {TYPE_1__ SCp; } ;
struct scatterlist {int dummy; } ;
struct iu_entry {TYPE_2__* target; } ;
typedef int (* srp_rdma_t ) (struct scsi_cmnd*,struct scatterlist*,int,struct srp_direct_buf*,int,int,int) ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct scatterlist*,int ,int ) ;
 int FUNC_1 (int ,struct scatterlist*,int,int ) ;
 int FUNC_2 (char*,struct iu_entry*,int ,int,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*,struct iu_entry*,int ) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (struct scsi_cmnd*) ;
 struct scatterlist* FUNC_7 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_8(struct scsi_cmnd *VAR_1, struct srp_direct_buf *VAR_2,
      enum dma_data_direction VAR_3, srp_rdma_t VAR_4,
      int VAR_5, int VAR_6)
{
 struct iu_entry *VAR_7 = ((void*)0);
 struct scatterlist *VAR_8 = ((void*)0);
 int VAR_9, VAR_10 = 0, VAR_11;

 if (VAR_5) {
  VAR_7 = (struct iu_entry *) VAR_1->SCp.ptr;
  VAR_8 = FUNC_7(VAR_1);

  FUNC_2("%p %u %u %d\n", VAR_7, FUNC_5(VAR_1),
   VAR_2->len, FUNC_6(VAR_1));

  VAR_10 = FUNC_0(VAR_7->target->dev, VAR_8, FUNC_6(VAR_1),
     VAR_0);
  if (!VAR_10) {
   FUNC_4("fail to map %p %d\n", VAR_7, FUNC_6(VAR_1));
   return 0;
  }
  VAR_11 = FUNC_3(FUNC_5(VAR_1), VAR_2->len);
 } else
  VAR_11 = VAR_2->len;

 VAR_9 = VAR_4(VAR_1, VAR_8, VAR_10, VAR_2, 1, VAR_3, VAR_11);

 if (VAR_5)
  FUNC_1(VAR_7->target->dev, VAR_8, VAR_10, VAR_0);

 return VAR_9;
}
