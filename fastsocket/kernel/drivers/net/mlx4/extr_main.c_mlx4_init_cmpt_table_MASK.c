
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_12__ {int cmpt_table; } ;
struct TYPE_11__ {int cmpt_table; } ;
struct TYPE_10__ {int cmpt_table; } ;
struct TYPE_9__ {int cmpt_table; } ;
struct mlx4_priv {TYPE_6__ qp_table; TYPE_5__ srq_table; TYPE_4__ cq_table; TYPE_3__ eq_table; } ;
struct TYPE_8__ {int num_qps; int* reserved_qps_cnt; int num_srqs; int reserved_srqs; int num_cqs; int reserved_cqs; int num_eqs; } ;
struct TYPE_7__ {int num_phys_eqs; } ;
struct mlx4_dev {TYPE_2__ caps; TYPE_1__ phys_caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct mlx4_dev*,int *) ;
 int FUNC_1 (struct mlx4_dev*,int *,int,int,int,int,int ,int ) ;
 scalar_t__ FUNC_2 (struct mlx4_dev*) ;
 struct mlx4_priv* FUNC_3 (struct mlx4_dev*) ;

__attribute__((used)) static int FUNC_4(struct mlx4_dev *VAR_6, u64 VAR_7,
    int VAR_8)
{
 struct mlx4_priv *VAR_9 = FUNC_3(VAR_6);
 int VAR_10;
 int VAR_11;

 VAR_10 = FUNC_1(VAR_6, &VAR_9->qp_table.cmpt_table,
      VAR_7 +
      ((u64) (VAR_3 *
       VAR_8) << VAR_0),
      VAR_8, VAR_6->caps.num_qps,
      VAR_6->caps.reserved_qps_cnt[VAR_5],
      0, 0);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_1(VAR_6, &VAR_9->srq_table.cmpt_table,
      VAR_7 +
      ((u64) (VAR_4 *
       VAR_8) << VAR_0),
      VAR_8, VAR_6->caps.num_srqs,
      VAR_6->caps.reserved_srqs, 0, 0);
 if (VAR_10)
  goto err_qp;

 VAR_10 = FUNC_1(VAR_6, &VAR_9->cq_table.cmpt_table,
      VAR_7 +
      ((u64) (VAR_1 *
       VAR_8) << VAR_0),
      VAR_8, VAR_6->caps.num_cqs,
      VAR_6->caps.reserved_cqs, 0, 0);
 if (VAR_10)
  goto err_srq;

 VAR_11 = (FUNC_2(VAR_6)) ? VAR_6->phys_caps.num_phys_eqs :
    VAR_6->caps.num_eqs;
 VAR_10 = FUNC_1(VAR_6, &VAR_9->eq_table.cmpt_table,
      VAR_7 +
      ((u64) (VAR_2 *
       VAR_8) << VAR_0),
      VAR_8, VAR_11, VAR_11, 0, 0);
 if (VAR_10)
  goto err_cq;

 return 0;

err_cq:
 FUNC_0(VAR_6, &VAR_9->cq_table.cmpt_table);

err_srq:
 FUNC_0(VAR_6, &VAR_9->srq_table.cmpt_table);

err_qp:
 FUNC_0(VAR_6, &VAR_9->qp_table.cmpt_table);

err:
 return VAR_10;
}
