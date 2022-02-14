
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ebus_dma_info {int flags; scalar_t__ regs; int name; int callback; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ebus_dma_info*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,scalar_t__) ;

int FUNC_3(struct ebus_dma_info *VAR_7)
{
 u32 VAR_8;

 if (!VAR_7->regs)
  return -VAR_6;
 if (VAR_7->flags & ~(VAR_5 |
    VAR_4))
  return -VAR_6;
 if ((VAR_7->flags & VAR_5) && !VAR_7->callback)
  return -VAR_6;
 if (!FUNC_1(VAR_7->name))
  return -VAR_6;

 FUNC_0(VAR_7, 1);

 VAR_8 = VAR_1 | VAR_2;

 if (VAR_7->flags & VAR_4)
  VAR_8 |= VAR_3;

 FUNC_2(VAR_8, VAR_7->regs + VAR_0);

 return 0;
}
