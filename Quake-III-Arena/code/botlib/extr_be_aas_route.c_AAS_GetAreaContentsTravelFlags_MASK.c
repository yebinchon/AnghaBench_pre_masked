
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* areasettings; } ;
struct TYPE_3__ {int contents; int areaflags; } ;


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
 TYPE_2__ VAR_15 ;

int FUNC_0(int VAR_16)
{
 int VAR_17, VAR_18;

 VAR_17 = VAR_15.areasettings[VAR_16].contents;
 VAR_18 = 0;
 if (VAR_17 & VAR_5)
  VAR_18 |= VAR_14;
 else if (VAR_17 & VAR_4)
  VAR_18 |= VAR_13;
 else if (VAR_17 & VAR_1)
  VAR_18 |= VAR_10;
 else
  VAR_18 |= VAR_7;
 if (VAR_17 & VAR_0)
  VAR_18 |= VAR_9;
 if (VAR_17 & VAR_2)
  VAR_18 |= VAR_11;
 if (VAR_17 & VAR_3)
  VAR_18 |= VAR_12;
 if (VAR_15.areasettings[VAR_16].areaflags & VAR_6)
  VAR_18 |= VAR_8;
 return VAR_18;
}
