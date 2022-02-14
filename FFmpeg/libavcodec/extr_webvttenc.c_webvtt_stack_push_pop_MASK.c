
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int stack_ptr; int avctx; } ;
typedef TYPE_1__ WebVTTContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,char const) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,char const) ;

__attribute__((used)) static void FUNC_5(WebVTTContext *VAR_1, const char VAR_2, int VAR_3)
{
    if (VAR_3) {
        int VAR_4 = VAR_2 ? FUNC_2(VAR_1, VAR_2) : 0;
        if (VAR_4 < 0)
            return;
        while (VAR_1->stack_ptr != VAR_4)
            FUNC_1(VAR_1, FUNC_3(VAR_1));
    } else if (FUNC_4(VAR_1, VAR_2) < 0)
        FUNC_0(VAR_1->avctx, VAR_0, "tag stack overflow\n");
}
