
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int deemphasis; int postfilter; } ;
typedef TYPE_1__ OpusDSP ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;

void FUNC_5(void)
{
    OpusDSP VAR_0;
    FUNC_1(&VAR_0);

    if (FUNC_0(VAR_0.postfilter, "postfilter_15"))
        FUNC_4(15);
    FUNC_2("postfilter_15");

    if (FUNC_0(VAR_0.postfilter, "postfilter_512"))
        FUNC_4(512);
    FUNC_2("postfilter_512");

    if (FUNC_0(VAR_0.postfilter, "postfilter_1022"))
        FUNC_4(1022);
    FUNC_2("postfilter_1022");

    if (FUNC_0(VAR_0.deemphasis, "deemphasis"))
        FUNC_3();
    FUNC_2("deemphasis");
}
