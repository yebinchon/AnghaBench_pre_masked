
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct slot_dt9812 {int mutex; TYPE_1__* usb; } ;
struct TYPE_2__ {int * analog_out_shadow; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct slot_dt9812 *VAR_1, int VAR_2,
        u16 * VAR_3)
{
 int VAR_4 = -VAR_0;

 FUNC_0(&VAR_1->mutex);
 if (VAR_1->usb) {
  *VAR_3 = VAR_1->usb->analog_out_shadow[VAR_2];
  VAR_4 = 0;
 }
 FUNC_1(&VAR_1->mutex);

 return VAR_4;
}
