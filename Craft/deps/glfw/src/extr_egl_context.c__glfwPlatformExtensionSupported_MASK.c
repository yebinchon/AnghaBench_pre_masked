
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int display; } ;
struct TYPE_4__ {TYPE_1__ egl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 char* FUNC_1 (int ,int ) ;

int FUNC_2(const char* VAR_4)
{
    const char* VAR_5 = FUNC_1(VAR_3.egl.display,
                                                  VAR_0);
    if (VAR_5)
    {
        if (FUNC_0(VAR_4, VAR_5))
            return VAR_2;
    }

    return VAR_1;
}
