
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int aux_icm; } ;
struct TYPE_13__ {TYPE_5__ arbel; } ;
struct TYPE_11__ {int mtt_table; int mpt_table; } ;
struct TYPE_10__ {int qp_table; int eqp_table; int rdb_table; } ;
struct TYPE_9__ {int table; } ;
struct TYPE_8__ {int table; } ;
struct TYPE_14__ {int table; } ;
struct mthca_dev {int mthca_flags; TYPE_6__ fw; TYPE_4__ mr_table; TYPE_3__ qp_table; TYPE_2__ cq_table; TYPE_1__ srq_table; TYPE_7__ mcg_table; } ;


 int VAR_0 ;
 int FUNC_0 (struct mthca_dev*) ;
 int FUNC_1 (struct mthca_dev*,int ,int ) ;
 int FUNC_2 (struct mthca_dev*,int ) ;
 int FUNC_3 (struct mthca_dev*) ;

__attribute__((used)) static void FUNC_4(struct mthca_dev *VAR_1)
{

 FUNC_2(VAR_1, VAR_1->mcg_table.table);
 if (VAR_1->mthca_flags & VAR_0)
  FUNC_2(VAR_1, VAR_1->srq_table.table);
 FUNC_2(VAR_1, VAR_1->cq_table.table);
 FUNC_2(VAR_1, VAR_1->qp_table.rdb_table);
 FUNC_2(VAR_1, VAR_1->qp_table.eqp_table);
 FUNC_2(VAR_1, VAR_1->qp_table.qp_table);
 FUNC_2(VAR_1, VAR_1->mr_table.mpt_table);
 FUNC_2(VAR_1, VAR_1->mr_table.mtt_table);
 FUNC_3(VAR_1);

 FUNC_0(VAR_1);
 FUNC_1(VAR_1, VAR_1->fw.arbel.aux_icm, 0);
}
