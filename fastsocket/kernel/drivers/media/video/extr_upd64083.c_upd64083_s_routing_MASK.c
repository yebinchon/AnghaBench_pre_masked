
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct upd64083_state {int mode; int ext_y_adc; int* regs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 struct upd64083_state* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,size_t,int) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_4,
         u32 VAR_5, u32 VAR_6, u32 VAR_7)
{
 struct upd64083_state *VAR_8 = FUNC_0(VAR_4);
 u8 VAR_9, VAR_10;

 if (VAR_5 > 7 || (VAR_5 & 6) == 6)
  return -VAR_0;
 VAR_8->mode = (VAR_5 & 3) << 6;
 VAR_8->ext_y_adc = (VAR_5 & VAR_3) << 3;
 VAR_9 = (VAR_8->regs[VAR_1] & ~(3 << 6)) | VAR_8->mode;
 VAR_10 = (VAR_8->regs[VAR_2] & ~(1 << 5)) | VAR_8->ext_y_adc;
 FUNC_1(VAR_4, VAR_1, VAR_9);
 FUNC_1(VAR_4, VAR_2, VAR_10);
 return 0;
}
