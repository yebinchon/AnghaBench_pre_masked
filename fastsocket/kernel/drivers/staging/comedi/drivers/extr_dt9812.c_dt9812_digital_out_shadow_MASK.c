
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct slot_dt9812 {int mutex; TYPE_1__* usb; } ;
struct TYPE_2__ {int digital_out_shadow; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct slot_dt9812 *VAR_1, u8 * VAR_2)
{
 int VAR_3 = -VAR_0;

 FUNC_0(&VAR_1->mutex);
 if (VAR_1->usb) {
  *VAR_2 = VAR_1->usb->digital_out_shadow;
  VAR_3 = 0;
 }
 FUNC_1(&VAR_1->mutex);
 return VAR_3;
}
