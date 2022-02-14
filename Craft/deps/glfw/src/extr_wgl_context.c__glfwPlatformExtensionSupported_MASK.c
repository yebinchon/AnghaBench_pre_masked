
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* (* GetExtensionsStringEXT ) () ;char* (* GetExtensionsStringARB ) (int ) ;int dc; } ;
struct TYPE_5__ {TYPE_1__ wgl; } ;
typedef TYPE_2__ _GLFWwindow ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 () ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 char* FUNC_2 () ;
 char* FUNC_3 (int ) ;

int FUNC_4(const char* VAR_2)
{
    const char* VAR_3;

    _GLFWwindow* VAR_4 = FUNC_0();

    if (VAR_4->wgl.GetExtensionsStringEXT != ((void*)0))
    {
        VAR_3 = VAR_4->wgl.GetExtensionsStringEXT();
        if (VAR_3)
        {
            if (FUNC_1(VAR_2, VAR_3))
                return VAR_1;
        }
    }

    if (VAR_4->wgl.GetExtensionsStringARB != ((void*)0))
    {
        VAR_3 = VAR_4->wgl.GetExtensionsStringARB(VAR_4->wgl.dc);
        if (VAR_3)
        {
            if (FUNC_1(VAR_2, VAR_3))
                return VAR_1;
        }
    }

    return VAR_0;
}
