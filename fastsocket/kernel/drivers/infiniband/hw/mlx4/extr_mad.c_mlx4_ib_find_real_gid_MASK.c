
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {TYPE_3__* demux; } ;
struct mlx4_ib_dev {TYPE_4__ sriov; TYPE_2__* dev; } ;
struct ib_device {int dummy; } ;
typedef scalar_t__ __be64 ;
struct TYPE_7__ {scalar_t__* guid_cache; } ;
struct TYPE_5__ {int sqp_demux; } ;
struct TYPE_6__ {TYPE_1__ caps; } ;


 struct mlx4_ib_dev* FUNC_0 (struct ib_device*) ;

int FUNC_1(struct ib_device *VAR_0, u8 VAR_1, __be64 VAR_2)
{
 struct mlx4_ib_dev *VAR_3 = FUNC_0(VAR_0);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->dev->caps.sqp_demux; VAR_4++) {
  if (VAR_3->sriov.demux[VAR_1 - 1].guid_cache[VAR_4] == VAR_2)
   return VAR_4;
 }
 return -1;
}
