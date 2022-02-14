
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct em28xx {int v4l2_dev; int ctl_input; } ;
struct TYPE_2__ {int vmux; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ,int ,int ,...) ;
 int VAR_4 ;

void FUNC_2(struct em28xx *VAR_5)
{
 FUNC_1(&VAR_5->v4l2_dev, 0, VAR_0, VAR_1, 0);
 FUNC_1(&VAR_5->v4l2_dev, 0, VAR_4, VAR_2,
   FUNC_0(VAR_5->ctl_input)->vmux, 0, 0);
 FUNC_1(&VAR_5->v4l2_dev, 0, VAR_4, VAR_3, 0);
}
