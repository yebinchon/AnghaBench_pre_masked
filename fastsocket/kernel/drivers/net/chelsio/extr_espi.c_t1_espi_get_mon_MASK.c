
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct peespi {int misc_ctrl; int lock; } ;
struct TYPE_4__ {scalar_t__ regs; struct peespi* espi; } ;
typedef TYPE_1__ adapter_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,scalar_t__) ;

u32 FUNC_7(adapter_t *VAR_3, u32 VAR_4, u8 VAR_5)
{
 struct peespi *VAR_6 = VAR_3->espi;
 u32 VAR_7;

 if (!FUNC_1(VAR_3))
  return 0;

 VAR_7 = FUNC_0((VAR_4 & 0x3c) >> 2);
 if (!VAR_5) {
  if (!FUNC_4(&VAR_6->lock))
   return 0;
 } else
  FUNC_3(&VAR_6->lock);

 if ((VAR_7 != (VAR_6->misc_ctrl & VAR_2))) {
  FUNC_6(((VAR_6->misc_ctrl & ~VAR_2) | VAR_7),
         VAR_3->regs + VAR_0);
  VAR_7 = FUNC_2(VAR_3->regs + VAR_1);
  FUNC_6(VAR_6->misc_ctrl, VAR_3->regs + VAR_0);
 } else
  VAR_7 = FUNC_2(VAR_3->regs + VAR_1);
 FUNC_5(&VAR_6->lock);
 return VAR_7;
}
