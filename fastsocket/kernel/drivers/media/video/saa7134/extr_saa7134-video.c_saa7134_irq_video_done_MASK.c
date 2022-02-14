
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* curr; } ;
struct saa7134_dev {int slock; TYPE_3__ video_q; scalar_t__ video_fieldcount; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
struct TYPE_5__ {int field; scalar_t__ field_count; } ;
struct TYPE_6__ {int top_seen; TYPE_1__ vb; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct saa7134_dev*,TYPE_3__*,int ) ;
 int FUNC_2 (struct saa7134_dev*,TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct saa7134_dev *VAR_3, unsigned long VAR_4)
{
 enum v4l2_field VAR_5;

 FUNC_3(&VAR_3->slock);
 if (VAR_3->video_q.curr) {
  VAR_3->video_fieldcount++;
  VAR_5 = VAR_3->video_q.curr->vb.field;
  if (FUNC_0(VAR_5)) {

   if ((VAR_4 & 0x10) == 0x00) {
    VAR_3->video_q.curr->top_seen = 1;
    goto done;
   }
   if (!VAR_3->video_q.curr->top_seen)
    goto done;
  } else if (VAR_5 == VAR_1) {
   if ((VAR_4 & 0x10) != 0x10)
    goto done;
  } else if (VAR_5 == VAR_0) {
   if ((VAR_4 & 0x10) != 0x00)
    goto done;
  }
  VAR_3->video_q.curr->vb.field_count = VAR_3->video_fieldcount;
  FUNC_1(VAR_3,&VAR_3->video_q,VAR_2);
 }
 FUNC_2(VAR_3,&VAR_3->video_q);

 done:
 FUNC_4(&VAR_3->slock);
}
