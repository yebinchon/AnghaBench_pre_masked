
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tx; } ;
struct TYPE_7__ {TYPE_1__ icount; scalar_t__ membase; TYPE_2__* state; } ;
struct imx_port {TYPE_3__ port; } ;
struct circ_buf {size_t tail; int * buf; } ;
struct TYPE_6__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct circ_buf*) ;
 scalar_t__ FUNC_3 (struct circ_buf*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_6(struct imx_port *VAR_5)
{
 struct circ_buf *VAR_6 = &VAR_5->port.state->xmit;

 while (!(FUNC_1(VAR_5->port.membase + VAR_2) & VAR_3)) {


  FUNC_5(VAR_6->buf[VAR_6->tail], VAR_5->port.membase + VAR_1);
  VAR_6->tail = (VAR_6->tail + 1) & (VAR_0 - 1);
  VAR_5->port.icount.tx++;
  if (FUNC_3(VAR_6))
   break;
 }

 if (FUNC_2(VAR_6) < VAR_4)
  FUNC_4(&VAR_5->port);

 if (FUNC_3(VAR_6))
  FUNC_0(&VAR_5->port);
}
