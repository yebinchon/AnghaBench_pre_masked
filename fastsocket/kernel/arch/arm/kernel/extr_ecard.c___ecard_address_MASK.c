
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int slot_no; } ;
typedef TYPE_1__ ecard_t ;
typedef int card_type_t ;
typedef int card_speed_t ;



 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static unsigned int FUNC_1(ecard_t *VAR_8, card_type_t VAR_9, card_speed_t VAR_10)
{
 unsigned long VAR_11 = 0;
 int VAR_12 = VAR_8->slot_no;

 if (VAR_8->slot_no == 8)
  return VAR_5;

 VAR_7 &= ~(1 << VAR_12);

 switch (VAR_9) {
 case 128:
  if (VAR_12 < 4)
   VAR_11 = VAR_6 + (VAR_12 << 12);
  break;

 case 129:
  if (VAR_12 < 4)
   VAR_11 = VAR_4 + (VAR_12 << 12);




  if (VAR_11)
   VAR_11 += VAR_10 << 17;
  break;
 default:
  break;
 }




 return VAR_11;
}
