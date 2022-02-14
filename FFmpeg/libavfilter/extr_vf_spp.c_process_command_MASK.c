
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv; } ;
struct TYPE_4__ {int log2_count; } ;
typedef TYPE_1__ SPPContext ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*,int *,int) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_2, const char *VAR_3, const char *VAR_4,
                           char *VAR_5, int VAR_6, int VAR_7)
{
    SPPContext *VAR_8 = VAR_2->priv;

    if (!FUNC_2(VAR_3, "level")) {
        if (!FUNC_2(VAR_4, "max"))
            VAR_8->log2_count = VAR_1;
        else
            VAR_8->log2_count = FUNC_1(FUNC_3(VAR_4, ((void*)0), 10), 0, VAR_1);
        return 0;
    }
    return FUNC_0(VAR_0);
}
