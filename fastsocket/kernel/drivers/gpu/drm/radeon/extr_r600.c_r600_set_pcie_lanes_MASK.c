
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int flags; scalar_t__ family; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ VAR_0 ;
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
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

void FUNC_4(struct radeon_device *VAR_22, int VAR_23)
{
 u32 VAR_24, VAR_25, VAR_26;

 if (VAR_22->flags & VAR_8)
  return;

 if (!(VAR_22->flags & VAR_9))
  return;


 if (FUNC_0(VAR_22))
  return;



 switch (VAR_23) {
 case 0:
  VAR_25 = VAR_14;
  break;
 case 1:
  VAR_25 = VAR_15;
  break;
 case 2:
  VAR_25 = VAR_18;
  break;
 case 4:
  VAR_25 = VAR_19;
  break;
 case 8:
  VAR_25 = VAR_20;
  break;
 case 12:
  VAR_25 = VAR_16;
  break;
 case 16:
 default:
  VAR_25 = VAR_17;
  break;
 }

 VAR_24 = FUNC_2(VAR_10);

 if ((VAR_24 & VAR_12) ==
     (VAR_25 << VAR_13))
  return;

 if (VAR_24 & VAR_4)
  return;

 VAR_24 &= ~(VAR_11 |
        VAR_21 |
        VAR_2 |
        VAR_1);
 VAR_24 |= VAR_25;

 FUNC_3(VAR_10, VAR_24);





        if (VAR_24 & VAR_3)
  VAR_24 |= VAR_2 | VAR_5;
        else
  VAR_24 |= VAR_1;

 FUNC_3(VAR_10, (VAR_24 |
             VAR_21));

        if (VAR_22->family >= VAR_0)
  VAR_26 = VAR_7;
        else
  VAR_26 = VAR_6;


        VAR_24 = FUNC_1(VAR_26);
        while (VAR_24 == 0xffffffff)
  VAR_24 = FUNC_1(VAR_26);

}
