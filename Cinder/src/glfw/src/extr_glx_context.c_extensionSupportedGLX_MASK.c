
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int screen; int display; } ;
struct TYPE_4__ {TYPE_1__ x11; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 char* FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(const char* VAR_3)
{
    const char* VAR_4 =
        FUNC_1(VAR_2.x11.display, VAR_2.x11.screen);
    if (VAR_4)
    {
        if (FUNC_0(VAR_3, VAR_4))
            return VAR_1;
    }

    return VAR_0;
}
