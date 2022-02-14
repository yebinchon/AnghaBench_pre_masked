
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct pvr2_ctrl {int dummy; } ;


 int FUNC_0 (int*,char const*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct pvr2_ctrl *VAR_0,
          const char *VAR_1,unsigned int VAR_2,
          int *VAR_3,int *VAR_4)
{
 int VAR_5;
 v4l2_std_id VAR_6;
 VAR_5 = FUNC_0(&VAR_6,VAR_1,VAR_2);
 if (VAR_5 < 0) return VAR_5;
 if (VAR_3) *VAR_3 = VAR_6;
 if (VAR_4) *VAR_4 = VAR_6;
 return 0;
}
