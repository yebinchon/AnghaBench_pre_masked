
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int irqreturn_t ;
struct TYPE_2__ {void* base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 TYPE_1__* VAR_20 ;
 int FUNC_7 (void*) ;
 int FUNC_8 (int,void*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_21, void *VAR_22)
{
 u32 VAR_23, VAR_24, VAR_25 = 0;

 if (VAR_22 != VAR_20->base)
  return VAR_17;

 VAR_24 = FUNC_7(VAR_20->base + VAR_18);
 VAR_23 = FUNC_7(VAR_20->base + VAR_19);


 VAR_23 &= VAR_24;

 if (FUNC_9(!VAR_23))
  return VAR_17;

 if (VAR_23 & VAR_0)
  VAR_25 |= FUNC_0();
 if (VAR_23 & (VAR_2 | VAR_3 | VAR_4 |
   VAR_5))
  VAR_25 |= FUNC_3(VAR_23);
 if (VAR_23 & VAR_6)
  VAR_25 |= FUNC_4(VAR_23);
 if (VAR_23 & VAR_7)
  VAR_25 |= FUNC_1();
 if (VAR_23 & VAR_8)
  VAR_25 |= FUNC_5();
 if (VAR_23 & VAR_1)
  VAR_25 |= FUNC_2();
 if (VAR_23 & (VAR_9 | VAR_10 |
   VAR_11 | VAR_12 |
   VAR_13 | VAR_14 |
   VAR_15))
  VAR_25 |= FUNC_6(VAR_23);


 FUNC_8(VAR_23, VAR_20->base + VAR_19);

 return VAR_16;
}
