
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u32_t ;
struct TYPE_2__ {int modulationType; int rateField; int rxInfo; } ;


 TYPE_1__* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int FUNC_0 (int *) ;

u32_t FUNC_1(zdev_t *VAR_6)
{
 u8_t VAR_7, VAR_8;
 u32_t VAR_9 = 130000;
 FUNC_0(VAR_6);

 switch (VAR_0->modulationType) {

 case 0x0:
  switch (VAR_0->rateField) {
  case 0x0a:
   VAR_9 = 1000;
   break;
  case 0x14:
   VAR_9 = 2000;

  case 0x37:
   VAR_9 = 5500;
   break;
  case 0x6e:
   VAR_9 = 11000;
   break;
  default:
   break;
  }
  break;

 case 0x1:
  if (VAR_0->rateField <= 15)
   VAR_9 = VAR_1[VAR_0->rateField];
  break;

 case 0x2:
  VAR_7 = VAR_0->rateField & 0x7F;
  VAR_8 = VAR_0->rateField & 0x80;
  if (VAR_7 <= 15) {
   if (VAR_8 != 0) {
    if ((VAR_0->rxInfo & 0x80) != 0) {

     VAR_9 = VAR_5[VAR_7];
    } else {

     VAR_9 = VAR_4[VAR_7];
    }
   } else {
    if ((VAR_0->rxInfo & 0x80) != 0) {

     VAR_9 = VAR_3[VAR_7];
    } else {

     VAR_9 = VAR_2[VAR_7];
    }
   }
  }
  break;
 default:
  break;
 }





 return VAR_9;
}
