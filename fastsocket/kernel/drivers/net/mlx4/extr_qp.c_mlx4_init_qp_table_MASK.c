
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct mlx4_qp_table {int bitmap; int lock; } ;
struct TYPE_5__ {scalar_t__* reserved_qps_cnt; int num_qps; int* reserved_qps_base; int num_ports; scalar_t__* qp1_proxy; scalar_t__* qp1_tunnel; scalar_t__* qp0_proxy; scalar_t__* qp0_tunnel; } ;
struct TYPE_4__ {scalar_t__ base_sqpn; scalar_t__ base_proxy_sqpn; scalar_t__ base_tunnel_sqpn; } ;
struct mlx4_dev {TYPE_2__ caps; TYPE_1__ phys_caps; int qp_table_tree; } ;
struct TYPE_6__ {struct mlx4_qp_table qp_table; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 void* FUNC_2 (int,int,int ) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (struct mlx4_dev*,scalar_t__) ;
 int FUNC_5 (int *,int,int,scalar_t__,int) ;
 int FUNC_6 (struct mlx4_dev*) ;
 scalar_t__ FUNC_7 (struct mlx4_dev*) ;
 scalar_t__ FUNC_8 (struct mlx4_dev*) ;
 int FUNC_9 (struct mlx4_dev*) ;
 TYPE_3__* FUNC_10 (struct mlx4_dev*) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct mlx4_dev *VAR_7)
{
 struct mlx4_qp_table *VAR_8 = &FUNC_10(VAR_7)->qp_table;
 int VAR_9;
 int VAR_10 = 0;
 int VAR_11;

 FUNC_11(&VAR_8->lock);
 FUNC_1(&VAR_7->qp_table_tree, VAR_1);
 if (FUNC_8(VAR_7))
  return 0;
 VAR_7->phys_caps.base_sqpn =
  FUNC_0(VAR_7->caps.reserved_qps_cnt[VAR_6], 8);

 {
  int VAR_12[VAR_5];
  int VAR_13, VAR_14, VAR_15;
  int VAR_16 = VAR_7->caps.num_qps;

  for (VAR_13 = 1; VAR_13 < VAR_5; ++VAR_13)
   VAR_12[VAR_13] = VAR_13;

  for (VAR_13 = VAR_5; VAR_13 > 0; --VAR_13) {
   for (VAR_14 = 2; VAR_14 < VAR_13; ++VAR_14) {
    if (VAR_7->caps.reserved_qps_cnt[VAR_12[VAR_14]] >
        VAR_7->caps.reserved_qps_cnt[VAR_12[VAR_14 - 1]]) {
     VAR_15 = VAR_12[VAR_14];
     VAR_12[VAR_14] = VAR_12[VAR_14 - 1];
     VAR_12[VAR_14 - 1] = VAR_15;
    }
   }
  }

  for (VAR_13 = 1; VAR_13 < VAR_5; ++VAR_13) {
   VAR_16 -= VAR_7->caps.reserved_qps_cnt[VAR_12[VAR_13]];
   VAR_7->caps.reserved_qps_base[VAR_12[VAR_13]] = VAR_16;
   VAR_10 +=
    VAR_7->caps.reserved_qps_cnt[VAR_12[VAR_13]];
  }

 }
 VAR_9 = FUNC_5(&VAR_8->bitmap, VAR_7->caps.num_qps,
          (1 << 23) - 1, VAR_7->phys_caps.base_sqpn + 8 +
          16 * VAR_4 * !!FUNC_6(VAR_7),
          VAR_10);
 if (VAR_9)
  return VAR_9;

 if (FUNC_7(VAR_7)) {

  VAR_7->phys_caps.base_proxy_sqpn = VAR_7->phys_caps.base_sqpn + 8;
  VAR_7->phys_caps.base_tunnel_sqpn = VAR_7->phys_caps.base_sqpn + 8 + 8 * VAR_4;



  VAR_7->caps.qp0_tunnel = FUNC_2(VAR_7->caps.num_ports, sizeof (u32), VAR_2);
  VAR_7->caps.qp0_proxy = FUNC_2(VAR_7->caps.num_ports, sizeof (u32), VAR_2);
  VAR_7->caps.qp1_tunnel = FUNC_2(VAR_7->caps.num_ports, sizeof (u32), VAR_2);
  VAR_7->caps.qp1_proxy = FUNC_2(VAR_7->caps.num_ports, sizeof (u32), VAR_2);

  if (!VAR_7->caps.qp0_tunnel || !VAR_7->caps.qp0_proxy ||
      !VAR_7->caps.qp1_tunnel || !VAR_7->caps.qp1_proxy) {
   VAR_9 = -VAR_0;
   goto err_mem;
  }

  for (VAR_11 = 0; VAR_11 < VAR_7->caps.num_ports; VAR_11++) {
   VAR_7->caps.qp0_proxy[VAR_11] = VAR_7->phys_caps.base_proxy_sqpn +
    8 * FUNC_9(VAR_7) + VAR_11;
   VAR_7->caps.qp0_tunnel[VAR_11] = VAR_7->caps.qp0_proxy[VAR_11] + 8 * VAR_4;
   VAR_7->caps.qp1_proxy[VAR_11] = VAR_7->phys_caps.base_proxy_sqpn +
    8 * FUNC_9(VAR_7) + VAR_3 + VAR_11;
   VAR_7->caps.qp1_tunnel[VAR_11] = VAR_7->caps.qp1_proxy[VAR_11] + 8 * VAR_4;
  }
 }


 VAR_9 = FUNC_4(VAR_7, VAR_7->phys_caps.base_sqpn);
 if (VAR_9)
  goto err_mem;
 return 0;

err_mem:
 FUNC_3(VAR_7->caps.qp0_tunnel);
 FUNC_3(VAR_7->caps.qp0_proxy);
 FUNC_3(VAR_7->caps.qp1_tunnel);
 FUNC_3(VAR_7->caps.qp1_proxy);
 VAR_7->caps.qp0_tunnel = VAR_7->caps.qp0_proxy =
  VAR_7->caps.qp1_tunnel = VAR_7->caps.qp1_proxy = ((void*)0);
 return VAR_9;
}
