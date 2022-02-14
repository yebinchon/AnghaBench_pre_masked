
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int depth; } ;
struct TYPE_5__ {TYPE_1__ path; } ;
typedef TYPE_2__ preset_do_context_t ;
typedef int hb_value_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,char*,int ) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **) ;
 int * FUNC_5 (char*) ;
 int FUNC_6 (int ,int *,TYPE_2__*) ;

int FUNC_7(void)
{
    char VAR_3[1024];
    hb_value_t * VAR_4 = ((void*)0);
    if (VAR_4 == ((void*)0))
    {
        FUNC_0("Failed to load GUI presets file");






        return -1;
    }
    else
    {
        preset_do_context_t VAR_5;
        VAR_5.path.depth = 1;
        FUNC_6(VAR_2, VAR_4, &VAR_5);
        int VAR_6 = FUNC_3(VAR_4);
        FUNC_4(&VAR_4);
        return VAR_6;
    }
    return -1;
}
