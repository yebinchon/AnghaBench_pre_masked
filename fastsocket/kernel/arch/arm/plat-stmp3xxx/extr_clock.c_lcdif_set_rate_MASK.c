
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct clk {scalar_t__ busy_reg; scalar_t__ scale_reg; TYPE_1__* parent; } ;
struct TYPE_2__ {int rate; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (char*,int,int,int,int,int,int) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct clk *VAR_12, u32 VAR_13)
{
 int VAR_14 = 0;
 u32 VAR_15 = 1000000 / VAR_13;
 u32 VAR_16, VAR_17;
 u32 VAR_18 = (u32) -1;
 u32 VAR_19 = 0, VAR_20 = 0;

 for (VAR_16 = 1; VAR_16 < 256; ++VAR_16) {
  u32 VAR_21;
  u32 VAR_22;
  int VAR_23 = 6 * VAR_15 >= 25 * VAR_16;
  int VAR_24 = 108 * VAR_15 <= 875 * VAR_16;
  if (!VAR_23)
   break;
  if (!VAR_24)
   continue;




  VAR_21 = ((VAR_12->parent->rate / 1000 * 18 / 2) *
    VAR_15 + 1000 * VAR_16 - 1) /
    (1000 * VAR_16);
  if (VAR_21 < 18 || VAR_21 > 35) {
   VAR_14 = -VAR_7;
   goto out;
  }

  VAR_22 = 6250 * VAR_16 * VAR_21 / 27;


  if (VAR_22 <= VAR_18) {
   VAR_18 = VAR_22;
   VAR_19 = VAR_16;
   VAR_20 = VAR_21;
  }
 }

 if (VAR_16 >= 256 || VAR_18 == (u32) -1) {
  VAR_14 = -VAR_7;
  goto out;
 }
 FUNC_4("Programming PFD=%u,DIV=%u ref_pix=%uMHz "
   "PIXCLK=%uMHz cycle=%u.%03uns\n",
   VAR_20, VAR_19,
   480*18/VAR_20, 480*18/VAR_20/VAR_19,
   VAR_18 / 1000, VAR_18 % 1000);


 VAR_17 = FUNC_1(VAR_11 + VAR_10);
 VAR_17 &= ~VAR_2;
 VAR_17 |= FUNC_0(VAR_20, VAR_5);
 FUNC_2(VAR_17, VAR_11 + VAR_10);


 FUNC_5(VAR_1,
   VAR_11 + VAR_10);


 VAR_17 = FUNC_1(VAR_12->scale_reg);
 VAR_17 &= ~(VAR_4 | VAR_3);
 VAR_17 |= FUNC_0(VAR_19, VAR_6);
 FUNC_2(VAR_17, VAR_12->scale_reg);


 if (VAR_12->busy_reg) {
  int VAR_25;
  for (VAR_25 = 10000; VAR_25; VAR_25--)
   if (!FUNC_3(VAR_12))
    break;
  if (!VAR_25) {
   VAR_14 = -VAR_8;
   goto out;
  }
 }


 VAR_17 = FUNC_1(VAR_11 + VAR_9);
 VAR_17 &= ~VAR_0;
 FUNC_2(VAR_17, VAR_11 + VAR_9);

out:
 return VAR_14;
}
