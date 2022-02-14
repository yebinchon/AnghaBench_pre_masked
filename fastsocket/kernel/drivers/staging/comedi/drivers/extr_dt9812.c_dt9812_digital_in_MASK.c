
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct slot_dt9812 {int mutex; scalar_t__ usb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,int,int*,int*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct slot_dt9812 *VAR_3, u8 * VAR_4)
{
 int VAR_5 = -VAR_0;

 FUNC_0(&VAR_3->mutex);
 if (VAR_3->usb) {
  u8 VAR_6[2] = { VAR_2, VAR_1 };
  u8 VAR_7[2];

  VAR_5 = FUNC_1(VAR_3->usb, 2, VAR_6,
       VAR_7);
  if (VAR_5 == 0) {





   *VAR_4 = (VAR_7[0] & 0x7f) | ((VAR_7[1] & 0x08) << 4);


  }
 }
 FUNC_2(&VAR_3->mutex);

 return VAR_5;
}
