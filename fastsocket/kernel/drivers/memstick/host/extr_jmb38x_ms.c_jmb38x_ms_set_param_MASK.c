
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct memstick_host {int dummy; } ;
struct jmb38x_ms_host {TYPE_1__* chip; scalar_t__ addr; int id; } ;
typedef enum memstick_param { ____Placeholder_memstick_param } memstick_param ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {TYPE_2__* pdev; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;

 int VAR_16 ;
 int VAR_17 ;

 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 unsigned int VAR_22 ;
 scalar_t__ VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 int VAR_27 ;
 unsigned int VAR_28 ;
 unsigned int VAR_29 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct jmb38x_ms_host*) ;
 struct jmb38x_ms_host* FUNC_2 (struct memstick_host*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,int ,unsigned int*) ;
 int FUNC_5 (TYPE_2__*,int ,unsigned int) ;
 unsigned int FUNC_6 (scalar_t__) ;
 int FUNC_7 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct memstick_host *VAR_30,
          enum memstick_param VAR_31,
          int VAR_32)
{
 struct jmb38x_ms_host *VAR_33 = FUNC_2(VAR_30);
 unsigned int VAR_34 = FUNC_6(VAR_33->addr + VAR_4);
 unsigned int VAR_35 = VAR_1, VAR_36 = 0;
 int VAR_37 = 0;

 switch (VAR_31) {
 case 128:
  if (VAR_32 == VAR_19) {
   VAR_37 = FUNC_1(VAR_33);
   if (VAR_37)
    return VAR_37;

   VAR_34 = 7;
   VAR_34 |= VAR_12
        | VAR_5
        | VAR_7
        | VAR_15;
   FUNC_7(VAR_34, VAR_33->addr + VAR_4);

   FUNC_7(VAR_33->id ? VAR_26
     : VAR_25,
          VAR_33->addr + VAR_23);

   FUNC_7(VAR_22,
          VAR_33->addr + VAR_21);

   FUNC_3(10);
   FUNC_0(&VAR_33->chip->pdev->dev, "power on\n");
  } else if (VAR_32 == VAR_18) {
   VAR_34 &= ~(VAR_12
          | VAR_5);
   FUNC_7(VAR_34, VAR_33->addr + VAR_4);
   FUNC_7(0, VAR_33->addr + VAR_21);
   FUNC_7(VAR_24, VAR_33->addr + VAR_23);
   FUNC_0(&VAR_33->chip->pdev->dev, "power off\n");
  } else
   return -VAR_3;
  break;
 case 129:
  VAR_34 &= ~(3 << VAR_11);
  FUNC_4(VAR_33->chip->pdev,
          VAR_27,
          &VAR_36);
  VAR_36 &= VAR_33->id ? ~VAR_29
     : ~VAR_28;

  if (VAR_32 == VAR_20) {
   VAR_34 &= ~VAR_6;
   VAR_34 &= ~VAR_14;
   VAR_34 |= VAR_10
        << VAR_11;
   VAR_34 |= VAR_13;
   VAR_35 = VAR_1;
  } else if (VAR_32 == VAR_16) {
   VAR_34 |= VAR_6 | VAR_14;
   VAR_34 |= VAR_8
        << VAR_11;
   VAR_34 &= ~VAR_13;
   VAR_35 = VAR_1;
   VAR_36 |= VAR_33->id ? (4 << 12) : (4 << 8);
  } else if (VAR_32 == VAR_17) {
   VAR_34 |= VAR_6;
   VAR_34 |= VAR_9
        << VAR_11;
   VAR_34 &= ~(VAR_13 | VAR_14);
   VAR_35 = VAR_2;
  } else
   return -VAR_3;

  FUNC_7(VAR_34, VAR_33->addr + VAR_4);
  FUNC_7(VAR_35, VAR_33->addr + VAR_0);
  FUNC_5(VAR_33->chip->pdev,
           VAR_27,
           VAR_36);
  break;
 };
 return 0;
}
