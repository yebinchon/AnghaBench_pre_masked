
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int axis_h; int width; int format; int axis_frame; } ;
typedef TYPE_1__ ShowCQTContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(ShowCQTContext *VAR_1)
{
    if (!(VAR_1->axis_frame = FUNC_1(FUNC_2(VAR_1->format), VAR_1->width, VAR_1->axis_h)))
        return FUNC_0(VAR_0);
    return 0;
}
