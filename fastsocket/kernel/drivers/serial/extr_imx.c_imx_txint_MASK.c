
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int lock; scalar_t__ membase; scalar_t__ x_char; TYPE_1__* state; } ;
struct imx_port {TYPE_2__ port; } ;
struct circ_buf {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_5__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct imx_port*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (struct circ_buf*) ;
 scalar_t__ FUNC_5 (struct circ_buf*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_3, void *VAR_4)
{
 struct imx_port *VAR_5 = VAR_4;
 struct circ_buf *VAR_6 = &VAR_5->port.state->xmit;
 unsigned long VAR_7;

 FUNC_2(&VAR_5->port.lock,VAR_7);
 if (VAR_5->port.x_char)
 {

  FUNC_8(VAR_5->port.x_char, VAR_5->port.membase + VAR_1);
  goto out;
 }

 if (FUNC_5(VAR_6) || FUNC_6(&VAR_5->port)) {
  FUNC_0(&VAR_5->port);
  goto out;
 }

 FUNC_1(VAR_5);

 if (FUNC_4(VAR_6) < VAR_2)
  FUNC_7(&VAR_5->port);

out:
 FUNC_3(&VAR_5->port.lock,VAR_7);
 return VAR_0;
}
