
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int (* preset_do_f ) (int *,TYPE_2__*) ;
struct TYPE_6__ {int* index; int depth; } ;
struct TYPE_7__ {TYPE_1__ path; } ;
typedef TYPE_2__ preset_do_context_t ;
typedef int hb_value_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_0 (int *,char*) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(preset_do_f VAR_7, hb_value_t *VAR_8,
                      preset_do_context_t *VAR_9)
{
    int VAR_10;
    hb_value_t *VAR_11;

    if (FUNC_6(VAR_8) == VAR_0)
    {

        int VAR_12;

        for (VAR_12 = 0; VAR_12 < FUNC_3(VAR_8); )
        {
            VAR_9->path.index[VAR_9->path.depth-1] = VAR_12;
            VAR_11 = FUNC_2(VAR_8, VAR_12);
            VAR_10 = FUNC_7(VAR_7, VAR_11, VAR_9);
            if (VAR_10 == VAR_2)
            {
                FUNC_4(VAR_8, VAR_12);
                continue;
            }
            VAR_12++;
            if (VAR_10 == VAR_5)
                return VAR_4;
            if (VAR_10 != VAR_4)
                return VAR_10;
        }
        return VAR_4;
    }
    else if (FUNC_6(VAR_8) == VAR_1 &&
             FUNC_0(VAR_8, "VersionMajor") != ((void*)0))
    {

        VAR_11 = FUNC_0(VAR_8, "PresetList");
        return FUNC_7(VAR_7, VAR_11, VAR_9);
    }
    else if (FUNC_6(VAR_8) == VAR_1 &&
             FUNC_5(FUNC_0(VAR_8, "Folder")))
    {

        VAR_10 = VAR_7(VAR_8, VAR_9);
        if (VAR_10 != VAR_4)
            return VAR_10;


        VAR_9->path.depth++;
        VAR_11 = FUNC_0(VAR_8, "ChildrenArray");
        VAR_10 = FUNC_7(VAR_7, VAR_11, VAR_9);
        if (VAR_10 == VAR_6)
            return VAR_10;
        VAR_9->path.depth--;
        return VAR_10;
    }
    else if (FUNC_6(VAR_8) == VAR_1 &&
             FUNC_0(VAR_8, "PresetName") != ((void*)0))
    {

        return VAR_7(VAR_8, VAR_9);
    }
    else
    {
        FUNC_1("Error: invalid preset format in presets_do()");
        return VAR_2;
    }
    return VAR_3;
}
