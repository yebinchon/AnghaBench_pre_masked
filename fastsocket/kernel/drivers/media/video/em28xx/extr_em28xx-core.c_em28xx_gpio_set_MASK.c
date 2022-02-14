
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em28xx_reg_seq {int sleep; scalar_t__ reg; int mask; int val; } ;
struct em28xx {scalar_t__ mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct em28xx*,int,int) ;
 int FUNC_1 (struct em28xx*,scalar_t__,int ,int ) ;
 int FUNC_2 (int) ;

int FUNC_3(struct em28xx *VAR_3, struct em28xx_reg_seq *VAR_4)
{
 int VAR_5 = 0;

 if (!VAR_4)
  return VAR_5;

 if (VAR_3->mode != VAR_2) {
  FUNC_0(VAR_3, 0x48, 0x00);
  if (VAR_3->mode == VAR_0)
   FUNC_0(VAR_3, VAR_1, 0x67);
  else
   FUNC_0(VAR_3, VAR_1, 0x37);
  FUNC_2(6);
 }


 while (VAR_4->sleep >= 0) {
  if (VAR_4->reg >= 0) {
   VAR_5 = FUNC_1(VAR_3,
         VAR_4->reg,
         VAR_4->val,
         VAR_4->mask);
   if (VAR_5 < 0)
    return VAR_5;
  }
  if (VAR_4->sleep > 0)
   FUNC_2(VAR_4->sleep);

  VAR_4++;
 }
 return VAR_5;
}
