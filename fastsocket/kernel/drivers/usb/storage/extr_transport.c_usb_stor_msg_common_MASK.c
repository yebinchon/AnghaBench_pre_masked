
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct us_data {scalar_t__ iobuf; TYPE_1__* current_urb; int dflags; int cr_dma; int iobuf_dma; } ;
struct completion {int dummy; } ;
struct TYPE_4__ {int status; scalar_t__ transfer_buffer; int setup_dma; int transfer_dma; int transfer_flags; scalar_t__ error_count; scalar_t__ actual_length; struct completion* context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct completion*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 long FUNC_9 (struct completion*,int ) ;

__attribute__((used)) static int FUNC_10(struct us_data *VAR_7, int VAR_8)
{
 struct completion VAR_9;
 long VAR_10;
 int VAR_11;


 if (FUNC_5(VAR_5, &VAR_7->dflags))
  return -VAR_0;


 FUNC_2(&VAR_9);


 VAR_7->current_urb->context = &VAR_9;
 VAR_7->current_urb->actual_length = 0;
 VAR_7->current_urb->error_count = 0;
 VAR_7->current_urb->status = 0;





 VAR_7->current_urb->transfer_flags = VAR_3;
 if (VAR_7->current_urb->transfer_buffer == VAR_7->iobuf)
  VAR_7->current_urb->transfer_flags |= VAR_4;
 VAR_7->current_urb->transfer_dma = VAR_7->iobuf_dma;
 VAR_7->current_urb->setup_dma = VAR_7->cr_dma;


 VAR_11 = FUNC_7(VAR_7->current_urb, VAR_1);
 if (VAR_11) {

  return VAR_11;
 }



 FUNC_3(VAR_6, &VAR_7->dflags);


 if (FUNC_5(VAR_5, &VAR_7->dflags)) {


  if (FUNC_4(VAR_6, &VAR_7->dflags)) {
   FUNC_0("-- cancelling URB\n");
   FUNC_8(VAR_7->current_urb);
  }
 }


 VAR_10 = FUNC_9(
   &VAR_9, VAR_8 ? : VAR_2);

 FUNC_1(VAR_6, &VAR_7->dflags);

 if (VAR_10 <= 0) {
  FUNC_0("%s -- cancelling URB\n",
     VAR_10 == 0 ? "Timeout" : "Signal");
  FUNC_6(VAR_7->current_urb);
 }


 return VAR_7->current_urb->status;
}
