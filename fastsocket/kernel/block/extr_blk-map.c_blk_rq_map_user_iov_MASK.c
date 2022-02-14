
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_iovec {int iov_len; scalar_t__ iov_base; } ;
struct rq_map_data {int dummy; } ;
struct request_queue {unsigned int dma_pad_mask; } ;
struct request {int * buffer; int cmd_flags; } ;
struct bio {unsigned int bi_size; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct bio*) ;
 struct bio* FUNC_3 (struct request_queue*,struct rq_map_data*,struct sg_iovec*,int,int,int ) ;
 int FUNC_4 (struct bio*,int ) ;
 int FUNC_5 (struct bio*,int ) ;
 int FUNC_6 (struct bio*) ;
 struct bio* FUNC_7 (struct request_queue*,int *,struct sg_iovec*,int,int,int ) ;
 int FUNC_8 (struct request_queue*,struct bio**) ;
 int FUNC_9 (struct request_queue*,struct request*,struct bio*) ;
 unsigned long FUNC_10 (struct request_queue*) ;
 scalar_t__ FUNC_11 (struct request*) ;

int FUNC_12(struct request_queue *VAR_4, struct request *VAR_5,
   struct rq_map_data *VAR_6, struct sg_iovec *VAR_7,
   int VAR_8, unsigned int VAR_9, gfp_t VAR_10)
{
 struct bio *VAR_11;
 int VAR_12, VAR_13 = FUNC_11(VAR_5) == VAR_2;
 int VAR_14 = 0;

 if (!VAR_7 || VAR_8 <= 0)
  return -VAR_1;

 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
  unsigned long VAR_15 = (unsigned long)VAR_7[VAR_12].iov_base;

  if (!VAR_7[VAR_12].iov_len)
   return -VAR_1;

  if (VAR_15 & FUNC_10(VAR_4)) {
   VAR_14 = 1;
   break;
  }
 }

 if (VAR_14 || (VAR_4->dma_pad_mask & VAR_9) || VAR_6)
  VAR_11 = FUNC_3(VAR_4, VAR_6, VAR_7, VAR_8, VAR_13,
     VAR_10);
 else
  VAR_11 = FUNC_7(VAR_4, ((void*)0), VAR_7, VAR_8, VAR_13, VAR_10);

 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 if (VAR_11->bi_size != VAR_9) {





  FUNC_6(VAR_11);
  FUNC_4(VAR_11, 0);
  FUNC_2(VAR_11);
  return -VAR_1;
 }

 if (!FUNC_5(VAR_11, VAR_0))
  VAR_5->cmd_flags |= VAR_3;

 FUNC_8(VAR_4, &VAR_11);
 FUNC_6(VAR_11);
 FUNC_9(VAR_4, VAR_5, VAR_11);
 VAR_5->buffer = ((void*)0);
 return 0;
}
