
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlx4_wqe_inline_seg {int dummy; } ;
struct mlx4_wqe_data_seg {int dummy; } ;
struct TYPE_6__ {unsigned int wqe_shift; int wqe_cnt; int max_gs; int offset; int max_post; } ;
struct TYPE_5__ {int wqe_cnt; int wqe_shift; int offset; } ;
struct mlx4_ib_qp {int sq_max_wqes_per_wr; int sq_spare_wqes; int buf_size; TYPE_2__ sq; TYPE_1__ rq; int flags; scalar_t__ sq_signal_bits; } ;
struct mlx4_ib_dev {TYPE_4__* dev; } ;
struct ib_qp_cap {int max_send_wr; int max_send_sge; int max_inline_data; } ;
typedef enum mlx4_ib_qp_type { ____Placeholder_mlx4_ib_qp_type } mlx4_ib_qp_type ;
struct TYPE_7__ {int max_wqes; int max_sq_sg; int max_rq_sg; int max_sq_desc_sz; scalar_t__ fw_ver; } ;
struct TYPE_8__ {TYPE_3__ caps; } ;


 int VAR_0 ;
 int FUNC_0 (int,unsigned int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct mlx4_ib_dev *VAR_10, struct ib_qp_cap *VAR_11,
         enum mlx4_ib_qp_type VAR_12, struct mlx4_ib_qp *VAR_13)
{
 int VAR_14;


 if (VAR_11->max_send_wr > (VAR_10->dev->caps.max_wqes - VAR_9) ||
     VAR_11->max_send_sge > FUNC_3(VAR_10->dev->caps.max_sq_sg, VAR_10->dev->caps.max_rq_sg) ||
     VAR_11->max_inline_data + FUNC_5(VAR_12, VAR_13->flags) +
     sizeof (struct mlx4_wqe_inline_seg) > VAR_10->dev->caps.max_sq_desc_sz)
  return -VAR_1;





 if ((VAR_12 == VAR_7 || VAR_12 == VAR_3 ||
      VAR_12 & (VAR_6 | VAR_8)) &&
     VAR_11->max_send_sge + 2 > VAR_10->dev->caps.max_sq_sg)
  return -VAR_1;

 VAR_14 = FUNC_2(VAR_11->max_send_sge * sizeof (struct mlx4_wqe_data_seg),
  VAR_11->max_inline_data + sizeof (struct mlx4_wqe_inline_seg)) +
  FUNC_5(VAR_12, VAR_13->flags);

 if (VAR_14 > VAR_10->dev->caps.max_sq_desc_sz)
  return -VAR_1;
 if (VAR_10->dev->caps.fw_ver >= VAR_2 &&
     VAR_13->sq_signal_bits && VAR_0 == 64 &&
     VAR_12 != VAR_7 && VAR_12 != VAR_3 &&
     !(VAR_12 & (VAR_6 | VAR_5 |
        VAR_4 | VAR_8)))
  VAR_13->sq.wqe_shift = FUNC_1(64);
 else
  VAR_13->sq.wqe_shift = FUNC_1(FUNC_4(VAR_14));

 for (;;) {
  VAR_13->sq_max_wqes_per_wr = FUNC_0(VAR_14, 1U << VAR_13->sq.wqe_shift);





  VAR_13->sq_spare_wqes = (2048 >> VAR_13->sq.wqe_shift) + VAR_13->sq_max_wqes_per_wr;
  VAR_13->sq.wqe_cnt = FUNC_4(VAR_11->max_send_wr *
          VAR_13->sq_max_wqes_per_wr +
          VAR_13->sq_spare_wqes);

  if (VAR_13->sq.wqe_cnt <= VAR_10->dev->caps.max_wqes)
   break;

  if (VAR_13->sq_max_wqes_per_wr <= 1)
   return -VAR_1;

  ++VAR_13->sq.wqe_shift;
 }

 VAR_13->sq.max_gs = (FUNC_3(VAR_10->dev->caps.max_sq_desc_sz,
        (VAR_13->sq_max_wqes_per_wr << VAR_13->sq.wqe_shift)) -
    FUNC_5(VAR_12, VAR_13->flags)) /
  sizeof (struct mlx4_wqe_data_seg);

 VAR_13->buf_size = (VAR_13->rq.wqe_cnt << VAR_13->rq.wqe_shift) +
  (VAR_13->sq.wqe_cnt << VAR_13->sq.wqe_shift);
 if (VAR_13->rq.wqe_shift > VAR_13->sq.wqe_shift) {
  VAR_13->rq.offset = 0;
  VAR_13->sq.offset = VAR_13->rq.wqe_cnt << VAR_13->rq.wqe_shift;
 } else {
  VAR_13->rq.offset = VAR_13->sq.wqe_cnt << VAR_13->sq.wqe_shift;
  VAR_13->sq.offset = 0;
 }

 VAR_11->max_send_wr = VAR_13->sq.max_post =
  (VAR_13->sq.wqe_cnt - VAR_13->sq_spare_wqes) / VAR_13->sq_max_wqes_per_wr;
 VAR_11->max_send_sge = FUNC_3(VAR_13->sq.max_gs,
    FUNC_3(VAR_10->dev->caps.max_sq_sg,
        VAR_10->dev->caps.max_rq_sg));

 VAR_11->max_inline_data = 0;

 return 0;
}
