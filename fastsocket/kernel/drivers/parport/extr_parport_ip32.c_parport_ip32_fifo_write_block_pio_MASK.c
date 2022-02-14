
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int fifo; } ;
struct parport_ip32_private {int irq_mode; TYPE_1__ regs; } ;
struct parport {scalar_t__ irq; TYPE_2__* physport; } ;
struct TYPE_4__ {struct parport_ip32_private* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (struct parport*) ;
 unsigned int FUNC_1 (struct parport*) ;
 int FUNC_2 (int const,int ) ;
 int FUNC_3 (int ,int const*,unsigned int) ;

__attribute__((used)) static size_t FUNC_4(struct parport *VAR_3,
      const void *VAR_4, size_t VAR_5)
{
 struct parport_ip32_private * const VAR_6 = VAR_3->physport->private_data;
 const u8 *VAR_7 = VAR_4;
 size_t VAR_8 = VAR_5;

 VAR_6->irq_mode = VAR_1;

 while (VAR_8 > 0) {
  unsigned int VAR_9;

  VAR_9 = (VAR_3->irq == VAR_2) ?
   FUNC_1(VAR_3) :
   FUNC_0(VAR_3);
  if (VAR_9 == 0)
   break;
  if (VAR_9 > VAR_8)
   VAR_9 = VAR_8;
  if (VAR_9 == 1) {
   FUNC_2(*VAR_7, VAR_6->regs.fifo);
   VAR_7++, VAR_8--;
  } else {
   FUNC_3(VAR_6->regs.fifo, VAR_7, VAR_9);
   VAR_7 += VAR_9, VAR_8 -= VAR_9;
  }
 }

 VAR_6->irq_mode = VAR_0;

 return VAR_5 - VAR_8;
}
