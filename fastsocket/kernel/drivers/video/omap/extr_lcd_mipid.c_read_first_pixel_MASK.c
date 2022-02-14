
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int data_lines; } ;
struct mipid_device {TYPE_1__ panel; int mutex; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mipid_device*,int ,int*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static u16 FUNC_4(struct mipid_device *VAR_3)
{
 u16 VAR_4;
 u8 VAR_5, VAR_6, VAR_7;

 FUNC_2(&VAR_3->mutex);
 FUNC_1(VAR_3, VAR_2, &VAR_5, 1);
 FUNC_1(VAR_3, VAR_1, &VAR_6, 1);
 FUNC_1(VAR_3, VAR_0, &VAR_7, 1);
 FUNC_3(&VAR_3->mutex);

 switch (VAR_3->panel.data_lines) {
 case 16:
  VAR_4 = ((VAR_5 >> 1) << 11) | (VAR_6 << 5) | (VAR_7 >> 1);
  break;
 case 24:

  VAR_4 = ((VAR_5 >> 3) << 11) | ((VAR_6 >> 2) << 5) |
   (VAR_7 >> 3);
  break;
 default:
  VAR_4 = 0;
  FUNC_0();
 }

 return VAR_4;
}
