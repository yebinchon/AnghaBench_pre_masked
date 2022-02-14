
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u32 ;
struct brcms_c_info {int filter_flags; int hw; } ;


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
 int FUNC_0 (int ,int,int) ;

void FUNC_1(struct brcms_c_info *VAR_10, uint VAR_11)
{
 u32 VAR_12 = 0;

 VAR_10->filter_flags = VAR_11;

 if (VAR_11 & (VAR_4 | VAR_3))
  VAR_12 |= VAR_9;

 if (VAR_11 & VAR_0)
  VAR_12 |= VAR_6;

 if (VAR_11 & VAR_2)
  VAR_12 |= VAR_7;

 if (VAR_11 & (VAR_1 | VAR_5))
  VAR_12 |= VAR_8;

 FUNC_0(VAR_10->hw,
  VAR_9 | VAR_6 |
  VAR_8 | VAR_7,
  VAR_12);
}
