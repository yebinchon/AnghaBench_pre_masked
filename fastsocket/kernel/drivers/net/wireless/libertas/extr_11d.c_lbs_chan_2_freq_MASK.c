
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef size_t u16 ;
struct chan_freq_power {scalar_t__ channel; int freq; } ;


 size_t FUNC_0 (struct chan_freq_power*) ;
 struct chan_freq_power* VAR_0 ;

u32 FUNC_1(u8 VAR_1)
{
 struct chan_freq_power *VAR_2;
 u16 VAR_3;
 u32 VAR_4 = 0;

 VAR_2 = VAR_0;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (VAR_1 == VAR_2[VAR_3].channel)
   VAR_4 = VAR_2[VAR_3].freq;
 }

 return VAR_4;
}
