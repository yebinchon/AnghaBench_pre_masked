
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
 int FUNC_0 (int ,char*,unsigned long,unsigned long,...) ;
 TYPE_2__ VAR_3 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_4,
    unsigned long *VAR_5, unsigned long *VAR_6)
{
 int VAR_7;
 int VAR_8 = 0, VAR_9 = 0;
 int VAR_10;

 VAR_7 = FUNC_1(VAR_0);
 VAR_10 = ((VAR_7 >> 3) & 0x1f) + 1;
 if ((VAR_7 & (0x3 << 1)) == 0) {

  VAR_8 = (FUNC_1(VAR_2) & 0x3f) + 1;
  VAR_9 = (FUNC_1(VAR_1) & 0x7f) + 1;
  *VAR_5 = VAR_4 * VAR_9 / VAR_8;
 } else
  *VAR_5 = VAR_4;

 *VAR_6 = *VAR_5 / VAR_10;
 FUNC_0(VAR_3->dev,
  "ext_clk %ld pix_src %d pix_div %d sys_div %d sys_mul %d\n",
  VAR_4, VAR_7 & (0x3 << 1), VAR_10, VAR_8, VAR_9);
 FUNC_0(VAR_3->dev, "sys_clk %ld pix_clk %ld\n",
  *VAR_5, *VAR_6);
}
