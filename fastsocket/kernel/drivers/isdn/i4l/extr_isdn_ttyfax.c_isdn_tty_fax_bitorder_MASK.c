
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int len; int* data; } ;
struct TYPE_5__ {TYPE_1__* fax; } ;
typedef TYPE_2__ modem_info ;
typedef int __u8 ;
struct TYPE_4__ {int bor; } ;



void
FUNC_0(modem_info * VAR_0, struct sk_buff *VAR_1)
{
 __u8 VAR_2;
 __u8 VAR_3;
 __u8 VAR_4;
 __u8 VAR_5;
 int VAR_6;

 if (!VAR_0->fax->bor) {
  for (VAR_6 = 0; VAR_6 < VAR_1->len; VAR_6++) {
   VAR_5 = VAR_1->data[VAR_6];
   for (
        VAR_2 = 0x80, VAR_3 = 0x01;
        VAR_2 > VAR_3;
        VAR_2 >>= 1, VAR_3 <<= 1
       ) {
    VAR_4 = (VAR_5 & VAR_2);
    if (VAR_5 & VAR_3)
     VAR_5 |= VAR_2;
    else
     VAR_5 &= ~VAR_2;
    if (VAR_4)
     VAR_5 |= VAR_3;
    else
     VAR_5 &= ~VAR_3;

   }
   VAR_1->data[VAR_6] = VAR_5;
  }
 }
}
