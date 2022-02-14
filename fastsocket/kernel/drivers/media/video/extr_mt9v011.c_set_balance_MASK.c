
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct mt9v011 {int global_gain; int blue_bal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct v4l2_subdev*,int ,int) ;
 struct mt9v011* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static void FUNC_2(struct v4l2_subdev *VAR_4)
{
 struct mt9v011 *VAR_5 = FUNC_1(VAR_4);
 u16 VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_6 = VAR_5->global_gain;
 VAR_7 = VAR_5->global_gain;

 VAR_8 = VAR_5->global_gain +
      VAR_5->global_gain * VAR_5->blue_bal / (1 << 9);

 VAR_9 = VAR_5->global_gain +
     VAR_5->global_gain * VAR_5->blue_bal / (1 << 9);

 FUNC_0(VAR_4, VAR_0, VAR_6);
 FUNC_0(VAR_4, VAR_3, VAR_6);
 FUNC_0(VAR_4, VAR_1, VAR_8);
 FUNC_0(VAR_4, VAR_2, VAR_9);
}
