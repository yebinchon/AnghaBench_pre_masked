
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* name; scalar_t__ type; int path; } ;
typedef TYPE_1__ hb_title_t ;
typedef char gchar ;
struct TYPE_6__ {int st_mode; } ;
typedef TYPE_2__ GStatBuf ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,TYPE_2__*) ;
 char* FUNC_4 (int ) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (scalar_t__*) ;
 scalar_t__ FUNC_8 (char*) ;

gchar*
FUNC_9(const hb_title_t * VAR_1)
{
    char * VAR_2 = ((void*)0);

    if (VAR_1 != ((void*)0) && VAR_1->name != ((void*)0) && VAR_1->name[0] != 0)
    {
        GStatBuf VAR_3;

        if (FUNC_3(VAR_1->path, &VAR_3) == 0)
        {
            if (!FUNC_0(VAR_3.st_mode))
            {
                VAR_2 = FUNC_5(VAR_1->path);
            }
            else
            {

                VAR_2 = FUNC_7(VAR_1->name);
                if (VAR_1->type == VAR_0)
                {
                    FUNC_6(VAR_2);
                }
                if (FUNC_8(VAR_2))
                {
                    FUNC_2(VAR_2);
                }
            }
        }
        if (VAR_2 == ((void*)0))
        {
            VAR_2 = FUNC_7(VAR_1->name);
            if (VAR_1->type == VAR_0)
            {
                FUNC_6(VAR_2);
            }
        }
    }
    else
    {
        VAR_2 = FUNC_4(FUNC_1("No Title Found"));
    }
    return VAR_2;
}
