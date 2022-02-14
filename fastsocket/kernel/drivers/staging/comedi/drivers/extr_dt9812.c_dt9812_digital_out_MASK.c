
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct slot_dt9812 {int mutex; TYPE_1__* usb; } ;
struct TYPE_2__ {int digital_out_shadow; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int,int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct slot_dt9812 *VAR_2, u8 VAR_3)
{
 int VAR_4 = -VAR_0;

 FUNC_0(&VAR_2->mutex);
 if (VAR_2->usb) {
  u8 VAR_5[1];
  u8 VAR_6[1];

  VAR_5[0] = VAR_1;
  VAR_6[0] = VAR_3;
  VAR_4 = FUNC_1(VAR_2->usb, 1, VAR_5,
        VAR_6);
  VAR_2->usb->digital_out_shadow = VAR_3;
 }
 FUNC_2(&VAR_2->mutex);
 return VAR_4;
}
