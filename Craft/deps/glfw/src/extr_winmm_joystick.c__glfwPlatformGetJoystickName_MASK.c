
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* winmm_js; } ;
struct TYPE_6__ {int szPname; } ;
struct TYPE_5__ {char const* name; } ;
typedef TYPE_2__ JOYCAPS ;


 scalar_t__ VAR_0 ;
 TYPE_4__ VAR_1 ;
 char const* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,TYPE_2__*,int) ;
 int FUNC_2 (char const*) ;

const char* FUNC_3(int VAR_2)
{
    JOYCAPS VAR_3;

    if (FUNC_1(VAR_2, &VAR_3, sizeof(JOYCAPS)) != VAR_0)
        return ((void*)0);

    FUNC_2(VAR_1.winmm_js[VAR_2].name);
    VAR_1.winmm_js[VAR_2].name = FUNC_0(VAR_3.szPname);

    return VAR_1.winmm_js[VAR_2].name;
}
