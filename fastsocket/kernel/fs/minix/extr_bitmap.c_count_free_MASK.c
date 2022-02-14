
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {unsigned int b_size; int* b_data; } ;
typedef unsigned int __u32 ;
typedef int __u16 ;


 scalar_t__* VAR_0 ;

__attribute__((used)) static unsigned long FUNC_0(struct buffer_head *VAR_1[], unsigned VAR_2, __u32 VAR_3)
{
 unsigned VAR_4, VAR_5, VAR_6 = 0;
 struct buffer_head *VAR_7;

 for (VAR_4=0; VAR_4<VAR_2-1; VAR_4++) {
  if (!(VAR_7=VAR_1[VAR_4]))
   return(0);
  for (VAR_5=0; VAR_5<VAR_7->b_size; VAR_5++)
   VAR_6 += VAR_0[VAR_7->b_data[VAR_5] & 0xf]
    + VAR_0[(VAR_7->b_data[VAR_5]>>4) & 0xf];
 }

 if (VAR_2==0 || !(VAR_7=VAR_1[VAR_2-1]))
  return(0);
 VAR_4 = ((VAR_3 - (VAR_2-1) * VAR_7->b_size * 8) / 16) * 2;
 for (VAR_5=0; VAR_5<VAR_4; VAR_5++) {
  VAR_6 += VAR_0[VAR_7->b_data[VAR_5] & 0xf]
   + VAR_0[(VAR_7->b_data[VAR_5]>>4) & 0xf];
 }

 VAR_4 = VAR_3%16;
 if (VAR_4!=0) {
  VAR_4 = *(__u16 *)(&VAR_7->b_data[VAR_5]) | ~((1<<VAR_4) - 1);
  VAR_6 += VAR_0[VAR_4 & 0xf] + VAR_0[(VAR_4>>4) & 0xf];
  VAR_6 += VAR_0[(VAR_4>>8) & 0xf] + VAR_0[(VAR_4>>12) & 0xf];
 }
 return(VAR_6);
}
