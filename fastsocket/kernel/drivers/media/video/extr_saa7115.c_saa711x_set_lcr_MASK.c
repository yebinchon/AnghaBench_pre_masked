
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_sliced_vbi_format {int** service_lines; } ;
struct saa711x_state {int std; scalar_t__ ident; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct v4l2_subdev*,scalar_t__,int) ;
 int FUNC_2 (struct v4l2_subdev*,int ) ;
 struct saa711x_state* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static void FUNC_4(struct v4l2_subdev *VAR_5, struct v4l2_sliced_vbi_format *VAR_6)
{
 struct saa711x_state *VAR_7 = FUNC_3(VAR_5);
 int VAR_8 = (VAR_7->std & VAR_2);
 u8 VAR_9[24];
 int VAR_10, VAR_11;



 if (!FUNC_0(VAR_7->ident, VAR_0))
  return;







 for (VAR_10 = 0; VAR_10 <= 23; VAR_10++)
  VAR_9[VAR_10] = 0xff;

 if (VAR_6 == ((void*)0)) {

  if (VAR_8)
   for (VAR_10 = 6; VAR_10 <= 23; VAR_10++)
    VAR_9[VAR_10] = 0xdd;
  else
   for (VAR_10 = 10; VAR_10 <= 21; VAR_10++)
    VAR_9[VAR_10] = 0xdd;
 } else {


  if (VAR_8) {
   for (VAR_10 = 0; VAR_10 <= 5; VAR_10++)
    VAR_6->service_lines[0][VAR_10] =
     VAR_6->service_lines[1][VAR_10] = 0;
  }
  else {
   for (VAR_10 = 0; VAR_10 <= 9; VAR_10++)
    VAR_6->service_lines[0][VAR_10] =
     VAR_6->service_lines[1][VAR_10] = 0;
   for (VAR_10 = 22; VAR_10 <= 23; VAR_10++)
    VAR_6->service_lines[0][VAR_10] =
     VAR_6->service_lines[1][VAR_10] = 0;
  }


  for (VAR_10 = 6; VAR_10 <= 23; VAR_10++) {
   VAR_9[VAR_10] = 0;
   for (VAR_11 = 0; VAR_11 <= 1; VAR_11++) {
    switch (VAR_6->service_lines[1-VAR_11][VAR_10]) {
     case 0:
      VAR_9[VAR_10] |= 0xf << (4 * VAR_11);
      break;
     case 130:
      VAR_9[VAR_10] |= 1 << (4 * VAR_11);
      break;
     case 131:
      VAR_9[VAR_10] |= 4 << (4 * VAR_11);
      break;
     case 128:
      VAR_9[VAR_10] |= 5 << (4 * VAR_11);
      break;
     case 129:
      VAR_9[VAR_10] |= 7 << (4 * VAR_11);
      break;
    }
   }
  }
 }


 for (VAR_10 = 2; VAR_10 <= 23; VAR_10++) {
  FUNC_1(VAR_5, VAR_10 - 2 + VAR_0, VAR_9[VAR_10]);
 }


 FUNC_2(VAR_5, VAR_6 == ((void*)0) ?
    VAR_4 :
    VAR_3);
}
