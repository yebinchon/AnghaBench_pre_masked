
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ocrdma_pd {TYPE_2__* uctx; int id; struct ocrdma_dev* dev; } ;
struct ocrdma_dev {int dummy; } ;
struct ib_ah {int dummy; } ;
struct ocrdma_ah {struct ib_ah ibah; int id; struct ocrdma_dev* dev; } ;
struct ib_pd {int dummy; } ;
struct ib_ah_attr {int ah_flags; int dlid; } ;
struct TYPE_3__ {int * va; } ;
struct TYPE_4__ {TYPE_1__ ah_tbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_ah* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct ocrdma_pd* FUNC_1 (struct ib_pd*) ;
 int FUNC_2 (struct ocrdma_ah*) ;
 struct ocrdma_ah* FUNC_3 (int,int ) ;
 int FUNC_4 (struct ocrdma_dev*,struct ocrdma_ah*) ;
 int FUNC_5 (struct ocrdma_dev*,struct ocrdma_ah*) ;
 int FUNC_6 (struct ocrdma_ah*,struct ib_ah_attr*,int ) ;

struct ib_ah *FUNC_7(struct ib_pd *VAR_4, struct ib_ah_attr *VAR_5)
{
 u32 *VAR_6;
 int VAR_7;
 struct ocrdma_ah *VAR_8;
 struct ocrdma_pd *VAR_9 = FUNC_1(VAR_4);
 struct ocrdma_dev *VAR_10 = VAR_9->dev;

 if (!(VAR_5->ah_flags & VAR_3))
  return FUNC_0(-VAR_0);

 VAR_8 = FUNC_3(sizeof *VAR_8, VAR_2);
 if (!VAR_8)
  return FUNC_0(-VAR_1);
 VAR_8->dev = VAR_9->dev;

 VAR_7 = FUNC_4(VAR_10, VAR_8);
 if (VAR_7)
  goto av_err;
 VAR_7 = FUNC_6(VAR_8, VAR_5, VAR_9->id);
 if (VAR_7)
  goto av_conf_err;


 if ((VAR_9->uctx) && (VAR_9->uctx->ah_tbl.va)) {
  VAR_6 = VAR_9->uctx->ah_tbl.va + VAR_5->dlid;
  *VAR_6 = VAR_8->id;
 }
 return &VAR_8->ibah;

av_conf_err:
 FUNC_5(VAR_10, VAR_8);
av_err:
 FUNC_2(VAR_8);
 return FUNC_0(VAR_7);
}
