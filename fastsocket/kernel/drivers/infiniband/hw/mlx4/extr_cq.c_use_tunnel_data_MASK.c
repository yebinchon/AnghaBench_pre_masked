
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {int device; } ;
struct mlx4_ib_qp {TYPE_2__* sqp_proxy_rcv; TYPE_1__ ibqp; } ;
struct TYPE_6__ {int g_ml_path; int flags_src_qp; int sl_vid; int slid_mac_47_32; int pkey_index; } ;
struct mlx4_ib_proxy_sqp_hdr {TYPE_3__ tun; } ;
struct mlx4_ib_cq {int dummy; } ;
struct mlx4_cqe {int dummy; } ;
struct ib_wc {int pkey_index; int slid; int src_qp; scalar_t__ dlid_path_bits; int wc_flags; scalar_t__ sl; } ;
struct TYPE_5__ {scalar_t__ addr; int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct mlx4_ib_qp *VAR_2, struct mlx4_ib_cq *VAR_3, struct ib_wc *VAR_4,
      unsigned VAR_5, struct mlx4_cqe *VAR_6)
{
 struct mlx4_ib_proxy_sqp_hdr *VAR_7;

 FUNC_2(VAR_2->ibqp.device,
       VAR_2->sqp_proxy_rcv[VAR_5].map,
       sizeof (struct mlx4_ib_proxy_sqp_hdr),
       VAR_0);
 VAR_7 = (struct mlx4_ib_proxy_sqp_hdr *) (VAR_2->sqp_proxy_rcv[VAR_5].addr);
 VAR_4->pkey_index = FUNC_0(VAR_7->tun.pkey_index);
 VAR_4->slid = FUNC_0(VAR_7->tun.slid_mac_47_32);
 VAR_4->sl = (u8) (FUNC_0(VAR_7->tun.sl_vid) >> 12);
 VAR_4->src_qp = FUNC_1(VAR_7->tun.flags_src_qp) & 0xFFFFFF;
 VAR_4->wc_flags |= (VAR_7->tun.g_ml_path & 0x80) ? (VAR_1) : 0;
 VAR_4->dlid_path_bits = 0;

 return 0;
}
