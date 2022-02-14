
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ expires; } ;
struct pcbit_dev {int w_busy; int r_busy; int rcv_seq; int send_seq; int unack_seq; int free; scalar_t__ sh_mem; scalar_t__ readptr; scalar_t__ writeptr; int l2_state; struct frame_buf* write_queue; struct frame_buf* read_frame; TYPE_1__ error_recover_timer; } ;
struct frame_buf {scalar_t__ copied; scalar_t__ skb; struct frame_buf* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (struct frame_buf*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct pcbit_dev*) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_8(unsigned long VAR_5)
{

 struct pcbit_dev *VAR_6;
 struct frame_buf *VAR_7;

 VAR_6 = (struct pcbit_dev *) VAR_5;

 FUNC_1(&VAR_6->error_recover_timer);
 if (VAR_6->w_busy || VAR_6->r_busy) {
  FUNC_3(&VAR_6->error_recover_timer);
  VAR_6->error_recover_timer.expires = VAR_4 + VAR_2;
  FUNC_0(&VAR_6->error_recover_timer);
  return;
 }
 VAR_6->w_busy = VAR_6->r_busy = 1;

 if (VAR_6->read_frame) {
  FUNC_5(VAR_6->read_frame->skb);
  FUNC_4(VAR_6->read_frame);
  VAR_6->read_frame = ((void*)0);
 }
 if (VAR_6->write_queue) {
  VAR_7 = VAR_6->write_queue;
  VAR_7->copied = 0;

 }
 VAR_6->rcv_seq = VAR_6->send_seq = VAR_6->unack_seq = 0;
 VAR_6->free = 511;
 VAR_6->l2_state = VAR_3;


 FUNC_6(VAR_6);

 VAR_6->writeptr = VAR_6->sh_mem;
 VAR_6->readptr = VAR_6->sh_mem + VAR_0;

 FUNC_7((0x80U | ((VAR_6->rcv_seq & 0x07) << 3) | (VAR_6->send_seq & 0x07)),
        VAR_6->sh_mem + VAR_1);
 VAR_6->w_busy = VAR_6->r_busy = 0;

}
