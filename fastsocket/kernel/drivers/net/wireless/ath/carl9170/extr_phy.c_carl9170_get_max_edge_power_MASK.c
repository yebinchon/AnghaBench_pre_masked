
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ar9170_calctl_edges {int channel; int power_flags; } ;
struct ar9170 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u8 FUNC_0(struct ar9170 *VAR_3,
 u32 VAR_4, struct ar9170_calctl_edges VAR_5[])
{
 int VAR_6;
 u8 VAR_7 = VAR_0;
 u8 VAR_8;
 if (VAR_4 < 3000)
  VAR_8 = VAR_4 - 2300;
 else
  VAR_8 = (VAR_4 - 4800) / 5;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (VAR_5[VAR_6].channel == 0xff)
   break;
  if (VAR_8 == VAR_5[VAR_6].channel) {

   VAR_7 = VAR_5[VAR_6].power_flags & ~VAR_2;
   break;
  }
  if (VAR_6 > 0 && VAR_8 < VAR_5[VAR_6].channel) {
   if (VAR_8 > VAR_5[VAR_6 - 1].channel &&
       VAR_5[VAR_6 - 1].power_flags &
       VAR_2) {

    VAR_7 = VAR_5[VAR_6 - 1].power_flags &
     ~VAR_2;
   }
   break;
  }
 }

 if (VAR_6 == VAR_1) {
  if (VAR_8 > VAR_5[VAR_6 - 1].channel &&
      VAR_5[VAR_6 - 1].power_flags & VAR_2) {

   VAR_7 = VAR_5[VAR_6 - 1].power_flags &
    ~VAR_2;
  }
 }
 return VAR_7;
}
