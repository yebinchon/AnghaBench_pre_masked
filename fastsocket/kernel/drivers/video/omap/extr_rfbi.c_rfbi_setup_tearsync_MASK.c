
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {unsigned int tearsync_pin_cnt; TYPE_1__* fbdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,unsigned int,int,int,int,int) ;
 int FUNC_1 (unsigned int,int) ;
 TYPE_2__ VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(unsigned VAR_6,
          unsigned VAR_7, unsigned VAR_8,
          int VAR_9, int VAR_10, int VAR_11)
{
 int VAR_12, VAR_13;
 int VAR_14;
 u32 VAR_15;

 if (VAR_6 != 1 && VAR_6 != 2)
  return -VAR_1;

 VAR_12 = FUNC_1(VAR_7, 1);
 VAR_13 = FUNC_1(VAR_8, 1);
 if (VAR_12 < 2)
  return -VAR_0;
 if (VAR_6 == 2)
  VAR_14 = 2;
 else
  VAR_14 = 4;
 if (VAR_13 < VAR_14)
  return -VAR_0;
 if (VAR_13 == VAR_12)
  return -VAR_1;
 VAR_5.tearsync_pin_cnt = VAR_6;
 FUNC_0(VAR_5.fbdev->dev,
  "setup_tearsync: pins %d hs %d vs %d hs_inv %d vs_inv %d\n",
  VAR_6, VAR_12, VAR_13, VAR_9, VAR_10);

 FUNC_2(1);
 FUNC_4(VAR_3, VAR_12);
 FUNC_4(VAR_4, VAR_13);

 VAR_15 = FUNC_3(VAR_2);
 if (VAR_9)
  VAR_15 &= ~(1 << 21);
 else
  VAR_15 |= 1 << 21;
 if (VAR_10)
  VAR_15 &= ~(1 << 20);
 else
  VAR_15 |= 1 << 20;
 FUNC_2(0);

 return 0;
}
