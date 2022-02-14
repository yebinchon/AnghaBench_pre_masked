
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct videobuf_queue {struct em28xx_fh* priv_data; } ;
struct em28xx_fh {struct em28xx* dev; } ;
struct TYPE_4__ {int state; } ;
struct em28xx_buffer {TYPE_2__ vb; } ;
struct TYPE_3__ {struct em28xx_buffer* vid_buf; } ;
struct em28xx {int slock; TYPE_1__ isoc_ctl; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(struct videobuf_queue *VAR_1, struct em28xx_buffer *VAR_2)
{
 struct em28xx_fh *VAR_3 = VAR_1->priv_data;
 struct em28xx *VAR_4 = VAR_3->dev;
 unsigned long VAR_5 = 0;
 if (FUNC_1())
  FUNC_0();
 FUNC_2(&VAR_4->slock, VAR_5);
 if (VAR_4->isoc_ctl.vid_buf == VAR_2)
  VAR_4->isoc_ctl.vid_buf = ((void*)0);
 FUNC_3(&VAR_4->slock, VAR_5);

 FUNC_4(&VAR_2->vb);
 VAR_2->vb.state = VAR_0;
}
