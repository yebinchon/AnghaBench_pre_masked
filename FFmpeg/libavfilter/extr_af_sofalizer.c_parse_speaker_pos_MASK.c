
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_8__ {TYPE_2__* priv; } ;
struct TYPE_7__ {TYPE_1__* vspkrpos; int speakers_pos; } ;
struct TYPE_6__ {int set; float azim; float elev; } ;
typedef TYPE_2__ SOFAlizerContext ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_3__*,int ,char*,char*) ;
 int FUNC_2 (char*,char*,float*,...) ;
 char* FUNC_3 (int ) ;
 char* FUNC_4 (char*,char*,char**) ;
 scalar_t__ FUNC_5 (char**,int*,char*) ;

__attribute__((used)) static void FUNC_6(AVFilterContext *VAR_1, int64_t VAR_2)
{
    SOFAlizerContext *VAR_3 = VAR_1->priv;
    char *VAR_4, *VAR_5, *VAR_6, *VAR_7 = FUNC_3(VAR_3->speakers_pos);

    if (!VAR_7)
        return;
    VAR_6 = VAR_7;

    while ((VAR_4 = FUNC_4(VAR_6, "|", &VAR_5))) {
        char VAR_8[8];
        float VAR_9, VAR_10;
        int VAR_11;

        VAR_6 = ((void*)0);
        if (FUNC_5(&VAR_4, &VAR_11, VAR_8)) {
            FUNC_1(VAR_1, VAR_0, "Failed to parse \'%s\' as channel name.\n", VAR_8);
            continue;
        }
        if (FUNC_2(VAR_4, "%f %f", &VAR_9, &VAR_10) == 2) {
            VAR_3->vspkrpos[VAR_11].set = 1;
            VAR_3->vspkrpos[VAR_11].azim = VAR_9;
            VAR_3->vspkrpos[VAR_11].elev = VAR_10;
        } else if (FUNC_2(VAR_4, "%f", &VAR_9) == 1) {
            VAR_3->vspkrpos[VAR_11].set = 1;
            VAR_3->vspkrpos[VAR_11].azim = VAR_9;
            VAR_3->vspkrpos[VAR_11].elev = 0;
        }
    }

    FUNC_0(VAR_7);
}
