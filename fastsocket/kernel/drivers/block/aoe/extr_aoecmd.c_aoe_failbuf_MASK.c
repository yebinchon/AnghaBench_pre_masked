
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct buf {scalar_t__ nframesout; TYPE_1__* bio; scalar_t__ resid; } ;
struct aoedev {int dummy; } ;
struct TYPE_2__ {int bi_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct aoedev*,struct buf*) ;
 int FUNC_1 (int ,int *) ;

void
FUNC_2(struct aoedev *VAR_1, struct buf *VAR_2)
{
 if (VAR_2 == ((void*)0))
  return;
 VAR_2->resid = 0;
 FUNC_1(VAR_0, &VAR_2->bio->bi_flags);
 if (VAR_2->nframesout == 0)
  FUNC_0(VAR_1, VAR_2);
}
