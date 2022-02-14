
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int tpt_table; int qid_table; int pdid_table; } ;
struct c4iw_rdev {TYPE_1__ resource; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct c4iw_rdev*) ;

int FUNC_3(struct c4iw_rdev *VAR_2, u32 VAR_3, u32 VAR_4)
{
 int VAR_5 = 0;
 VAR_5 = FUNC_0(&VAR_2->resource.tpt_table, 0, VAR_3, 1,
     VAR_0);
 if (VAR_5)
  goto tpt_err;
 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5)
  goto qid_err;
 VAR_5 = FUNC_0(&VAR_2->resource.pdid_table, 0,
     VAR_4, 1, 0);
 if (VAR_5)
  goto pdid_err;
 return 0;
 pdid_err:
 FUNC_1(&VAR_2->resource.qid_table);
 qid_err:
 FUNC_1(&VAR_2->resource.tpt_table);
 tpt_err:
 return -VAR_1;
}
