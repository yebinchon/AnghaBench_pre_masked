
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct jsm_channel {int ch_flags; int ch_lock; TYPE_2__* ch_bd; TYPE_1__* ch_neo_uart; } ;
struct TYPE_4__ {int pci_dev; } ;
struct TYPE_3__ {int lcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int *,char*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int,int *) ;

__attribute__((used)) static void FUNC_6(struct jsm_channel *VAR_5, int VAR_6)
{
 unsigned long VAR_7;

 FUNC_3(&VAR_5->ch_lock, VAR_7);


 if (VAR_5->ch_flags & VAR_0) {
  u8 VAR_8 = FUNC_2(&VAR_5->ch_neo_uart->lcr);
  FUNC_5((VAR_8 & ~VAR_3), &VAR_5->ch_neo_uart->lcr);

  VAR_5->ch_flags &= ~(VAR_0);
  FUNC_0(VAR_2, VAR_1, &VAR_5->ch_bd->pci_dev,
    "clear break Finishing UART_LCR_SBC! finished: %lx\n", VAR_4);


  FUNC_1(VAR_5->ch_bd);
 }
 FUNC_4(&VAR_5->ch_lock, VAR_7);
}
