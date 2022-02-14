
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinmux_info {TYPE_1__* gpios; } ;
struct pinmux_data_reg {int dummy; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct pinmux_info* FUNC_1 (struct gpio_chip*) ;
 scalar_t__ FUNC_2 (struct pinmux_info*,unsigned int,struct pinmux_data_reg**,int*) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (struct pinmux_info*,unsigned int,int,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_8, unsigned VAR_9)
{
 struct pinmux_info *VAR_10 = FUNC_1(VAR_8);
 struct pinmux_data_reg *VAR_11;
 unsigned long VAR_12;
 int VAR_13, VAR_14, VAR_15;

 VAR_14 = -VAR_0;

 if (!VAR_10)
  goto err_out;

 FUNC_4(&VAR_7, VAR_12);

 if ((VAR_10->gpios[VAR_9].flags & VAR_3) != VAR_6)
  goto err_unlock;



 if (FUNC_2(VAR_10, VAR_9, &VAR_11, &VAR_13) != 0)
  VAR_15 = VAR_4;
 else
  VAR_15 = VAR_5;

 if (VAR_15 == VAR_4) {
  if (FUNC_3(VAR_10, VAR_9,
           VAR_15,
           VAR_1) != 0)
   goto err_unlock;

  if (FUNC_3(VAR_10, VAR_9,
           VAR_15,
           VAR_2) != 0)
   FUNC_0();
 }

 VAR_10->gpios[VAR_9].flags &= ~VAR_3;
 VAR_10->gpios[VAR_9].flags |= VAR_15;

 VAR_14 = 0;
 err_unlock:
 FUNC_5(&VAR_7, VAR_12);
 err_out:
 return VAR_14;
}
