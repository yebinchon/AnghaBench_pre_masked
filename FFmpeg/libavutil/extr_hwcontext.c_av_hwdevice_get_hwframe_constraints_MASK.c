
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ data; } ;
struct TYPE_15__ {TYPE_1__* internal; } ;
struct TYPE_14__ {int max_height; int max_width; scalar_t__ min_height; scalar_t__ min_width; } ;
struct TYPE_13__ {scalar_t__ (* frames_get_constraints ) (TYPE_4__*,void const*,TYPE_3__*) ;} ;
struct TYPE_12__ {TYPE_2__* hw_type; } ;
typedef TYPE_2__ HWContextType ;
typedef TYPE_3__ AVHWFramesConstraints ;
typedef TYPE_4__ AVHWDeviceContext ;
typedef TYPE_5__ AVBufferRef ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__**) ;
 TYPE_3__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_4__*,void const*,TYPE_3__*) ;

AVHWFramesConstraints *FUNC_3(AVBufferRef *VAR_1,
                                                           const void *VAR_2)
{
    AVHWDeviceContext *VAR_3 = (AVHWDeviceContext*)VAR_1->data;
    const HWContextType *VAR_4 = VAR_3->internal->hw_type;
    AVHWFramesConstraints *VAR_5;

    if (!VAR_4->frames_get_constraints)
        return ((void*)0);

    VAR_5 = FUNC_1(sizeof(*VAR_5));
    if (!VAR_5)
        return ((void*)0);

    VAR_5->min_width = VAR_5->min_height = 0;
    VAR_5->max_width = VAR_5->max_height = VAR_0;

    if (VAR_4->frames_get_constraints(VAR_3, VAR_2, VAR_5) >= 0) {
        return VAR_5;
    } else {
        FUNC_0(&VAR_5);
        return ((void*)0);
    }
}
