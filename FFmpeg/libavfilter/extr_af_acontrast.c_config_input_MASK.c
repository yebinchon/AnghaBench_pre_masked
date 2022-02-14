
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int format; TYPE_3__* dst; } ;
struct TYPE_5__ {int filter; } ;
typedef TYPE_1__ AudioContrastContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(AVFilterLink *VAR_4)
{
    AVFilterContext *VAR_5 = VAR_4->dst;
    AudioContrastContext *VAR_6 = VAR_5->priv;

    switch (VAR_4->format) {
    case 129: VAR_6->filter = VAR_2; break;
    case 131: VAR_6->filter = VAR_0; break;
    case 128: VAR_6->filter = VAR_3; break;
    case 130: VAR_6->filter = VAR_1; break;
    }

    return 0;
}
