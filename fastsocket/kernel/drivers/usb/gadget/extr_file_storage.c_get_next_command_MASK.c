
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsg_dev {scalar_t__ cbbuf_cmnd_size; scalar_t__ cmnd_size; int lock; int cbbuf_cmnd; int cmnd; int data_dir; int intreq; int intr_in; scalar_t__ intreq_busy; int bulk_out; struct fsg_buffhd* next_buffhd_to_fill; } ;
struct fsg_buffhd {scalar_t__ state; int outreq_busy; TYPE_1__* outreq; } ;
struct TYPE_2__ {int short_not_ok; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (struct fsg_dev*,struct fsg_buffhd*) ;
 int FUNC_2 (struct fsg_dev*,struct fsg_buffhd*,int ) ;
 int FUNC_3 (struct fsg_dev*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct fsg_dev*,int ,TYPE_1__*,int *,scalar_t__*) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct fsg_dev *VAR_4)
{
 struct fsg_buffhd *VAR_5;
 int VAR_6 = 0;

 if (FUNC_8()) {


  VAR_5 = VAR_4->next_buffhd_to_fill;
  while (VAR_5->state != VAR_0) {
   VAR_6 = FUNC_3(VAR_4);
   if (VAR_6)
    return VAR_6;
  }


  FUNC_2(VAR_4, VAR_5, VAR_3);
  VAR_5->outreq->short_not_ok = 1;
  FUNC_7(VAR_4, VAR_4->bulk_out, VAR_5->outreq,
    &VAR_5->outreq_busy, &VAR_5->state);






  while (VAR_5->state != VAR_1) {
   VAR_6 = FUNC_3(VAR_4);
   if (VAR_6)
    return VAR_6;
  }
  FUNC_4();
  VAR_6 = FUNC_1(VAR_4, VAR_5);
  VAR_5->state = VAR_0;

 } else {


  while (VAR_4->cbbuf_cmnd_size == 0) {
   VAR_6 = FUNC_3(VAR_4);
   if (VAR_6)
    return VAR_6;
  }




  if (VAR_4->intreq_busy)
   FUNC_9(VAR_4->intr_in, VAR_4->intreq);


  VAR_4->data_dir = VAR_2;
  FUNC_5(&VAR_4->lock);
  VAR_4->cmnd_size = VAR_4->cbbuf_cmnd_size;
  FUNC_0(VAR_4->cmnd, VAR_4->cbbuf_cmnd, VAR_4->cmnd_size);
  VAR_4->cbbuf_cmnd_size = 0;
  FUNC_6(&VAR_4->lock);
 }
 return VAR_6;
}
