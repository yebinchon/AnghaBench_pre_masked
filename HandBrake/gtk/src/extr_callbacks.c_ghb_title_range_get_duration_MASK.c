
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int den; int num; } ;
struct TYPE_6__ {TYPE_1__ vrate; } ;
typedef TYPE_2__ hb_title_t ;
typedef int gint64 ;
typedef int GhbValue ;


 int FUNC_0 (TYPE_2__ const*,int,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;

gint64
FUNC_3(GhbValue * VAR_0, const hb_title_t * VAR_1)
{
    gint64 VAR_2, VAR_3;

    if (FUNC_2(VAR_0, "PtoPType") == 0)
    {
        VAR_2 = FUNC_1(VAR_0, "start_point");
        VAR_3 = FUNC_1(VAR_0, "end_point");
        return FUNC_0(VAR_1, VAR_2, VAR_3) / 90000;
    }
    else if (FUNC_2(VAR_0, "PtoPType") == 1)
    {
        VAR_2 = FUNC_1(VAR_0, "start_point");
        VAR_3 = FUNC_1(VAR_0, "end_point");
        return VAR_3 - VAR_2;
    }
    else if (FUNC_2(VAR_0, "PtoPType") == 2)
    {
        if (VAR_1 != ((void*)0))
        {
            gint64 VAR_4;

            VAR_2 = FUNC_1(VAR_0, "start_point");
            VAR_3 = FUNC_1(VAR_0, "end_point");
            VAR_4 = VAR_3 - VAR_2 + 1;
            return VAR_4 * VAR_1->vrate.den / VAR_1->vrate.num;
        }
        else
        {
            return 0;
        }
    }
    return 0;
}
