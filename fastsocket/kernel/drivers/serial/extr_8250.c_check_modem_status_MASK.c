
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int rng; } ;
struct TYPE_10__ {TYPE_3__* state; TYPE_1__ icount; } ;
struct uart_8250_port {unsigned int msr_saved_flags; int ier; TYPE_4__ port; } ;
struct TYPE_8__ {int delta_msr_wait; } ;
struct TYPE_9__ {TYPE_2__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int FUNC_0 (struct uart_8250_port*,int ) ;
 int FUNC_1 (TYPE_4__*,unsigned int) ;
 int FUNC_2 (TYPE_4__*,unsigned int) ;
 int FUNC_3 (TYPE_4__*,unsigned int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static unsigned int FUNC_5(struct uart_8250_port *VAR_10)
{
 unsigned int VAR_11 = FUNC_0(VAR_10, VAR_1);

 VAR_11 |= VAR_10->msr_saved_flags;
 VAR_10->msr_saved_flags = 0;
 if (VAR_11 & VAR_2 && VAR_10->ier & VAR_0 &&
     VAR_10->port.state != ((void*)0)) {
  if (VAR_11 & VAR_9)
   VAR_10->port.icount.rng++;
  if (VAR_11 & VAR_7)
   FUNC_3(&VAR_10->port, VAR_11 & VAR_8);
  if (VAR_11 & VAR_6)
   FUNC_2(&VAR_10->port, VAR_11 & VAR_4);
  if (VAR_11 & VAR_5)
   FUNC_1(&VAR_10->port, VAR_11 & VAR_3);

  FUNC_4(&VAR_10->port.state->port.delta_msr_wait);
 }

 return VAR_11;
}
