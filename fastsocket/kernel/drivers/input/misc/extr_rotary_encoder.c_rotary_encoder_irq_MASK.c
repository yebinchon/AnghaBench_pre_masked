
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rotary_encoder_platform_data {int inverted_a; int inverted_b; unsigned int steps; int axis; int rollover; int relative_axis; int gpio_b; int gpio_a; } ;
struct rotary_encoder {int armed; int dir; unsigned int pos; int input; struct rotary_encoder_platform_data* pdata; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,unsigned int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct rotary_encoder *VAR_3 = VAR_2;
 struct rotary_encoder_platform_data *VAR_4 = VAR_3->pdata;
 int VAR_5 = !!FUNC_0(VAR_4->gpio_a);
 int VAR_6 = !!FUNC_0(VAR_4->gpio_b);
 int VAR_7;

 VAR_5 ^= VAR_4->inverted_a;
 VAR_6 ^= VAR_4->inverted_b;
 VAR_7 = (VAR_5 << 1) | VAR_6;

 switch (VAR_7) {

 case 0x0:
  if (!VAR_3->armed)
   break;

  if (VAR_4->relative_axis) {
   FUNC_2(VAR_3->input, VAR_4->axis,
      VAR_3->dir ? -1 : 1);
  } else {
   unsigned int VAR_8 = VAR_3->pos;

   if (VAR_3->dir) {

    if (VAR_4->rollover)
     VAR_8 += VAR_4->steps;
    if (VAR_8)
     VAR_8--;
   } else {

    if (VAR_4->rollover || VAR_8 < VAR_4->steps)
     VAR_8++;
   }
   if (VAR_4->rollover)
    VAR_8 %= VAR_4->steps;
   VAR_3->pos = VAR_8;
   FUNC_1(VAR_3->input, VAR_4->axis,
      VAR_3->pos);
  }
  FUNC_3(VAR_3->input);

  VAR_3->armed = 0;
  break;

 case 0x1:
 case 0x2:
  if (VAR_3->armed)
   VAR_3->dir = VAR_7 - 1;
  break;

 case 0x3:
  VAR_3->armed = 1;
  break;
 }

 return VAR_0;
}
