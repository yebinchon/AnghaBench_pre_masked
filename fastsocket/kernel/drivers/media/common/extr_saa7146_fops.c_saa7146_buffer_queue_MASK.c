
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7146_dmaqueue {int queue; struct saa7146_buf* curr; } ;
struct saa7146_dev {int slock; } ;
struct TYPE_2__ {int state; int queue; } ;
struct saa7146_buf {TYPE_1__ vb; int (* activate ) (struct saa7146_dev*,struct saa7146_buf*,int *) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct saa7146_dev*,struct saa7146_buf*,int *) ;

int FUNC_6(struct saa7146_dev *VAR_1,
    struct saa7146_dmaqueue *VAR_2,
    struct saa7146_buf *VAR_3)
{
 FUNC_3(&VAR_1->slock);
 FUNC_2(("dev:%p, dmaq:%p, buf:%p\n", VAR_1, VAR_2, VAR_3));

 FUNC_0(!VAR_2);

 if (((void*)0) == VAR_2->curr) {
  VAR_2->curr = VAR_3;
  FUNC_1(("immediately activating buffer %p\n", VAR_3));
  VAR_3->activate(VAR_1,VAR_3,((void*)0));
 } else {
  FUNC_4(&VAR_3->vb.queue,&VAR_2->queue);
  VAR_3->vb.state = VAR_0;
  FUNC_1(("adding buffer %p to queue. (active buffer present)\n", VAR_3));
 }
 return 0;
}
