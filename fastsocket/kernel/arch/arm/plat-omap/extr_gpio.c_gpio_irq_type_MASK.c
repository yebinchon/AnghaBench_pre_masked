
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_bank {int lock; } ;
struct TYPE_2__ {unsigned int status; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (struct gpio_bank*,int ,unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned int) ;
 struct gpio_bank* FUNC_6 (unsigned int) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(unsigned VAR_11, unsigned VAR_12)
{
 struct gpio_bank *VAR_13;
 unsigned VAR_14;
 int VAR_15;
 unsigned long VAR_16;

 if (!FUNC_4() && VAR_11 > VAR_2)
  VAR_14 = FUNC_0(VAR_11 - VAR_2);
 else
  VAR_14 = VAR_11 - VAR_1;

 if (FUNC_3(VAR_14) < 0)
  return -VAR_0;

 if (VAR_12 & ~VAR_7)
  return -VAR_0;


 if (!FUNC_4()
   && (VAR_12 & (VAR_6|VAR_5)))
  return -VAR_0;

 VAR_13 = FUNC_6(VAR_11);
 FUNC_7(&VAR_13->lock, VAR_16);
 VAR_15 = FUNC_2(VAR_13, FUNC_5(VAR_14), VAR_12);
 if (VAR_15 == 0) {
  VAR_10[VAR_11].status &= ~VAR_7;
  VAR_10[VAR_11].status |= VAR_12;
 }
 FUNC_8(&VAR_13->lock, VAR_16);

 if (VAR_12 & (VAR_6 | VAR_5))
  FUNC_1(VAR_11, VAR_9);
 else if (VAR_12 & (VAR_3 | VAR_4))
  FUNC_1(VAR_11, VAR_8);

 return VAR_15;
}
