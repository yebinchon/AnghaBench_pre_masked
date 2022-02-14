
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* name; scalar_t__ type; int playlist; } ;
typedef TYPE_1__ hb_title_t ;
typedef char gchar ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (scalar_t__*) ;

gchar*
FUNC_6(const hb_title_t * VAR_2)
{
    char * VAR_3;
    char * VAR_4;

    if (VAR_2 != ((void*)0) && VAR_2->name != ((void*)0) && VAR_2->name[0] != 0)
    {
        VAR_3 = FUNC_5(VAR_2->name);
        if (VAR_2->type == VAR_1)
        {
            FUNC_4(VAR_3);
        }
        if (VAR_2->type == VAR_0)
        {
            VAR_4 = FUNC_3(FUNC_0("%s - (%05d.MPLS)"),
                                     VAR_3, VAR_2->playlist);
            FUNC_1(VAR_3);
        }
        else
        {
            VAR_4 = VAR_3;
        }
    }
    else
    {
        VAR_4 = FUNC_2(FUNC_0("No Title Found"));
    }
    return VAR_4;
}
