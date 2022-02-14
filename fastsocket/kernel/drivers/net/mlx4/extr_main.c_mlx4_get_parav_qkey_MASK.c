
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ base_tunnel_sqpn; scalar_t__ base_proxy_sqpn; } ;
struct mlx4_dev {TYPE_1__ phys_caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_0(struct mlx4_dev *VAR_3, u32 VAR_4, u32 *VAR_5)
{
 u32 VAR_6 = VAR_2;

 if (VAR_4 >= VAR_3->phys_caps.base_tunnel_sqpn + 8 * VAR_1 ||
     VAR_4 < VAR_3->phys_caps.base_proxy_sqpn)
  return -VAR_0;

 if (VAR_4 >= VAR_3->phys_caps.base_tunnel_sqpn)

  VAR_6 += VAR_4 - VAR_3->phys_caps.base_tunnel_sqpn;
 else
  VAR_6 += VAR_4 - VAR_3->phys_caps.base_proxy_sqpn;
 *VAR_5 = VAR_6;
 return 0;
}
