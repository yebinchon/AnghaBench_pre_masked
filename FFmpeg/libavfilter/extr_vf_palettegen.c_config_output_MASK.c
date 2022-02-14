
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int w; int h; int sample_aspect_ratio; } ;
typedef TYPE_1__ AVFilterLink ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(AVFilterLink *VAR_0)
{
    VAR_0->w = VAR_0->h = 16;
    VAR_0->sample_aspect_ratio = FUNC_0(1, 1);
    return 0;
}
