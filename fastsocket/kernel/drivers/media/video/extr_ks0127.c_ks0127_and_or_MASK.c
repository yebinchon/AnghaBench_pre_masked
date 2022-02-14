
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct v4l2_subdev {int dummy; } ;
struct ks0127 {size_t* regs; } ;


 int FUNC_0 (struct v4l2_subdev*,size_t,size_t) ;
 struct ks0127* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static void FUNC_2(struct v4l2_subdev *VAR_0, u8 VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct ks0127 *VAR_4 = FUNC_1(VAR_0);

 u8 VAR_5 = VAR_4->regs[VAR_1];
 VAR_5 = (VAR_5 & VAR_2) | VAR_3;
 FUNC_0(VAR_0, VAR_1, VAR_5);
}
