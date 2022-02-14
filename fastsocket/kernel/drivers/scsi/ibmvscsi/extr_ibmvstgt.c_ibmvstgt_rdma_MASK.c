
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vio_port {int riobn; int liobn; } ;
struct srp_target {int dummy; } ;
struct srp_direct_buf {unsigned int len; scalar_t__ va; } ;
struct TYPE_2__ {scalar_t__ ptr; } ;
struct scsi_cmnd {TYPE_1__ SCp; } ;
struct scatterlist {int dummy; } ;
struct iu_entry {struct srp_target* target; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int FUNC_0 (char*,...) ;
 long FUNC_1 (int,int ,scalar_t__,int ,scalar_t__) ;
 void* FUNC_2 (int,unsigned int) ;
 scalar_t__ FUNC_3 (struct scatterlist*) ;
 int FUNC_4 (struct scatterlist*) ;
 struct vio_port* FUNC_5 (struct srp_target*) ;

__attribute__((used)) static int FUNC_6(struct scsi_cmnd *VAR_3, struct scatterlist *VAR_4, int VAR_5,
    struct srp_direct_buf *VAR_6, int VAR_7,
    enum dma_data_direction VAR_8, unsigned int VAR_9)
{
 struct iu_entry *VAR_10 = (struct iu_entry *) VAR_3->SCp.ptr;
 struct srp_target *VAR_11 = VAR_10->target;
 struct vio_port *VAR_12 = FUNC_5(VAR_11);
 dma_addr_t VAR_13;
 long VAR_14;
 unsigned int VAR_15 = 0;
 int VAR_16, VAR_17, VAR_18;

 VAR_17 = VAR_18 = 0;
 VAR_13 = FUNC_3(VAR_4 + VAR_17);

 for (VAR_16 = 0; VAR_16 < VAR_7 && VAR_9; VAR_16++) {
  unsigned int VAR_19, VAR_20;

  VAR_20 = FUNC_2(VAR_9, VAR_6[VAR_16].len);
  for (VAR_19 = 0; VAR_20;) {
   int VAR_21 = FUNC_2(FUNC_4(VAR_4 + VAR_17) - VAR_18, VAR_20);

   if (VAR_8 == VAR_0)
    VAR_14 = FUNC_1(VAR_21,
        VAR_12->riobn,
        VAR_6[VAR_16].va + VAR_19,
        VAR_12->liobn,
        VAR_13 + VAR_18);
   else
    VAR_14 = FUNC_1(VAR_21,
        VAR_12->liobn,
        VAR_13 + VAR_18,
        VAR_12->riobn,
        VAR_6[VAR_16].va + VAR_19);

   if (VAR_14 != VAR_2) {
    FUNC_0("rdma error %d %d %ld\n", VAR_8, VAR_21, VAR_14);
    return -VAR_1;
   }

   VAR_20 -= VAR_21;
   VAR_19 += VAR_21;
   VAR_18 += VAR_21;
   VAR_15 += VAR_21;

   if (VAR_18 == FUNC_4(VAR_4 + VAR_17)) {
    VAR_17++;
    VAR_18 = 0;
    VAR_13 = FUNC_3(VAR_4 + VAR_17);

    if (VAR_17 > VAR_5) {
     FUNC_0("out of sg %p %d %d\n",
      VAR_10, VAR_17, VAR_5);
     return -VAR_1;
    }
   }
  };

  VAR_9 -= VAR_20;
 }
 return 0;
}
