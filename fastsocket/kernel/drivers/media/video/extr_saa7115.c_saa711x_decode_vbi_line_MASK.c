
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vbi_no_data_pattern ;
typedef int u8 ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_decode_vbi_line {int* p; int is_second_field; int line; scalar_t__ type; } ;
struct saa711x_state {int std; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*,char const*,int) ;
 int FUNC_1 (int*,int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int) ;
 struct saa711x_state* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_5, struct v4l2_decode_vbi_line *VAR_6)
{
 struct saa711x_state *VAR_7 = FUNC_4(VAR_5);
 static const char VAR_8[] = {
  0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0
 };
 u8 *VAR_9 = VAR_6->p;
 u32 VAR_10;
 int VAR_11, VAR_12;

 VAR_6->type = 0;
 VAR_11 = VAR_9[2];
 VAR_12 = VAR_9[3];

 if (VAR_7->std & VAR_4)
  VAR_11 ^= 0x40;


 VAR_9 += 4;
 VAR_6->p = VAR_9;


 VAR_6->is_second_field = ((VAR_11 & 0x40) != 0);
 VAR_6->line = (VAR_11 & 0x3f) << 3;
 VAR_6->line |= (VAR_12 & 0x70) >> 4;


 VAR_12 &= 0xf;



 if (!FUNC_0(VAR_9, VAR_8, sizeof(VAR_8)))
  return 0;


 switch (VAR_12) {
 case 1:
  VAR_6->type = VAR_1;
  break;
 case 4:
  if (!FUNC_3(VAR_9[0]) || !FUNC_3(VAR_9[1]))
   return 0;
  VAR_6->type = VAR_0;
  break;
 case 5:
  VAR_10 = FUNC_2(VAR_9);
  if (VAR_10 == -1)
   return 0;
  VAR_9[0] = VAR_10 & 0xff;
  VAR_9[1] = VAR_10 >> 8;
  VAR_6->type = VAR_3;
  break;
 case 7:
  if (FUNC_1(VAR_9, VAR_9) != 0)
   return 0;
  VAR_6->type = VAR_2;
  break;
 default:
  break;
 }
 return 0;
}
