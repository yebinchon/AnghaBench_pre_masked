
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ rx_filter; scalar_t__ tx_type; } ;
struct mlx4_en_priv {size_t port; int rx_ring_num; TYPE_4__ hwtstamp_config; TYPE_3__* rx_ring; struct mlx4_en_cq* rx_cq; TYPE_1__* dev; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int priv_uar; TYPE_7__* dev; int * pndev; } ;
struct TYPE_17__ {int event; int comp; scalar_t__* arm_db; scalar_t__* set_ci_db; } ;
struct TYPE_14__ {int dma; scalar_t__* db; } ;
struct TYPE_15__ {TYPE_5__ db; int mtt; } ;
struct mlx4_en_cq {scalar_t__ is_tx; int vector; int ring; int napi; int dev; TYPE_8__ mcq; TYPE_6__ wqres; int size; int buf_size; int buf; } ;
struct cpu_rmap {int dummy; } ;
struct TYPE_11__ {int num_comp_vectors; scalar_t__ comp_pool; } ;
struct TYPE_16__ {TYPE_2__ caps; } ;
struct TYPE_12__ {int actual_size; } ;
struct TYPE_10__ {char* name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_7__*,char*,struct cpu_rmap*,int*) ;
 int FUNC_2 (TYPE_7__*,int ,int *,int *,int ,TYPE_8__*,int,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct cpu_rmap* FUNC_3 (struct mlx4_en_priv*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct mlx4_en_dev*,char*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *,int ,int) ;
 int FUNC_7 (char*,char*,char*,int) ;

int FUNC_8(struct mlx4_en_priv *VAR_5, struct mlx4_en_cq *VAR_6,
   int VAR_7)
{
 struct mlx4_en_dev *VAR_8 = VAR_5->mdev;
 int VAR_9 = 0;
 char VAR_10[25];
 int VAR_11 = 0;
 struct cpu_rmap *VAR_12 = FUNC_3(VAR_5);

 VAR_6->dev = VAR_8->pndev[VAR_5->port];
 VAR_6->mcq.set_ci_db = VAR_6->wqres.db.db;
 VAR_6->mcq.arm_db = VAR_6->wqres.db.db + 1;
 *VAR_6->mcq.set_ci_db = 0;
 *VAR_6->mcq.arm_db = 0;
 FUNC_0(VAR_6->buf, 0, VAR_6->buf_size);

 if (VAR_6->is_tx == VAR_0) {
  if (VAR_8->dev->caps.comp_pool) {
   if (!VAR_6->vector) {
    FUNC_7(VAR_10, "%s-%d", VAR_5->dev->name,
     VAR_6->ring);

    if (FUNC_1(VAR_8->dev, VAR_10, VAR_12,
         &VAR_6->vector)) {
     VAR_6->vector = (VAR_6->ring + 1 + VAR_5->port)
         % VAR_8->dev->caps.num_comp_vectors;
     FUNC_4(VAR_8, "Failed Assigning an EQ to "
        "%s ,Falling back to legacy EQ's\n",
        VAR_10);
    }
   }
  } else {
   VAR_6->vector = (VAR_6->ring + 1 + VAR_5->port) %
    VAR_8->dev->caps.num_comp_vectors;
  }
 } else {


  struct mlx4_en_cq *VAR_13;

  VAR_7 = VAR_7 % VAR_5->rx_ring_num;
  VAR_13 = &VAR_5->rx_cq[VAR_7];
  VAR_6->vector = VAR_13->vector;
 }

 if (!VAR_6->is_tx)
  VAR_6->size = VAR_5->rx_ring[VAR_6->ring].actual_size;

 if ((VAR_6->is_tx && VAR_5->hwtstamp_config.tx_type) ||
     (!VAR_6->is_tx && VAR_5->hwtstamp_config.rx_filter))
  VAR_11 = 1;

 VAR_9 = FUNC_2(VAR_8->dev, VAR_6->size, &VAR_6->wqres.mtt,
       &VAR_8->priv_uar, VAR_6->wqres.db.dma, &VAR_6->mcq,
       VAR_6->vector, 0, VAR_11);
 if (VAR_9)
  return VAR_9;

 VAR_6->mcq.comp = VAR_6->is_tx ? VAR_4 : VAR_3;
 VAR_6->mcq.event = VAR_1;

 if (!VAR_6->is_tx) {
  FUNC_6(VAR_6->dev, &VAR_6->napi, VAR_2, 64);
  FUNC_5(&VAR_6->napi);
 }

 return 0;
}
