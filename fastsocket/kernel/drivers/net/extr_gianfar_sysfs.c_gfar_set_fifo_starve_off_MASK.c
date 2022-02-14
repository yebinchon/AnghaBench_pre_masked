
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct gfar_private {unsigned int fifo_starve_off; int txlock; TYPE_1__* regs; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int fifo_tx_starve_shutoff; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned int) ;
 struct gfar_private* FUNC_2 (int ) ;
 unsigned int FUNC_3 (char const*,int *,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2,
     struct device_attribute *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 struct gfar_private *VAR_6 = FUNC_2(FUNC_6(VAR_2));
 unsigned int VAR_7 = FUNC_3(VAR_4, ((void*)0), 0);
 u32 VAR_8;
 unsigned long VAR_9;

 if (VAR_7 > VAR_1)
  return VAR_5;

 FUNC_4(&VAR_6->txlock, VAR_9);

 VAR_6->fifo_starve_off = VAR_7;

 VAR_8 = FUNC_0(&VAR_6->regs->fifo_tx_starve_shutoff);
 VAR_8 &= ~VAR_0;
 VAR_8 |= VAR_7;
 FUNC_1(&VAR_6->regs->fifo_tx_starve_shutoff, VAR_8);

 FUNC_5(&VAR_6->txlock, VAR_9);

 return VAR_5;
}
