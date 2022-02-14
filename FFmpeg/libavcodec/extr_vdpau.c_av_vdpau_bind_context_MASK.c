
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VdpGetProcAddress ;
typedef int VdpDevice ;
struct TYPE_7__ {int decoder; } ;
struct TYPE_8__ {unsigned int flags; int reset; int * get_proc_address; int device; TYPE_1__ context; } ;
typedef TYPE_2__ VDPAUHWContext ;
struct TYPE_9__ {TYPE_2__* hwaccel_context; } ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_2__**,int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;

int FUNC_3(AVCodecContext *VAR_5, VdpDevice VAR_6,
                          VdpGetProcAddress *VAR_7, unsigned VAR_8)
{
    VDPAUHWContext *VAR_9;

    if (VAR_8 & ~(VAR_1|VAR_0))
        return FUNC_0(VAR_2);

    if (FUNC_1(&VAR_5->hwaccel_context, sizeof(*VAR_9)))
        return FUNC_0(VAR_3);

    VAR_9 = VAR_5->hwaccel_context;

    FUNC_2(VAR_9, 0, sizeof(*VAR_9));
    VAR_9->context.decoder = VAR_4;
    VAR_9->device = VAR_6;
    VAR_9->get_proc_address = VAR_7;
    VAR_9->flags = VAR_8;
    VAR_9->reset = 1;
    return 0;
}
