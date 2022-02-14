
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ int32_t ;
typedef int int16_t ;
struct TYPE_2__ {int curr_lens_pos; int init_curr_lens_pos; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_6 ;
 scalar_t__ FUNC_1 (int,int,int) ;

__attribute__((used)) static int32_t FUNC_2(int VAR_7, int32_t VAR_8)
{
 int16_t VAR_9;
 int16_t VAR_10;
 int16_t VAR_11;
 int16_t VAR_12[4];
 uint8_t VAR_13, VAR_14;
 int16_t VAR_15;

 if (VAR_8 > VAR_5)
  VAR_8 = VAR_5;
 else if (VAR_8 == 0)
  return -VAR_1;

 if (VAR_7 == VAR_3)
  VAR_9 = 4;
 else if (VAR_7 == VAR_2)
  VAR_9 = -4;
 else
  return -VAR_1;

 if (VAR_6->curr_lens_pos < VAR_6->init_curr_lens_pos)
  VAR_6->curr_lens_pos = VAR_6->init_curr_lens_pos;

 VAR_10 =
  (int16_t) (VAR_9 *
  (int16_t) VAR_8);

 for (VAR_15 = 0; VAR_15 < 4; VAR_15++)
  VAR_12[VAR_15] =
   VAR_10 / 4 * (VAR_15 + 1) - VAR_10 / 4 * VAR_15;

 for (VAR_15 = 0; VAR_15 < 4; VAR_15++) {
  VAR_11 =
  (int16_t)
  (VAR_6->curr_lens_pos + VAR_12[VAR_15]);

  if (VAR_11 > 255)
   VAR_11 = 255;
  else if (VAR_11 < 0)
   VAR_11 = 0;

  VAR_13 =
  ((VAR_11 >> 4) << 2) |
  ((VAR_11 << 4) >> 6);

  VAR_14 =
  ((VAR_11 & 0x03) << 6);


  if (FUNC_1(VAR_4>>1,
    VAR_13, VAR_14) < 0)
   return -VAR_0;


  VAR_6->curr_lens_pos = VAR_11;

  if (VAR_15 < 3)
   FUNC_0(1);
 }

 return 0;
}
