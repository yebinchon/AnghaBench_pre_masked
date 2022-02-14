
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * inputs; } ;
typedef TYPE_1__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,char const*,char const*,char*,int,int) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_0,
                           const char *VAR_1,
                           const char *VAR_2,
                           char *VAR_3,
                           int VAR_4,
                           int VAR_5)
{
    int VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

    if (VAR_6 < 0)
        return VAR_6;

    return FUNC_0(VAR_0->inputs[0]);
}
