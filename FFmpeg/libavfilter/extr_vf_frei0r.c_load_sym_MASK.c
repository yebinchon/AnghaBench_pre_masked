
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {int dl_handle; } ;
typedef TYPE_1__ Frei0rContext ;
typedef TYPE_2__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,char*,char const*) ;
 void* FUNC_1 (int ,char const*) ;

__attribute__((used)) static void *FUNC_2(AVFilterContext *VAR_1, const char *VAR_2)
{
    Frei0rContext *VAR_3 = VAR_1->priv;
    void *VAR_4 = FUNC_1(VAR_3->dl_handle, VAR_2);
    if (!VAR_4)
        FUNC_0(VAR_1, VAR_0, "Could not find symbol '%s' in loaded module.\n", VAR_2);
    return VAR_4;
}
