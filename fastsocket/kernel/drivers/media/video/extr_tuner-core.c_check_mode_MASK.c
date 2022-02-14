
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuner {int mode_mask; } ;
typedef enum v4l2_tuner_type { ____Placeholder_v4l2_tuner_type } v4l2_tuner_type ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct tuner *VAR_1, enum v4l2_tuner_type VAR_2)
{
 if ((1 << VAR_2 & VAR_1->mode_mask) == 0)
  return -VAR_0;

 return 0;
}
