
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* fbdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,unsigned long,unsigned long,...) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_5,
    unsigned long *VAR_6, unsigned long *VAR_7)
{
 int VAR_8;
 int VAR_9 = 0, VAR_10 = 0;
 int VAR_11;

 VAR_8 = FUNC_0(VAR_0);
 VAR_11 = ((VAR_8 >> 3) & 0x1f) + 1;
 if ((VAR_8 & (0x3 << 1)) == 0) {

  VAR_9 = (FUNC_0(VAR_3) & 0x3f) + 1;
  VAR_10 = FUNC_0(VAR_1);
  VAR_10 |= ((FUNC_0(VAR_2)
    & 0x0f) << 11);
  *VAR_6 = VAR_5 * VAR_10 / VAR_9;
 } else
  *VAR_6 = VAR_5;

 *VAR_7 = *VAR_6 / VAR_11;
 FUNC_1(VAR_4.fbdev->dev,
  "ext_clk %ld pix_src %d pix_div %d sys_div %d sys_mul %d\n",
  VAR_5, VAR_8 & (0x3 << 1), VAR_11, VAR_9, VAR_10);
 FUNC_1(VAR_4.fbdev->dev, "sys_clk %ld pix_clk %ld\n",
  *VAR_6, *VAR_7);
}
