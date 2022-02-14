
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct uart_port {TYPE_3__* state; } ;
struct ktermios {int * c_cc; int c_lflag; int c_oflag; int c_iflag; int c_cflag; } ;
struct jsm_channel {struct jsm_board* ch_bd; int ch_open_count; int ch_stopc; int ch_startc; int ch_c_lflag; int ch_c_oflag; int ch_c_iflag; int ch_c_cflag; scalar_t__ ch_stops_sent; scalar_t__ ch_cached_lsr; int ch_flags; scalar_t__ ch_w_tail; scalar_t__ ch_w_head; scalar_t__ ch_e_tail; scalar_t__ ch_e_head; scalar_t__ ch_r_tail; scalar_t__ ch_r_head; void* ch_wqueue; void* ch_equeue; void* ch_rqueue; } ;
struct jsm_board {int pci_dev; TYPE_4__* bd_ops; } ;
struct TYPE_8__ {int (* param ) (struct jsm_channel*) ;int (* uart_init ) (struct jsm_channel*) ;int (* flush_uart_read ) (struct jsm_channel*) ;int (* flush_uart_write ) (struct jsm_channel*) ;} ;
struct TYPE_6__ {TYPE_1__* tty; } ;
struct TYPE_7__ {TYPE_2__ port; } ;
struct TYPE_5__ {struct ktermios* termios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct jsm_channel*) ;
 int FUNC_1 (int ,int ,int *,char*) ;
 void* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct jsm_channel*) ;
 int FUNC_4 (struct jsm_channel*) ;
 int FUNC_5 (struct jsm_channel*) ;
 int FUNC_6 (struct jsm_channel*) ;

__attribute__((used)) static int FUNC_7(struct uart_port *VAR_12)
{
 struct jsm_board *VAR_13;
 struct jsm_channel *VAR_14 = (struct jsm_channel *)VAR_12;
 struct ktermios *VAR_15;


 VAR_13 = VAR_14->ch_bd;





 VAR_14->ch_flags |= (VAR_0);



 if (!VAR_14->ch_rqueue) {
  VAR_14->ch_rqueue = FUNC_2(VAR_8, VAR_4);
  if (!VAR_14->ch_rqueue) {
   FUNC_1(VAR_6, VAR_3, &VAR_14->ch_bd->pci_dev,
    "unable to allocate read queue buf");
   return -VAR_1;
  }
 }
 if (!VAR_14->ch_equeue) {
  VAR_14->ch_equeue = FUNC_2(VAR_2, VAR_4);
  if (!VAR_14->ch_equeue) {
   FUNC_1(VAR_6, VAR_3, &VAR_14->ch_bd->pci_dev,
    "unable to allocate error queue buf");
   return -VAR_1;
  }
 }
 if (!VAR_14->ch_wqueue) {
  VAR_14->ch_wqueue = FUNC_2(VAR_11, VAR_4);
  if (!VAR_14->ch_wqueue) {
   FUNC_1(VAR_6, VAR_3, &VAR_14->ch_bd->pci_dev,
    "unable to allocate write queue buf");
   return -VAR_1;
  }
 }

 VAR_14->ch_flags &= ~(VAR_0);



 FUNC_1(VAR_7, VAR_5, &VAR_14->ch_bd->pci_dev,
  "jsm_open: initializing channel in open...\n");




 VAR_14->ch_r_head = VAR_14->ch_r_tail = 0;
 VAR_14->ch_e_head = VAR_14->ch_e_tail = 0;
 VAR_14->ch_w_head = VAR_14->ch_w_tail = 0;

 VAR_13->bd_ops->flush_uart_write(VAR_14);
 VAR_13->bd_ops->flush_uart_read(VAR_14);

 VAR_14->ch_flags = 0;
 VAR_14->ch_cached_lsr = 0;
 VAR_14->ch_stops_sent = 0;

 VAR_15 = VAR_12->state->port.tty->termios;
 VAR_14->ch_c_cflag = VAR_15->c_cflag;
 VAR_14->ch_c_iflag = VAR_15->c_iflag;
 VAR_14->ch_c_oflag = VAR_15->c_oflag;
 VAR_14->ch_c_lflag = VAR_15->c_lflag;
 VAR_14->ch_startc = VAR_15->c_cc[VAR_9];
 VAR_14->ch_stopc = VAR_15->c_cc[VAR_10];


 VAR_13->bd_ops->uart_init(VAR_14);




 VAR_13->bd_ops->param(VAR_14);

 FUNC_0(VAR_14);

 VAR_14->ch_open_count++;

 FUNC_1(VAR_7, VAR_5, &VAR_14->ch_bd->pci_dev, "finish\n");
 return 0;
}
