
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * custom_cursor; int conf; } ;
struct TYPE_5__ {TYPE_1__ mir; } ;
typedef TYPE_2__ _GLFWcursor ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char const*) ;

int FUNC_2(_GLFWcursor* VAR_2, int VAR_3)
{
    const char* VAR_4 = FUNC_0(VAR_3);

    if (VAR_4)
    {
        VAR_2->mir.conf = FUNC_1(VAR_4);
        VAR_2->mir.custom_cursor = ((void*)0);

        return VAR_1;
    }

    return VAR_0;
}
