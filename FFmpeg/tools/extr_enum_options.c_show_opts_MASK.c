
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; } ;
typedef TYPE_1__ AVOption ;
typedef int AVClass ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int const**,TYPE_1__ const*) ;
 int FUNC_1 (int const*,TYPE_1__ const*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(const AVClass *VAR_1)
{
    const AVOption *VAR_2 = ((void*)0);

    FUNC_2("@table @option\n");
    while ((VAR_2 = FUNC_0(&VAR_1, VAR_2)))
        if (VAR_2->type != VAR_0)
            FUNC_1(VAR_1, VAR_2);
    FUNC_2("@end table\n");
}
