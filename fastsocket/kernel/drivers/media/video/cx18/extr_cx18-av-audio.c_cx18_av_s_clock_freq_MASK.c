
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct cx18_av_state {scalar_t__ aud_input; } ;
struct cx18 {struct cx18_av_state av_state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cx18*,int) ;
 int FUNC_1 (struct cx18*,int,int) ;
 int FUNC_2 (struct cx18*,int,int,int,int) ;
 int FUNC_3 (struct cx18*,int ) ;
 struct cx18* FUNC_4 (struct v4l2_subdev*) ;

int FUNC_5(struct v4l2_subdev *VAR_1, u32 VAR_2)
{
 struct cx18 *VAR_3 = FUNC_4(VAR_1);
 struct cx18_av_state *VAR_4 = &VAR_3->av_state;
 int VAR_5;
 u8 VAR_6;

 if (VAR_4->aud_input > VAR_0) {
  VAR_6 = FUNC_0(VAR_3, 0x803) & ~0x10;
  FUNC_2(VAR_3, 0x803, VAR_6, VAR_6, 0x1f);
  FUNC_1(VAR_3, 0x8d3, 0x1f);
 }
 VAR_6 = FUNC_0(VAR_3, 0x810) | 0x1;
 FUNC_2(VAR_3, 0x810, VAR_6, VAR_6, 0x0f);

 VAR_5 = FUNC_3(VAR_3, VAR_2);

 VAR_6 = FUNC_0(VAR_3, 0x810) & ~0x1;
 FUNC_2(VAR_3, 0x810, VAR_6, VAR_6, 0x0f);
 if (VAR_4->aud_input > VAR_0) {
  VAR_6 = FUNC_0(VAR_3, 0x803) | 0x10;
  FUNC_2(VAR_3, 0x803, VAR_6, VAR_6, 0x1f);
 }
 return VAR_5;
}
