
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_device {int flags; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

void FUNC_2(struct radeon_device *VAR_16, int VAR_17)
{
 uint32_t VAR_18, VAR_19;

 if (VAR_16->flags & VAR_0)
  return;

 if (!(VAR_16->flags & VAR_1))
  return;



 switch (VAR_17) {
 case 0:
  VAR_19 = VAR_6;
  break;
 case 1:
  VAR_19 = VAR_7;
  break;
 case 2:
  VAR_19 = VAR_10;
  break;
 case 4:
  VAR_19 = VAR_11;
  break;
 case 8:
  VAR_19 = VAR_12;
  break;
 case 12:
  VAR_19 = VAR_8;
  break;
 case 16:
 default:
  VAR_19 = VAR_9;
  break;
 }

 VAR_18 = FUNC_0(VAR_2);

 if ((VAR_18 & VAR_4) ==
     (VAR_19 << VAR_5))
  return;

 VAR_18 &= ~(VAR_3 |
        VAR_14 |
        VAR_13 |
        VAR_15);
 VAR_18 |= VAR_19;
 FUNC_1(VAR_2, VAR_18);
 FUNC_1(VAR_2, (VAR_18 |
           VAR_14));


 VAR_18 = FUNC_0(VAR_2);
 while (VAR_18 == 0xffffffff)
  VAR_18 = FUNC_0(VAR_2);

}
