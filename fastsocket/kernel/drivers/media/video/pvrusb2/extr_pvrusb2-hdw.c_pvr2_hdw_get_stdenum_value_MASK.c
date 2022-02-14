
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_standard {int dummy; } ;
struct pvr2_hdw {unsigned int std_enum_cnt; int big_lock; scalar_t__ std_defs; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct v4l2_standard*,scalar_t__,int) ;

int FUNC_3(struct pvr2_hdw *VAR_1,
          struct v4l2_standard *VAR_2,
          unsigned int VAR_3)
{
 int VAR_4 = -VAR_0;
 if (!VAR_3) return VAR_4;
 FUNC_1(VAR_1->big_lock); do {
  if (VAR_3 >= VAR_1->std_enum_cnt) break;
  VAR_3--;
  FUNC_2(VAR_2,VAR_1->std_defs+VAR_3,sizeof(*VAR_2));
  VAR_4 = 0;
 } while (0); FUNC_0(VAR_1->big_lock);
 return VAR_4;
}
