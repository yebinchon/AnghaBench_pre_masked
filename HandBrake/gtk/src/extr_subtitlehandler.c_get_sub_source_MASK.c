
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int list_subtitle; } ;
typedef TYPE_1__ hb_title_t ;
struct TYPE_6__ {int source; } ;
typedef TYPE_2__ hb_subtitle_t ;
typedef int GhbValue ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 char* FUNC_2 (int *,char*) ;
 TYPE_1__* FUNC_3 (int,int *) ;
 TYPE_2__* FUNC_4 (int ,int) ;
 int FUNC_5 (char const*,char*) ;

__attribute__((used)) static int FUNC_6(GhbValue *VAR_3, GhbValue *VAR_4)
{
    GhbValue *VAR_5;

    VAR_5 = FUNC_0(VAR_4, "Import");
    if (VAR_5 != ((void*)0))
    {
        const char * VAR_6 = FUNC_2(VAR_5, "Format");
        if (VAR_6 != ((void*)0) && !FUNC_5(VAR_6, "SSA"))
        {
            return VAR_1;
        }
        return VAR_0;
    }

    int VAR_7 = FUNC_1(VAR_3, "title");
    const hb_title_t *VAR_8 = FUNC_3(VAR_7, ((void*)0));
    if (VAR_8 == ((void*)0))
        return VAR_2;

    GhbValue *VAR_9 = FUNC_0(VAR_4, "Track");
    if (VAR_9 == ((void*)0))
        return VAR_2;

    int VAR_10 = FUNC_1(VAR_4, "Track");
    hb_subtitle_t *VAR_11 = FUNC_4(VAR_8->list_subtitle, VAR_10);
    if (VAR_11 != ((void*)0))
        return VAR_11->source;

    return VAR_2;
}
