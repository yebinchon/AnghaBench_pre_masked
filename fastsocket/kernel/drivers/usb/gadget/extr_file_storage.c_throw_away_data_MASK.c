
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct fsg_dev {scalar_t__ usb_amount_left; struct fsg_buffhd* next_buffhd_to_fill; int bulk_out; struct fsg_buffhd* next_buffhd_to_drain; } ;
struct fsg_buffhd {scalar_t__ state; scalar_t__ bulk_out_intended_length; struct fsg_buffhd* next; int outreq_busy; TYPE_1__* outreq; } ;
struct TYPE_4__ {scalar_t__ buflen; } ;
struct TYPE_3__ {scalar_t__ actual; scalar_t__ length; scalar_t__ status; int short_not_ok; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 TYPE_2__ VAR_4 ;
 int FUNC_1 (struct fsg_dev*,int ) ;
 int FUNC_2 (struct fsg_dev*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct fsg_dev*,int ,TYPE_1__*,int *,scalar_t__*) ;

__attribute__((used)) static int FUNC_5(struct fsg_dev *VAR_5)
{
 struct fsg_buffhd *VAR_6;
 u32 VAR_7;
 int VAR_8;

 while ((VAR_6 = VAR_5->next_buffhd_to_drain)->state != VAR_0 ||
   VAR_5->usb_amount_left > 0) {


  if (VAR_6->state == VAR_1) {
   FUNC_3();
   VAR_6->state = VAR_0;
   VAR_5->next_buffhd_to_drain = VAR_6->next;


   if (VAR_6->outreq->actual != VAR_6->outreq->length ||
     VAR_6->outreq->status != 0) {
    FUNC_1(VAR_5, VAR_3);
    return -VAR_2;
   }
   continue;
  }


  VAR_6 = VAR_5->next_buffhd_to_fill;
  if (VAR_6->state == VAR_0 && VAR_5->usb_amount_left > 0) {
   VAR_7 = FUNC_0(VAR_5->usb_amount_left,
     (u32) VAR_4.buflen);



   VAR_6->outreq->length = VAR_6->bulk_out_intended_length =
     VAR_7;
   VAR_6->outreq->short_not_ok = 1;
   FUNC_4(VAR_5, VAR_5->bulk_out, VAR_6->outreq,
     &VAR_6->outreq_busy, &VAR_6->state);
   VAR_5->next_buffhd_to_fill = VAR_6->next;
   VAR_5->usb_amount_left -= VAR_7;
   continue;
  }


  VAR_8 = FUNC_2(VAR_5);
  if (VAR_8)
   return VAR_8;
 }
 return 0;
}
