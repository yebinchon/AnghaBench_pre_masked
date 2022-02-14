
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_ddr_avs; int alloc; int pool; int * av_map; scalar_t__ ddr_av_base; } ;
struct mthca_dev {int mthca_flags; TYPE_1__ av_table; scalar_t__ ddr_start; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int,int ) ;
 scalar_t__ FUNC_3 (struct mthca_dev*) ;
 int FUNC_4 (char*,int ,int,int,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int) ;

int FUNC_7(struct mthca_dev *VAR_3)
{
 int VAR_4;

 if (FUNC_3(VAR_3))
  return 0;

 VAR_4 = FUNC_2(&VAR_3->av_table.alloc,
          VAR_3->av_table.num_ddr_avs,
          VAR_3->av_table.num_ddr_avs - 1,
          0);
 if (VAR_4)
  return VAR_4;

 VAR_3->av_table.pool = FUNC_4("mthca_av", VAR_3->pdev,
          VAR_1,
          VAR_1, 0);
 if (!VAR_3->av_table.pool)
  goto out_free_alloc;

 if (!(VAR_3->mthca_flags & VAR_2)) {
  VAR_3->av_table.av_map = FUNC_0(FUNC_6(VAR_3->pdev, 4) +
            VAR_3->av_table.ddr_av_base -
            VAR_3->ddr_start,
            VAR_3->av_table.num_ddr_avs *
            VAR_1);
  if (!VAR_3->av_table.av_map)
   goto out_free_pool;
 } else
  VAR_3->av_table.av_map = ((void*)0);

 return 0;

 out_free_pool:
 FUNC_5(VAR_3->av_table.pool);

 out_free_alloc:
 FUNC_1(&VAR_3->av_table.alloc);
 return -VAR_0;
}
