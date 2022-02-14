
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_6__ {void* wValue; void* wIndex; } ;
struct TYPE_8__ {size_t ctrl_out_idx; TYPE_4__* ctrl_urb; TYPE_2__* ctrl_buff; TYPE_1__ ctrl_write; int ctrl_out_pipe; scalar_t__ ctrl_cnt; } ;
typedef TYPE_3__ hfcusb_data ;
struct TYPE_9__ {scalar_t__ transfer_buffer_length; int * transfer_buffer; int * setup_packet; int pipe; } ;
struct TYPE_7__ {int reg_val; int hfc_reg; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,int ) ;

__attribute__((used)) static void
FUNC_2(hfcusb_data * VAR_1)
{
 if (VAR_1->ctrl_cnt) {
  VAR_1->ctrl_urb->pipe = VAR_1->ctrl_out_pipe;
  VAR_1->ctrl_urb->setup_packet = (u_char *) & VAR_1->ctrl_write;
  VAR_1->ctrl_urb->transfer_buffer = ((void*)0);
  VAR_1->ctrl_urb->transfer_buffer_length = 0;
  VAR_1->ctrl_write.wIndex =
      FUNC_0(VAR_1->ctrl_buff[VAR_1->ctrl_out_idx].hfc_reg);
  VAR_1->ctrl_write.wValue =
      FUNC_0(VAR_1->ctrl_buff[VAR_1->ctrl_out_idx].reg_val);

  FUNC_1(VAR_1->ctrl_urb, VAR_0);
 }
}
