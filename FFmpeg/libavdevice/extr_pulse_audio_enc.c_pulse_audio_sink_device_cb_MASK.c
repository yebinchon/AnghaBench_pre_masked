
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; int base_volume; } ;
typedef TYPE_1__ pa_sink_info ;
typedef int pa_context ;
struct TYPE_6__ {int base_volume; int mainloop; int * ctx; } ;
typedef TYPE_2__ PulseData ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,char*,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(pa_context *VAR_3, const pa_sink_info *VAR_4,
                                       int VAR_5, void *VAR_6)
{
    PulseData *VAR_7 = VAR_6;

    if (VAR_7->ctx != VAR_3)
        return;

    if (VAR_5) {
        FUNC_1(VAR_7->mainloop, 0);
    } else {
        if (VAR_4->flags & VAR_1)
            VAR_7->base_volume = VAR_4->base_volume;
        else
            VAR_7->base_volume = VAR_2;
        FUNC_0(VAR_7, VAR_0, "base volume: %u\n", VAR_7->base_volume);
    }
}
