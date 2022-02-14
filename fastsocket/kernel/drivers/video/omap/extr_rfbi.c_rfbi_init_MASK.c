
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct omapfb_device {int dev; } ;
struct TYPE_2__ {int l4_khz; int dss_ick; int base; struct omapfb_device* fbdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (char*,int,int) ;
 TYPE_1__ VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static int FUNC_9(struct omapfb_device *VAR_12)
{
 u32 VAR_13;
 int VAR_14;

 VAR_10.fbdev = VAR_12;
 VAR_10.base = FUNC_2(VAR_2, VAR_9);
 if (!VAR_10.base) {
  FUNC_1(VAR_12->dev, "can't ioremap RFBI\n");
  return -VAR_1;
 }

 if ((VAR_14 = FUNC_6()) < 0)
  return VAR_14;
 FUNC_5(1);

 VAR_10.l4_khz = FUNC_0(VAR_10.dss_ick) / 1000;


 FUNC_8(VAR_7, 1 << 1);
 while (!(FUNC_7(VAR_8) & (1 << 0)));

 VAR_13 = FUNC_7(VAR_7);

 VAR_13 |= (1 << 0) | (2 << 3);
 FUNC_8(VAR_7, VAR_13);


 VAR_13 = (0x03 << 0) | (0x00 << 2) | (0x01 << 5) | (0x02 << 7);
 VAR_13 |= (0 << 9) | (1 << 20) | (1 << 21);
 FUNC_8(VAR_3, VAR_13);

 FUNC_8(VAR_5, 0x00000010);

 VAR_13 = FUNC_7(VAR_4);

 VAR_13 = (0x01 << 2);
 FUNC_8(VAR_4, VAR_13);

 VAR_14 = FUNC_3(VAR_0, VAR_11,
       ((void*)0));
 if (VAR_14 < 0) {
  FUNC_1(VAR_12->dev, "can't get DISPC irq\n");
  FUNC_5(0);
  return VAR_14;
 }

 VAR_13 = FUNC_7(VAR_6);
 FUNC_4("omapfb: RFBI version %d.%d initialized\n",
  (VAR_13 >> 4) & 0x0f, VAR_13 & 0x0f);

 FUNC_5(0);

 return 0;
}
