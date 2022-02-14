
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct clk {int rate; int flags; int scale_reg; TYPE_1__* parent; } ;
struct TYPE_2__ {int rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (struct clk*) ;
 int FUNC_5 (struct clk*) ;
 scalar_t__ FUNC_6 (struct clk*) ;
 int FUNC_7 (struct clk*) ;

__attribute__((used)) static int FUNC_8(struct clk *VAR_5, u32 VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9, VAR_10;
 u32 VAR_11;
 int VAR_12 = -VAR_1;

 VAR_11 = VAR_5->parent->rate;

 if (!VAR_11)
  goto out;


 FUNC_2(VAR_5);


 FUNC_3(VAR_5);

 VAR_7 = FUNC_0(VAR_5->scale_reg);
 VAR_7 &= ~0x1ffff;
 FUNC_1(VAR_7, VAR_5->scale_reg);

 VAR_6 -= VAR_6 % VAR_11;

 if (VAR_6 > VAR_2)
  VAR_6 = VAR_2;

 if (!VAR_6) {
  VAR_5->rate = 0;
  VAR_12 = 0;
  goto out;
 }

 FUNC_5(VAR_5);
 VAR_7 = FUNC_0(VAR_5->scale_reg);

 if (VAR_6 == VAR_11) {

  VAR_7 |= ((1 << 14) | (1 << 15));
  FUNC_1(VAR_7, VAR_5->scale_reg);
  VAR_5->rate = VAR_11;
  FUNC_4(VAR_5);
  VAR_12 = 0;
  goto out;
 }

 VAR_10 = 0;
 for (VAR_9 = 1; VAR_9 < 16; VAR_9 <<= 1) {
  if (VAR_6 * VAR_9 >= VAR_3)
   break;
  VAR_10++;
 }

 if (VAR_9 > 1)
  VAR_7 |= ((VAR_10 - 1) << 11);
 else
  VAR_7 |= (1 << 14);

 VAR_8 = VAR_6 * VAR_9;
 VAR_8 /= VAR_11;

 VAR_7 |= (VAR_8 - 1) << 1;
 VAR_7 |= (1 << 16);
 FUNC_1(VAR_7, VAR_5->scale_reg);

 if (FUNC_6(VAR_5) < 0) {
  FUNC_2(VAR_5);
  FUNC_3(VAR_5);

  VAR_7 = FUNC_0(VAR_5->scale_reg);
  VAR_7 &= ~0x1ffff;
  FUNC_1(VAR_7, VAR_5->scale_reg);
  VAR_5->rate = 0;
  VAR_12 = -VAR_0;
  goto out;
 }

 VAR_5->rate = (VAR_8 * VAR_11) / VAR_9;

 if (VAR_5->flags & VAR_4)
  FUNC_7(VAR_5);

 FUNC_4(VAR_5);
 VAR_12 = 0;

out:
 return VAR_12;
}
