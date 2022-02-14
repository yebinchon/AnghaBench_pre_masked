
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int index; int * graph_desc; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__**,int) ;
 TYPE_1__* FUNC_2 (int) ;
 TYPE_1__** VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(void *VAR_5, const char *VAR_6, const char *VAR_7)
{
    uint8_t *VAR_8 = FUNC_3(VAR_7);
    if (!VAR_8)
        return FUNC_0(VAR_0);

    FUNC_1(VAR_2, VAR_4);
    if (!(VAR_2[VAR_4 - 1] = FUNC_2(sizeof(*VAR_2[0]))))
        return FUNC_0(VAR_1);
    VAR_2[VAR_4 - 1]->index = VAR_4 - 1;
    VAR_2[VAR_4 - 1]->graph_desc = VAR_8;

    VAR_3 = 1;

    return 0;
}
