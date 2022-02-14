
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ val; } ;
struct v4l2_ctrl {scalar_t__ val; TYPE_1__ cur; } ;



__attribute__((used)) static inline int FUNC_0(struct v4l2_ctrl *VAR_0)
{
 return VAR_0 && VAR_0->val != VAR_0->cur.val;
}
