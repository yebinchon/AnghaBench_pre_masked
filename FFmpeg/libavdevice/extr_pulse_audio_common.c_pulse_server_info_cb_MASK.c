
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int default_source_name; int default_sink_name; } ;
typedef TYPE_1__ pa_server_info ;
typedef int pa_context ;
struct TYPE_5__ {int error_code; void* default_device; scalar_t__ output; } ;
typedef TYPE_2__ PulseAudioDeviceList ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(pa_context *VAR_1, const pa_server_info *VAR_2, void *VAR_3)
{
    PulseAudioDeviceList *VAR_4 = VAR_3;
    if (VAR_4->output)
        VAR_4->default_device = FUNC_1(VAR_2->default_sink_name);
    else
        VAR_4->default_device = FUNC_1(VAR_2->default_source_name);
    if (!VAR_4->default_device)
        VAR_4->error_code = FUNC_0(VAR_0);
}
