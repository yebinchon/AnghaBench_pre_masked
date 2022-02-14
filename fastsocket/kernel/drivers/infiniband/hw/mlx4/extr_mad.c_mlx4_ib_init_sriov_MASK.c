
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int interface_id; } ;
union ib_gid {TYPE_2__ global; } ;
struct TYPE_14__ {TYPE_9__* demux; int * sqps; int going_down_lock; scalar_t__ is_going_down; } ;
struct TYPE_16__ {int node_guid; } ;
struct mlx4_ib_dev {int num_ports; TYPE_3__ sriov; TYPE_4__* dev; TYPE_8__ ib_dev; } ;
struct TYPE_17__ {int * guid_cache; } ;
struct TYPE_12__ {int sqp_demux; } ;
struct TYPE_15__ {TYPE_1__ caps; } ;


 int FUNC_0 (TYPE_8__*,int,int ,union ib_gid*,int) ;
 int FUNC_1 (struct mlx4_ib_dev*,int,int,int *) ;
 int FUNC_2 (struct mlx4_ib_dev*,int,int) ;
 int FUNC_3 (struct mlx4_ib_dev*,TYPE_9__*,int) ;
 int FUNC_4 (struct mlx4_ib_dev*,int) ;
 int FUNC_5 (struct mlx4_ib_dev*) ;
 int FUNC_6 (struct mlx4_ib_dev*) ;
 int FUNC_7 (struct mlx4_ib_dev*) ;
 int FUNC_8 (struct mlx4_ib_dev*) ;
 int FUNC_9 (TYPE_9__*) ;
 int FUNC_10 () ;
 int FUNC_11 (struct mlx4_ib_dev*) ;
 int FUNC_12 (struct mlx4_ib_dev*,int) ;
 int FUNC_13 (TYPE_8__*,char*,...) ;
 int FUNC_14 (TYPE_4__*) ;
 scalar_t__ FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (TYPE_4__*) ;
 int FUNC_17 (TYPE_4__*,int,int ) ;
 int FUNC_18 (int *) ;

int FUNC_19(struct mlx4_ib_dev *VAR_0)
{
 int VAR_1 = 0;
 int VAR_2;

 if (!FUNC_14(VAR_0->dev))
  return 0;

 VAR_0->sriov.is_going_down = 0;
 FUNC_18(&VAR_0->sriov.going_down_lock);
 FUNC_5(VAR_0);

 FUNC_13(&VAR_0->ib_dev, "multi-function enabled\n");

 if (FUNC_15(VAR_0->dev)) {
  FUNC_13(&VAR_0->ib_dev, "operating in qp1 tunnel mode\n");
  return 0;
 }

 for (VAR_1 = 0; VAR_1 < VAR_0->dev->caps.sqp_demux; VAR_1++) {
  if (VAR_1 == FUNC_16(VAR_0->dev))
   FUNC_17(VAR_0->dev, VAR_1, VAR_0->ib_dev.node_guid);
  else
   FUNC_17(VAR_0->dev, VAR_1, FUNC_10());
 }

 VAR_2 = FUNC_11(VAR_0);
 if (VAR_2) {
  FUNC_13(&VAR_0->ib_dev, "Failed init alias guid process.\n");
  goto paravirt_err;
 }
 VAR_2 = FUNC_7(VAR_0);
 if (VAR_2) {
  FUNC_13(&VAR_0->ib_dev, "Failed to register sysfs\n");
  goto sysfs_err;
 }

 FUNC_13(&VAR_0->ib_dev, "initializing demux service for %d qp1 clients\n",
       VAR_0->dev->caps.sqp_demux);
 for (VAR_1 = 0; VAR_1 < VAR_0->num_ports; VAR_1++) {
  union ib_gid VAR_3;
  VAR_2 = FUNC_0(&VAR_0->ib_dev, VAR_1 + 1, 0, &VAR_3, 1);
  if (VAR_2)
   goto demux_err;
  VAR_0->sriov.demux[VAR_1].guid_cache[0] = VAR_3.global.interface_id;
  VAR_2 = FUNC_1(VAR_0, FUNC_16(VAR_0->dev), VAR_1 + 1,
          &VAR_0->sriov.sqps[VAR_1]);
  if (VAR_2)
   goto demux_err;
  VAR_2 = FUNC_3(VAR_0, &VAR_0->sriov.demux[VAR_1], VAR_1 + 1);
  if (VAR_2)
   goto free_pv;
 }
 FUNC_12(VAR_0, 1);
 return 0;

free_pv:
 FUNC_2(VAR_0, FUNC_16(VAR_0->dev), VAR_1 + 1);
demux_err:
 while (--VAR_1 >= 0) {
  FUNC_2(VAR_0, FUNC_16(VAR_0->dev), VAR_1 + 1);
  FUNC_9(&VAR_0->sriov.demux[VAR_1]);
 }
 FUNC_8(VAR_0);

sysfs_err:
 FUNC_6(VAR_0);

paravirt_err:
 FUNC_4(VAR_0, -1);

 return VAR_2;
}
