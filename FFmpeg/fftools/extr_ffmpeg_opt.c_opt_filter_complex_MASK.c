
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int index; int graph_desc; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__**,int) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (char const*) ;
 TYPE_1__** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(void *VAR_4, const char *VAR_5, const char *VAR_6)
{
    FUNC_1(VAR_1, VAR_3);
    if (!(VAR_1[VAR_3 - 1] = FUNC_2(sizeof(*VAR_1[0]))))
        return FUNC_0(VAR_0);
    VAR_1[VAR_3 - 1]->index = VAR_3 - 1;
    VAR_1[VAR_3 - 1]->graph_desc = FUNC_3(VAR_6);
    if (!VAR_1[VAR_3 - 1]->graph_desc)
        return FUNC_0(VAR_0);

    VAR_2 = 1;

    return 0;
}
