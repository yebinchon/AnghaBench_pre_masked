
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int pa_subscription_event_type_t ;
typedef int pa_context ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int * ctx; } ;
typedef TYPE_1__ PulseData ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(pa_context *VAR_4, pa_subscription_event_type_t VAR_5,
                        uint32_t VAR_6, void *VAR_7)
{
    AVFormatContext *VAR_8 = VAR_7;
    PulseData *VAR_9 = VAR_8->priv_data;

    if (VAR_9->ctx != VAR_4)
        return;

    if ((VAR_5 & VAR_1) == VAR_2) {
        if ((VAR_5 & VAR_3) == VAR_0)

            FUNC_0(VAR_8);
    }
}
