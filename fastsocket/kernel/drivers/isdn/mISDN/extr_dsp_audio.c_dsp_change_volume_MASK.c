
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct sk_buff {int len; size_t* data; } ;


 size_t** VAR_0 ;

void
FUNC_0(struct sk_buff *VAR_1, int VAR_2)
{
 u8 *VAR_3;
 int VAR_4, VAR_5;
 u8 *VAR_6;
 int VAR_7;

 if (VAR_2 == 0)
  return;


 if (VAR_2 < 0) {
  VAR_7 = VAR_2 + 8;
  if (VAR_7 < 0)
   VAR_7 = 0;
 } else {
  VAR_7 = VAR_2 + 7;
  if (VAR_7 > 15)
   VAR_7 = 15;
 }
 VAR_3 = VAR_0[VAR_7];
 VAR_4 = 0;
 VAR_5 = VAR_1->len;
 VAR_6 = VAR_1->data;

 while (VAR_4 < VAR_5) {
  *VAR_6 = VAR_3[*VAR_6];
  VAR_6++;
  VAR_4++;
 }
}
