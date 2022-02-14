
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* curr; } ;
struct saa7134_dev {int slock; TYPE_3__ ts_q; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
struct TYPE_5__ {int field; } ;
struct TYPE_6__ {TYPE_1__ vb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct saa7134_dev*,TYPE_3__*,int ) ;
 int FUNC_1 (struct saa7134_dev*,TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct saa7134_dev *VAR_2, unsigned long VAR_3)
{
 enum v4l2_field VAR_4;

 FUNC_2(&VAR_2->slock);
 if (VAR_2->ts_q.curr) {
  VAR_4 = VAR_2->ts_q.curr->vb.field;
  if (VAR_4 == VAR_0) {
   if ((VAR_3 & 0x100000) != 0x000000)
    goto done;
  } else {
   if ((VAR_3 & 0x100000) != 0x100000)
    goto done;
  }
  FUNC_0(VAR_2,&VAR_2->ts_q,VAR_1);
 }
 FUNC_1(VAR_2,&VAR_2->ts_q);

 done:
 FUNC_3(&VAR_2->slock);
}
