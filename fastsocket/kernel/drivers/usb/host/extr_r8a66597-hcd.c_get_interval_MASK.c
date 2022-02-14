
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct urb {TYPE_1__* dev; } ;
typedef int __u8 ;
struct TYPE_2__ {scalar_t__ speed; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static u16 FUNC_0(struct urb *VAR_2, __u8 VAR_3)
{
 u16 VAR_4 = 1;
 int VAR_5;

 if (VAR_2->dev->speed == VAR_1) {
  if (VAR_3 > VAR_0)
   VAR_4 = VAR_0;
  else
   VAR_4 = VAR_3 ? VAR_3 - 1 : 0;
 } else {
  if (VAR_3 > 128) {
   VAR_4 = VAR_0;
  } else {

   for (VAR_5 = 0; VAR_5 < 7; VAR_5++) {
    if ((1 << VAR_5) < VAR_3 &&
        (1 << (VAR_5 + 1) > VAR_3))
     VAR_4 = 1 << VAR_5;
   }
  }
 }

 return VAR_4;
}
