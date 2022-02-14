
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct slot_dt9812 {int mutex; TYPE_1__* usb; } ;
struct dt9812_rmw_byte {int address; int and_mask; int or_value; } ;
typedef enum dt9812_gain { ____Placeholder_dt9812_gain } dt9812_gain ;
struct TYPE_5__ {int device; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,struct dt9812_rmw_byte*,int) ;
 int FUNC_2 (TYPE_1__*,struct dt9812_rmw_byte*,int) ;
 int FUNC_3 (TYPE_1__*,int,int*,int*) ;
 int FUNC_4 (TYPE_1__*,int,struct dt9812_rmw_byte*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct slot_dt9812 *VAR_7, int VAR_8, u16 * VAR_9,
       enum dt9812_gain VAR_10)
{
 struct dt9812_rmw_byte VAR_11[3];
 u8 VAR_12[3] = {
  VAR_4,
  VAR_5,
  VAR_6
 };
 u8 VAR_13[3];
 int VAR_14 = -VAR_0;

 FUNC_0(&VAR_7->mutex);
 if (!VAR_7->usb)
  goto exit;


 FUNC_1(VAR_7->usb, &VAR_11[0], VAR_10);


 FUNC_2(VAR_7->usb, &VAR_11[1], VAR_8);


 VAR_11[2].address = VAR_4;
 VAR_11[2].and_mask = 0xff;
 VAR_11[2].or_value = VAR_2 | VAR_1;

 VAR_14 = FUNC_4(VAR_7->usb, 3, VAR_11);
 if (VAR_14)
  goto exit;


 VAR_14 = FUNC_3(VAR_7->usb, 3, VAR_12, VAR_13);
 if (VAR_14)
  goto exit;
 if ((VAR_13[0] & (VAR_3 | VAR_1)) ==
     VAR_3) {
  switch (VAR_7->usb->device) {
  case 129:





   *VAR_9 = ((VAR_13[1] << 8) | VAR_13[2]) + 0x800;
   break;
  case 128:
   *VAR_9 = (VAR_13[1] << 8) | VAR_13[2];
   break;
  }
 }

exit:
 FUNC_5(&VAR_7->mutex);
 return VAR_14;
}
