
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct mt9v011 {long xtal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (struct v4l2_subdev*,int ) ;
 struct mt9v011* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int,int ,struct v4l2_subdev*,char*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct v4l2_subdev *VAR_6, u32 *VAR_7, u32 *VAR_8)
{
 struct mt9v011 *VAR_9 = FUNC_2(VAR_6);
 unsigned VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 unsigned VAR_15, VAR_16;
 u64 VAR_17;
 unsigned VAR_18;

 VAR_10 = FUNC_1(VAR_6, VAR_0);
 VAR_11 = FUNC_1(VAR_6, VAR_1);
 VAR_12 = FUNC_1(VAR_6, VAR_2);
 VAR_13 = FUNC_1(VAR_6, VAR_3);
 VAR_14 = FUNC_1(VAR_6, VAR_4);

 VAR_15 = (VAR_11 + 113 + VAR_12) * (VAR_14 + 2);
 VAR_16 = VAR_15 * (VAR_10 + VAR_13 + 1);

 VAR_17 = VAR_9->xtal * 1000l;
 FUNC_0(VAR_17, VAR_16);
 VAR_18 = VAR_17;

 FUNC_3(1, VAR_5, VAR_6, "Programmed to %u.%03u fps (%d pixel clcks)\n",
  VAR_18 / 1000, VAR_18 % 1000, VAR_16);

 if (VAR_7 && VAR_8) {
  *VAR_7 = 1000;
  *VAR_8 = (u32)VAR_17;
 }
}
