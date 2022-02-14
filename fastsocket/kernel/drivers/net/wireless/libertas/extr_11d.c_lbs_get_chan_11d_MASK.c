
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct chan_freq_power {scalar_t__ channel; } ;


 scalar_t__ FUNC_0 (struct chan_freq_power*) ;
 struct chan_freq_power* VAR_0 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static u8 FUNC_2(u8 VAR_1, u8 VAR_2, u8 *VAR_3)

{
 u8 VAR_4;
 struct chan_freq_power *VAR_5;
 u8 VAR_6;

 VAR_5 = VAR_0;
 VAR_6 = FUNC_0(VAR_0);

 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
  if ((VAR_5 + VAR_4)->channel == VAR_1) {
   FUNC_1("firstchan found\n");
   break;
  }
 }

 if (VAR_4 < VAR_6) {

  if (VAR_4 + VAR_2 < VAR_6) {
   *VAR_3 = (VAR_5 + VAR_4 + VAR_2)->channel;
   return 1;
  }
 }

 return 0;
}
