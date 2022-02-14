
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct chan_freq_power {int channel; scalar_t__ unsupported; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 struct chan_freq_power* FUNC_2 (int,int*) ;

__attribute__((used)) static u8 FUNC_3(u8 VAR_1, u8 VAR_2)
{
 struct chan_freq_power *VAR_3;
 int VAR_4;
 u8 VAR_5;
 int VAR_6 = 0;

 FUNC_0(VAR_0);

 VAR_3 = FUNC_2(VAR_1, &VAR_4);
 if (VAR_3 == ((void*)0))
  return 0;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  if (VAR_2 == (VAR_3 + VAR_5)->channel) {

   if ((VAR_3 + VAR_5)->unsupported) {
    VAR_6 = 0;
   } else {
    VAR_6 = 1;
   }
   goto done;
  }
 }



done:
 FUNC_1(VAR_0, "ret %d", VAR_6);
 return VAR_6;
}
