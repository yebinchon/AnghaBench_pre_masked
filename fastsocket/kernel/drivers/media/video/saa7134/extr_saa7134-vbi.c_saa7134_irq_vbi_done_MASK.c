
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* curr; } ;
struct saa7134_dev {int slock; TYPE_3__ vbi_q; scalar_t__ vbi_fieldcount; } ;
struct TYPE_5__ {scalar_t__ field_count; } ;
struct TYPE_6__ {int top_seen; TYPE_1__ vb; } ;


 int VAR_0 ;
 int FUNC_0 (struct saa7134_dev*,TYPE_3__*,int ) ;
 int FUNC_1 (struct saa7134_dev*,TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct saa7134_dev *VAR_1, unsigned long VAR_2)
{
 FUNC_2(&VAR_1->slock);
 if (VAR_1->vbi_q.curr) {
  VAR_1->vbi_fieldcount++;

  if ((VAR_2 & 0x10) == 0x00) {
   VAR_1->vbi_q.curr->top_seen = 1;
   goto done;
  }
  if (!VAR_1->vbi_q.curr->top_seen)
   goto done;

  VAR_1->vbi_q.curr->vb.field_count = VAR_1->vbi_fieldcount;
  FUNC_0(VAR_1,&VAR_1->vbi_q,VAR_0);
 }
 FUNC_1(VAR_1,&VAR_1->vbi_q);

 done:
 FUNC_3(&VAR_1->slock);
}
