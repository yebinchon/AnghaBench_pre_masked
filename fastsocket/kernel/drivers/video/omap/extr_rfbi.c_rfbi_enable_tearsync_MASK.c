
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int tearsync_mode; int tearsync_pin_cnt; TYPE_1__* fbdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,unsigned int,int) ;
 TYPE_2__ VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(int VAR_4, unsigned VAR_5)
{
 u32 VAR_6;

 FUNC_0(VAR_3.fbdev->dev, "tearsync %d line %d mode %d\n",
  VAR_4, VAR_5, VAR_3.tearsync_mode);
 if (VAR_5 > (1 << 11) - 1)
  return -VAR_0;

 FUNC_1(1);
 VAR_6 = FUNC_2(VAR_1);
 VAR_6 &= ~(0x3 << 2);
 if (VAR_4) {
  VAR_3.tearsync_mode = VAR_3.tearsync_pin_cnt;
  VAR_6 |= VAR_3.tearsync_mode << 2;
 } else
  VAR_3.tearsync_mode = 0;
 FUNC_3(VAR_1, VAR_6);
 FUNC_3(VAR_2, VAR_5);
 FUNC_1(0);

 return 0;
}
