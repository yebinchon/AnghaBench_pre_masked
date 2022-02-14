
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int g_slid; int port_pd; } ;
struct TYPE_6__ {TYPE_2__ ib; } ;
struct TYPE_4__ {int device; } ;
struct mlx4_ib_ah {TYPE_3__ av; TYPE_1__ ibah; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;

__attribute__((used)) static inline bool FUNC_2(struct mlx4_ib_ah *VAR_1)
{
 u8 VAR_2 = FUNC_0(VAR_1->av.ib.port_pd) >> 24 & 3;

 if (FUNC_1(VAR_1->ibah.device, VAR_2) == VAR_0)
  return 1;

 return !!(VAR_1->av.ib.g_slid & 0x80);
}
