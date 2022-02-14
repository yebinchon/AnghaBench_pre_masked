
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* filter_func ;
struct TYPE_7__ {TYPE_2__** inputs; TYPE_1__* priv; } ;
struct TYPE_6__ {int sample_rate; int format; TYPE_3__* src; } ;
struct TYPE_5__ {int bs2bp; void* filter; } ;
typedef TYPE_1__ Bs2bContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_9)
{
    AVFilterContext *VAR_10 = VAR_9->src;
    Bs2bContext *VAR_11 = VAR_10->priv;
    AVFilterLink *VAR_12 = VAR_10->inputs[0];

    int VAR_13 = VAR_12->sample_rate;

    switch (VAR_12->format) {
    case 128:
        VAR_11->filter = (filter_func) VAR_8;
        break;
    case 130:
        VAR_11->filter = (filter_func) VAR_6;
        break;
    case 129:
        VAR_11->filter = (filter_func) VAR_7;
        break;
    case 131:
        VAR_11->filter = (filter_func) VAR_5;
        break;
    case 132:
        VAR_11->filter = (filter_func) VAR_4;
        break;
    default:
        return VAR_0;
    }

    if ((VAR_13 < VAR_2) || (VAR_13 > VAR_1))
        return FUNC_0(VAR_3);

    FUNC_1(VAR_11->bs2bp, VAR_13);

    return 0;
}
