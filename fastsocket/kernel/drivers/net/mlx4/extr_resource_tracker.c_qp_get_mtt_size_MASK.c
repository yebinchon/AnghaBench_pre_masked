
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_qp_context {int log_page_size; int sq_size_stride; int rq_size_stride; int params2; int local_qpn; int flags; int srqn; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct mlx4_qp_context *VAR_0)
{
 int VAR_1 = (VAR_0->log_page_size & 0x3f) + 12;
 int VAR_2 = (VAR_0->sq_size_stride >> 3) & 0xf;
 int VAR_3 = VAR_0->sq_size_stride & 7;
 int VAR_4 = (VAR_0->rq_size_stride >> 3) & 0xf;
 int VAR_5 = VAR_0->rq_size_stride & 7;
 int VAR_6 = (FUNC_0(VAR_0->srqn) >> 24) & 1;
 int VAR_7 = (FUNC_0(VAR_0->flags) >> 13) & 1;
 int VAR_8 = (FUNC_0(VAR_0->local_qpn) >> 23) & 1;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13 = (FUNC_0(VAR_0->params2) >> 6) & 0x3f;

 VAR_9 = 1 << (VAR_2 + VAR_3 + 4);
 VAR_10 = (VAR_6|VAR_7|VAR_8) ? 0 : (1 << (VAR_4 + VAR_5 + 4));
 VAR_12 = VAR_9 + VAR_10;
 VAR_11 =
  FUNC_1((VAR_12 + (VAR_13 << 6)) >>
       VAR_1);

 return VAR_11;
}
