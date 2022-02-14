
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct slot_dt9812 {int mutex; TYPE_1__* usb; } ;
struct dt9812_rmw_byte {int and_mask; int or_value; int address; } ;
struct TYPE_2__ {int* analog_out_shadow; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int,struct dt9812_rmw_byte*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct slot_dt9812 *VAR_8, int VAR_9, u16 VAR_10)
{
 int VAR_11 = -VAR_0;

 FUNC_0(&VAR_8->mutex);
 if (VAR_8->usb) {
  struct dt9812_rmw_byte VAR_12[3];

  switch (VAR_9) {
  case 0:

   VAR_12[0].address = VAR_2;
   VAR_12[0].and_mask = 0xff;
   VAR_12[0].or_value = VAR_1;


   VAR_12[1].address = VAR_4;
   VAR_12[1].and_mask = 0xff;
   VAR_12[1].or_value = VAR_10 & 0xff;



   VAR_12[2].address = VAR_3;
   VAR_12[2].and_mask = 0xff;
   VAR_12[2].or_value = (VAR_10 >> 8) & 0xf;
   break;

  case 1:

   VAR_12[0].address = VAR_5;
   VAR_12[0].and_mask = 0xff;
   VAR_12[0].or_value = VAR_1;


   VAR_12[1].address = VAR_7;
   VAR_12[1].and_mask = 0xff;
   VAR_12[1].or_value = VAR_10 & 0xff;



   VAR_12[2].address = VAR_6;
   VAR_12[2].and_mask = 0xff;
   VAR_12[2].or_value = (VAR_10 >> 8) & 0xf;
   break;
  }
  VAR_11 = FUNC_1(VAR_8->usb, 3, VAR_12);
  VAR_8->usb->analog_out_shadow[VAR_9] = VAR_10;
 }
 FUNC_2(&VAR_8->mutex);

 return VAR_11;
}
