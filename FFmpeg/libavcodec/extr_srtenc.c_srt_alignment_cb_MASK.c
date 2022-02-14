
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int alignment_applied; } ;
typedef TYPE_1__ SRTContext ;


 int FUNC_0 (TYPE_1__*,char*,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, int VAR_1)
{
    SRTContext *VAR_2 = VAR_0;
    if (!VAR_2->alignment_applied && VAR_1 >= 0) {
        FUNC_0(VAR_2, "{\\an%d}", VAR_1);
        VAR_2->alignment_applied = 1;
    }
}
