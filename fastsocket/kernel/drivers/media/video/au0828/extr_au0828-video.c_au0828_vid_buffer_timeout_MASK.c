
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct au0828_dmaqueue {int dummy; } ;
struct TYPE_3__ {struct au0828_buffer* buf; } ;
struct au0828_dev {int vid_timeout_running; int slock; int vid_timeout; TYPE_1__ isoc_ctl; struct au0828_dmaqueue vidq; } ;
struct TYPE_4__ {int size; } ;
struct au0828_buffer {TYPE_2__ vb; } ;


 int VAR_0 ;
 int FUNC_0 (struct au0828_dev*,struct au0828_dmaqueue*,struct au0828_buffer*) ;
 int FUNC_1 (struct au0828_dmaqueue*,struct au0828_buffer**) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (unsigned char*,int,int ) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 unsigned char* FUNC_6 (TYPE_2__*) ;

void FUNC_7(unsigned long VAR_2)
{
 struct au0828_dev *VAR_3 = (struct au0828_dev *) VAR_2;
 struct au0828_dmaqueue *VAR_4 = &VAR_3->vidq;
 struct au0828_buffer *VAR_5;
 unsigned char *VAR_6;
 unsigned long VAR_7 = 0;

 FUNC_4(&VAR_3->slock, VAR_7);

 VAR_5 = VAR_3->isoc_ctl.buf;
 if (VAR_5 != ((void*)0)) {
  VAR_6 = FUNC_6(&VAR_5->vb);
  FUNC_2(VAR_6, 0x00, VAR_5->vb.size);
  FUNC_0(VAR_3, VAR_4, VAR_5);
 }
 FUNC_1(VAR_4, &VAR_5);

 if (VAR_3->vid_timeout_running == 1)
  FUNC_3(&VAR_3->vid_timeout, VAR_1 + (VAR_0 / 10));

 FUNC_5(&VAR_3->slock, VAR_7);
}
