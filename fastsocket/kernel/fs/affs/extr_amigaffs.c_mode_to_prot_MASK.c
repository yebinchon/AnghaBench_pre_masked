
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct inode {int i_mode; } ;
typedef int mode_t ;
struct TYPE_2__ {int i_protect; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
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

void
FUNC_1(struct inode *VAR_18)
{
 u32 VAR_19 = FUNC_0(VAR_18)->i_protect;
 mode_t VAR_20 = VAR_18->i_mode;

 if (!(VAR_20 & VAR_17))
  VAR_19 |= VAR_3;
 if (!(VAR_20 & VAR_11))
  VAR_19 |= VAR_4;
 if (!(VAR_20 & VAR_14))
  VAR_19 |= VAR_5;
 if (VAR_20 & VAR_15)
  VAR_19 |= VAR_0;
 if (VAR_20 & VAR_9)
  VAR_19 |= VAR_1;
 if (VAR_20 & VAR_12)
  VAR_19 |= VAR_2;
 if (VAR_20 & VAR_16)
  VAR_19 |= VAR_6;
 if (VAR_20 & VAR_10)
  VAR_19 |= VAR_7;
 if (VAR_20 & VAR_13)
  VAR_19 |= VAR_8;

 FUNC_0(VAR_18)->i_protect = VAR_19;
}
