
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; scalar_t__ name; } ;
typedef TYPE_1__ AVOption ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__ const*,TYPE_1__ const*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(const AVOption *VAR_1, int VAR_2)
{
    const AVOption *VAR_3;

    FUNC_1("@table @option\n");
    for (VAR_3 = VAR_1; VAR_3->name; VAR_3++) {
        if (VAR_3->type != VAR_0)
            FUNC_0(VAR_1, VAR_3, VAR_2);
    }
    FUNC_1("@end table\n");
}
