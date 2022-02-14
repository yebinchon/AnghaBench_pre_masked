
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct v4l2_subdev*,int ,unsigned char*) ;
 int FUNC_2 (struct v4l2_subdev*,int ,unsigned char) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_6, int VAR_7, int VAR_8,
  int VAR_9, int VAR_10)
{
 int VAR_11;
 unsigned char VAR_12;





 VAR_11 = FUNC_2(VAR_6, VAR_1, (VAR_7 >> 3) & 0xff);
 VAR_11 += FUNC_2(VAR_6, VAR_2, (VAR_8 >> 3) & 0xff);
 VAR_11 += FUNC_1(VAR_6, VAR_0, &VAR_12);
 VAR_12 = (VAR_12 & 0xc0) | ((VAR_8 & 0x7) << 3) | (VAR_7 & 0x7);
 FUNC_0(10);
 VAR_11 += FUNC_2(VAR_6, VAR_0, VAR_12);



 VAR_11 += FUNC_2(VAR_6, VAR_4, (VAR_9 >> 2) & 0xff);
 VAR_11 += FUNC_2(VAR_6, VAR_5, (VAR_10 >> 2) & 0xff);
 VAR_11 += FUNC_1(VAR_6, VAR_3, &VAR_12);
 VAR_12 = (VAR_12 & 0xf0) | ((VAR_10 & 0x3) << 2) | (VAR_9 & 0x3);
 FUNC_0(10);
 VAR_11 += FUNC_2(VAR_6, VAR_3, VAR_12);
 return VAR_11;
}
