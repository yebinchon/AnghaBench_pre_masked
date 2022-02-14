
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fsg_dev {int data_dir; int bulk_out; int short_packet_received; int residue; struct fsg_buffhd* next_buffhd_to_fill; int bulk_in; TYPE_1__* curlun; int data_size; } ;
struct fsg_buffhd {struct fsg_buffhd* next; int state; int inreq_busy; TYPE_2__* inreq; } ;
struct TYPE_6__ {int can_stall; } ;
struct TYPE_5__ {int zero; } ;
struct TYPE_4__ {int sense_data; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fsg_dev*,int ) ;
 int FUNC_1 (struct fsg_dev*) ;
 TYPE_3__ VAR_4 ;
 int FUNC_2 (struct fsg_dev*) ;
 int FUNC_3 (struct fsg_dev*,int ) ;
 int FUNC_4 (struct fsg_dev*,int ,TYPE_2__*,int *,int *) ;
 int FUNC_5 (struct fsg_dev*) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct fsg_dev *VAR_5)
{
 struct fsg_buffhd *VAR_6 = VAR_5->next_buffhd_to_fill;
 int VAR_7 = 0;

 switch (VAR_5->data_dir) {
 case 130:
  break;





 case 128:
  if (VAR_4.can_stall) {
   FUNC_0(VAR_5, VAR_5->bulk_out);
   VAR_7 = FUNC_1(VAR_5);
  }
  break;


 case 129:
  if (VAR_5->data_size == 0)
   ;


  else if (VAR_5->residue == 0) {
   VAR_6->inreq->zero = 0;
   FUNC_4(VAR_5, VAR_5->bulk_in, VAR_6->inreq,
     &VAR_6->inreq_busy, &VAR_6->state);
   VAR_5->next_buffhd_to_fill = VAR_6->next;
  }







  else if (!FUNC_6()) {
   if (VAR_4.can_stall &&
     VAR_5->residue == VAR_5->data_size &&
 (!VAR_5->curlun || VAR_5->curlun->sense_data != VAR_3)) {
    VAR_6->state = VAR_0;
    VAR_7 = FUNC_1(VAR_5);
   } else {
    VAR_6->inreq->zero = 1;
    FUNC_4(VAR_5, VAR_5->bulk_in, VAR_6->inreq,
      &VAR_6->inreq_busy, &VAR_6->state);
    VAR_5->next_buffhd_to_fill = VAR_6->next;
   }
  }




  else {
   if (VAR_4.can_stall) {
    VAR_6->inreq->zero = 1;
    FUNC_4(VAR_5, VAR_5->bulk_in, VAR_6->inreq,
      &VAR_6->inreq_busy, &VAR_6->state);
    VAR_5->next_buffhd_to_fill = VAR_6->next;
    VAR_7 = FUNC_1(VAR_5);
   } else
    VAR_7 = FUNC_2(VAR_5);
  }
  break;



 case 131:
  if (VAR_5->residue == 0)
   ;


  else if (VAR_5->short_packet_received) {
   FUNC_3(VAR_5, VAR_2);
   VAR_7 = -VAR_1;
  }
  else
   VAR_7 = FUNC_5(VAR_5);
  break;
 }
 return VAR_7;
}
