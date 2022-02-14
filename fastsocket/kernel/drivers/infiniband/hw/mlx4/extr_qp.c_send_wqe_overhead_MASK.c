
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx4_wqe_raddr_seg {int dummy; } ;
struct mlx4_wqe_inline_seg {int dummy; } ;
struct mlx4_wqe_datagram_seg {int dummy; } ;
struct mlx4_wqe_data_seg {int dummy; } ;
struct mlx4_wqe_ctrl_seg {int dummy; } ;
struct mlx4_wqe_atomic_seg {int dummy; } ;
typedef enum mlx4_ib_qp_type { ____Placeholder_mlx4_ib_qp_type } mlx4_ib_qp_type ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(enum mlx4_ib_qp_type VAR_4, u32 VAR_5)
{






 switch (VAR_4) {
 case 128:
  return sizeof (struct mlx4_wqe_ctrl_seg) +
   sizeof (struct mlx4_wqe_datagram_seg) +
   ((VAR_5 & VAR_1) ? VAR_0 : 0);
 case 134:
 case 135:
 case 136:
  return sizeof (struct mlx4_wqe_ctrl_seg) +
   sizeof (struct mlx4_wqe_datagram_seg) + 64;
 case 130:
 case 131:
  return sizeof (struct mlx4_wqe_ctrl_seg) +
   sizeof (struct mlx4_wqe_datagram_seg);

 case 129:
  return sizeof (struct mlx4_wqe_ctrl_seg) +
   sizeof (struct mlx4_wqe_raddr_seg);
 case 133:
  return sizeof (struct mlx4_wqe_ctrl_seg) +
   sizeof (struct mlx4_wqe_atomic_seg) +
   sizeof (struct mlx4_wqe_raddr_seg);
 case 132:
 case 137:
  return sizeof (struct mlx4_wqe_ctrl_seg) +
   FUNC_0(VAR_2 +
         FUNC_1(VAR_2,
        VAR_3) *
         sizeof (struct mlx4_wqe_inline_seg),
         sizeof (struct mlx4_wqe_data_seg)) +
   FUNC_0(4 +
         sizeof (struct mlx4_wqe_inline_seg),
         sizeof (struct mlx4_wqe_data_seg));
 default:
  return sizeof (struct mlx4_wqe_ctrl_seg);
 }
}
