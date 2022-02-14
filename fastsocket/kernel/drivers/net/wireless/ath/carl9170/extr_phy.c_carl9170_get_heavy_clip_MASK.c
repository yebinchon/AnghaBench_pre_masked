
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ar9170_calctl_edges {int channel; int power_flags; } ;
struct ar9170 {int dummy; } ;
typedef enum carl9170_bw { ____Placeholder_carl9170_bw } carl9170_bw ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static u8 FUNC_0(struct ar9170 *VAR_4, u32 VAR_5,
 enum carl9170_bw VAR_6, struct ar9170_calctl_edges VAR_7[])
{
 u8 VAR_8;
 int VAR_9;
 u8 VAR_10 = 0;

 if (VAR_5 < 3000)
  VAR_8 = VAR_5 - 2300;
 else
  VAR_8 = (VAR_5 - 4800) / 5;

 if (VAR_6 == VAR_3 || VAR_6 == VAR_2)
  VAR_10 |= 0xf0;

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  if (VAR_7[VAR_9].channel == 0xff)
   break;
  if (VAR_8 == VAR_7[VAR_9].channel) {
   if (!(VAR_7[VAR_9].power_flags & VAR_1))
    VAR_10 |= 0x0f;
   break;
  }
 }

 return VAR_10;
}
