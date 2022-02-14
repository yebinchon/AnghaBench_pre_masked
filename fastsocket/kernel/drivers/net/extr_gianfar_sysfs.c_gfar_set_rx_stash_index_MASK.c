
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct gfar_private {int device_flags; unsigned short rx_stash_size; unsigned short rx_stash_index; int rxlock; TYPE_1__* regs; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int attreli; } ;


 int FUNC_0 (unsigned short) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 struct gfar_private* FUNC_3 (int ) ;
 unsigned short FUNC_4 (char const*,int *,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_2,
           struct device_attribute *VAR_3,
           const char *VAR_4, size_t VAR_5)
{
 struct gfar_private *VAR_6 = FUNC_3(FUNC_7(VAR_2));
 unsigned short VAR_7 = FUNC_4(VAR_4, ((void*)0), 0);
 u32 VAR_8;
 unsigned long VAR_9;

 if (!(VAR_6->device_flags & VAR_1))
  return VAR_5;

 FUNC_5(&VAR_6->rxlock, VAR_9);
 if (VAR_7 > VAR_6->rx_stash_size)
  goto out;

 if (VAR_7 == VAR_6->rx_stash_index)
  goto out;

 VAR_6->rx_stash_index = VAR_7;

 VAR_8 = FUNC_1(&VAR_6->regs->attreli);
 VAR_8 &= ~VAR_0;
 VAR_8 |= FUNC_0(VAR_7);
 FUNC_2(&VAR_6->regs->attreli, VAR_9);

out:
 FUNC_6(&VAR_6->rxlock, VAR_9);

 return VAR_5;
}
