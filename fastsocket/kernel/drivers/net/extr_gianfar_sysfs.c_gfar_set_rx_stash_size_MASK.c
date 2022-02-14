
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct gfar_private {int device_flags; unsigned int rx_buffer_size; unsigned int rx_stash_size; int rxlock; TYPE_1__* regs; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int attr; int attreli; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 struct gfar_private* FUNC_3 (int ) ;
 unsigned int FUNC_4 (char const*,int *,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_3,
          struct device_attribute *VAR_4,
          const char *VAR_5, size_t VAR_6)
{
 struct gfar_private *VAR_7 = FUNC_3(FUNC_7(VAR_3));
 unsigned int VAR_8 = FUNC_4(VAR_5, ((void*)0), 0);
 u32 VAR_9;
 unsigned long VAR_10;

 if (!(VAR_7->device_flags & VAR_2))
  return VAR_6;

 FUNC_5(&VAR_7->rxlock, VAR_10);
 if (VAR_8 > VAR_7->rx_buffer_size)
  goto out;

 if (VAR_8 == VAR_7->rx_stash_size)
  goto out;

 VAR_7->rx_stash_size = VAR_8;

 VAR_9 = FUNC_1(&VAR_7->regs->attreli);
 VAR_9 &= ~VAR_0;
 VAR_9 |= FUNC_0(VAR_8);
 FUNC_2(&VAR_7->regs->attreli, VAR_9);


 VAR_9 = FUNC_1(&VAR_7->regs->attr);

 if (VAR_8)
  VAR_9 |= VAR_1;
 else
  VAR_9 &= ~(VAR_1);

 FUNC_2(&VAR_7->regs->attr, VAR_9);

out:
 FUNC_6(&VAR_7->rxlock, VAR_10);

 return VAR_6;
}
