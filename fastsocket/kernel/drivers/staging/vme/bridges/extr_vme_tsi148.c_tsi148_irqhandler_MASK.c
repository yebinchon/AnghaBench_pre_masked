
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 TYPE_1__* VAR_25 ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_26, void *VAR_27)
{
 u32 VAR_28, VAR_29, VAR_30 = 0;


 VAR_29 = FUNC_0(VAR_25->base + VAR_3);
 VAR_28 = FUNC_0(VAR_25->base + VAR_4);


 VAR_28 &= VAR_29;

 if (FUNC_9(!VAR_28)) {
  return VAR_1;
 }



 if (VAR_28 & (VAR_6 | VAR_5))
  VAR_30 |= FUNC_2(VAR_28);


 if (VAR_28 & (VAR_18 | VAR_17 |
   VAR_16 | VAR_15))
  VAR_30 |= FUNC_4(VAR_28);


 if (VAR_28 & (VAR_22 | VAR_21 |
   VAR_20 | VAR_19))
  VAR_30 |= FUNC_5(VAR_28);


 if (VAR_28 & VAR_23)
  VAR_30 |= FUNC_6();


 if (VAR_28 & VAR_24)
  VAR_30 |= FUNC_7();


 if (VAR_28 & VAR_7)
  VAR_30 |= FUNC_3();


 if (VAR_28 & (VAR_14 | VAR_13 |
   VAR_12 | VAR_11 |
   VAR_10 | VAR_9 |
   VAR_8))
  VAR_30 |= FUNC_8(VAR_28);


 FUNC_1(VAR_30, VAR_25->base + VAR_2);

 return VAR_0;
}
