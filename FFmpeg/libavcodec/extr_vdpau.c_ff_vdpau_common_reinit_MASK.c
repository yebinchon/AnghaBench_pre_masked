
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int reset; } ;
typedef TYPE_3__ VDPAUHWContext ;
struct TYPE_12__ {scalar_t__ device; scalar_t__ width; scalar_t__ height; } ;
typedef TYPE_4__ VDPAUContext ;
struct TYPE_13__ {scalar_t__ coded_width; scalar_t__ coded_height; TYPE_1__* hwaccel; TYPE_2__* internal; TYPE_3__* hwaccel_context; } ;
struct TYPE_10__ {TYPE_4__* hwaccel_priv_data; } ;
struct TYPE_9__ {int (* init ) (TYPE_5__*) ;int (* uninit ) (TYPE_5__*) ;} ;
typedef TYPE_5__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_1)
{
    VDPAUHWContext *VAR_2 = VAR_1->hwaccel_context;
    VDPAUContext *VAR_3 = VAR_1->internal->hwaccel_priv_data;

    if (VAR_3->device == VAR_0)
        return 0;
    if (VAR_1->coded_width == VAR_3->width &&
        VAR_1->coded_height == VAR_3->height && (!VAR_2 || !VAR_2->reset))
        return 0;

    VAR_1->hwaccel->uninit(VAR_1);
    return VAR_1->hwaccel->init(VAR_1);
}
