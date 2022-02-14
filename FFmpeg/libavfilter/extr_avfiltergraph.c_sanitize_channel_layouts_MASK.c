
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int all_layouts; int all_counts; scalar_t__ nb_channel_layouts; } ;
typedef TYPE_1__ AVFilterChannelLayouts ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,char*) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, AVFilterChannelLayouts *VAR_2)
{
    if (!VAR_2)
        return;
    if (VAR_2->nb_channel_layouts) {
        if (VAR_2->all_layouts || VAR_2->all_counts)
            FUNC_0(VAR_1, VAR_0, "All layouts set on non-empty list\n");
        VAR_2->all_layouts = VAR_2->all_counts = 0;
    } else {
        if (VAR_2->all_counts && !VAR_2->all_layouts)
            FUNC_0(VAR_1, VAR_0, "All counts without all layouts\n");
        VAR_2->all_layouts = 1;
    }
}
