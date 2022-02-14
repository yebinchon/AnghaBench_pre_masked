
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* (* GetExtensionsStringEXT ) () ;char* (* GetExtensionsStringARB ) (int ) ;} ;
struct TYPE_4__ {TYPE_1__ wgl; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 char* FUNC_1 () ;
 char* FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(const char* VAR_3)
{
    const char* VAR_4;

    if (VAR_2.wgl.GetExtensionsStringEXT)
    {
        VAR_4 = VAR_2.wgl.GetExtensionsStringEXT();
        if (VAR_4)
        {
            if (FUNC_0(VAR_3, VAR_4))
                return VAR_1;
        }
    }

    if (VAR_2.wgl.GetExtensionsStringARB)
    {
        VAR_4 = VAR_2.wgl.GetExtensionsStringARB(FUNC_3());
        if (VAR_4)
        {
            if (FUNC_0(VAR_3, VAR_4))
                return VAR_1;
        }
    }

    return VAR_0;
}
