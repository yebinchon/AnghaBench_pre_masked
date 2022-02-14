
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_sliced_vbi_format {int** service_lines; int service_set; } ;
struct cx18_av_state {int std; } ;
struct cx18 {struct cx18_av_state av_state; } ;






 int VAR_0 ;
 int FUNC_0 (struct cx18*,int) ;
 int FUNC_1 (struct v4l2_sliced_vbi_format*,int ,int) ;
 struct cx18* FUNC_2 (struct v4l2_subdev*) ;

int FUNC_3(struct v4l2_subdev *VAR_1, struct v4l2_sliced_vbi_format *VAR_2)
{
 struct cx18 *VAR_3 = FUNC_2(VAR_1);
 struct cx18_av_state *VAR_4 = &VAR_3->av_state;
 static const u16 VAR_5[] = {
  0, 130, 0,
  0, 128, 0,
  131,
  0, 0, 129, 0, 0,
  0, 0, 0, 0
 };
 int VAR_6 = !(VAR_4->std & VAR_0);
 int VAR_7;

 FUNC_1(VAR_2, 0, sizeof(*VAR_2));

 if ((FUNC_0(VAR_3, 0x404) & 0x10) == 0)
  return 0;

 if (VAR_6) {
  for (VAR_7 = 7; VAR_7 <= 23; VAR_7++) {
   u8 VAR_8 = FUNC_0(VAR_3, 0x424 + VAR_7 - 7);

   VAR_2->service_lines[0][VAR_7] = VAR_5[VAR_8 >> 4];
   VAR_2->service_lines[1][VAR_7] = VAR_5[VAR_8 & 0xf];
   VAR_2->service_set |= VAR_2->service_lines[0][VAR_7] |
    VAR_2->service_lines[1][VAR_7];
  }
 } else {
  for (VAR_7 = 10; VAR_7 <= 21; VAR_7++) {
   u8 VAR_9 = FUNC_0(VAR_3, 0x424 + VAR_7 - 10);

   VAR_2->service_lines[0][VAR_7] = VAR_5[VAR_9 >> 4];
   VAR_2->service_lines[1][VAR_7] = VAR_5[VAR_9 & 0xf];
   VAR_2->service_set |= VAR_2->service_lines[0][VAR_7] |
    VAR_2->service_lines[1][VAR_7];
  }
 }
 return 0;
}
