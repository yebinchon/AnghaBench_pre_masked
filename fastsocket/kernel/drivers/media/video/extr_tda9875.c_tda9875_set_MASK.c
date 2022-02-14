
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct tda9875 {int lvol; int rvol; int bass; int treble; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct v4l2_subdev*,int ,unsigned char) ;
 struct tda9875* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*,int,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct v4l2_subdev *VAR_5)
{
 struct tda9875 *VAR_6 = FUNC_1(VAR_5);
 unsigned char VAR_7;

 FUNC_2(1, VAR_4, VAR_5, "tda9875_set(%04x,%04x,%04x,%04x)\n",
  VAR_6->lvol, VAR_6->rvol, VAR_6->bass, VAR_6->treble);

 VAR_7 = VAR_6->lvol & 0xff;
 FUNC_0(VAR_5, VAR_2, VAR_7);
 VAR_7 =VAR_6->rvol & 0xff;
 FUNC_0(VAR_5, VAR_3, VAR_7);
 VAR_7 =VAR_6->bass & 0xff;
 FUNC_0(VAR_5, VAR_0, VAR_7);
 VAR_7 =VAR_6->treble & 0xff;
 FUNC_0(VAR_5, VAR_1, VAR_7);
}
