
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int lock; } ;
struct ktermios {int * c_cc; int c_lflag; int c_oflag; int c_iflag; int c_cflag; } ;
struct jsm_channel {TYPE_2__* ch_bd; int ch_stopc; int ch_startc; int ch_c_lflag; int ch_c_oflag; int ch_c_iflag; int ch_c_cflag; } ;
struct TYPE_4__ {TYPE_1__* bd_ops; } ;
struct TYPE_3__ {int (* param ) (struct jsm_channel*) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct jsm_channel*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct jsm_channel*) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_2,
     struct ktermios *VAR_3,
     struct ktermios *VAR_4)
{
 unsigned long VAR_5;
 struct jsm_channel *VAR_6 = (struct jsm_channel *)VAR_2;

 FUNC_1(&VAR_2->lock, VAR_5);
 VAR_6->ch_c_cflag = VAR_3->c_cflag;
 VAR_6->ch_c_iflag = VAR_3->c_iflag;
 VAR_6->ch_c_oflag = VAR_3->c_oflag;
 VAR_6->ch_c_lflag = VAR_3->c_lflag;
 VAR_6->ch_startc = VAR_3->c_cc[VAR_0];
 VAR_6->ch_stopc = VAR_3->c_cc[VAR_1];

 VAR_6->ch_bd->bd_ops->param(VAR_6);
 FUNC_0(VAR_6);
 FUNC_2(&VAR_2->lock, VAR_5);
}
