
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ width; } ;
struct v4l2_cropcap {TYPE_1__ bounds; } ;
struct pvr2_ctrl {TYPE_2__* hdw; } ;
struct TYPE_4__ {scalar_t__ cropl_val; struct v4l2_cropcap cropcap_info; } ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_1(struct pvr2_ctrl *VAR_0, int *VAR_1)
{
 struct v4l2_cropcap *VAR_2 = &VAR_0->hdw->cropcap_info;
 int VAR_3 = FUNC_0(VAR_0->hdw);
 if (VAR_3 != 0) {
  return VAR_3;
 }
 *VAR_1 = 0;
 if (VAR_2->bounds.width > VAR_0->hdw->cropl_val) {
  *VAR_1 = VAR_2->bounds.width - VAR_0->hdw->cropl_val;
 }
 return 0;
}
