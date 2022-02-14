
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


union ib_gid {int raw; } ;
typedef int u64 ;
typedef int u16 ;
struct TYPE_6__ {int raw; } ;
struct mlx4_ib_steering {int list; int reg_id; TYPE_2__ gid; } ;
struct mlx4_ib_qp {int flags; int mqp; int mutex; int steering_rules; int port; } ;
struct mlx4_ib_dev {TYPE_3__* dev; } ;
struct ib_qp {int device; } ;
struct TYPE_5__ {scalar_t__ steering_mode; } ;
struct TYPE_7__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct ib_qp*,union ib_gid*) ;
 int FUNC_1 (struct mlx4_ib_steering*) ;
 struct mlx4_ib_steering* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (TYPE_3__*,int *,int ,int ,int,int ,int *) ;
 int FUNC_6 (TYPE_3__*,int *,int ,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct mlx4_ib_dev* FUNC_9 (int ) ;
 struct mlx4_ib_qp* FUNC_10 (struct ib_qp*) ;

__attribute__((used)) static int FUNC_11(struct ib_qp *VAR_5, union ib_gid *VAR_6, u16 VAR_7)
{
 int VAR_8;
 struct mlx4_ib_dev *VAR_9 = FUNC_9(VAR_5->device);
 struct mlx4_ib_qp *VAR_10 = FUNC_10(VAR_5);
 u64 VAR_11;
 struct mlx4_ib_steering *VAR_12 = ((void*)0);

 if (VAR_9->dev->caps.steering_mode ==
     VAR_4) {
  VAR_12 = FUNC_2(sizeof(*VAR_12), VAR_1);
  if (!VAR_12)
   return -VAR_0;
 }

 VAR_8 = FUNC_5(VAR_9->dev, &VAR_10->mqp, VAR_6->raw, VAR_10->port,
        !!(VAR_10->flags &
           VAR_2),
        VAR_3, &VAR_11);
 if (VAR_8)
  goto err_malloc;

 VAR_8 = FUNC_0(VAR_5, VAR_6);
 if (VAR_8)
  goto err_add;

 if (VAR_12) {
  FUNC_4(VAR_12->gid.raw, VAR_6->raw, 16);
  VAR_12->reg_id = VAR_11;
  FUNC_7(&VAR_10->mutex);
  FUNC_3(&VAR_12->list, &VAR_10->steering_rules);
  FUNC_8(&VAR_10->mutex);
 }
 return 0;

err_add:
 FUNC_6(VAR_9->dev, &VAR_10->mqp, VAR_6->raw,
         VAR_3, VAR_11);
err_malloc:
 FUNC_1(VAR_12);

 return VAR_8;
}
