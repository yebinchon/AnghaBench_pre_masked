
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* name; int entries; } ;
typedef TYPE_1__ section_t ;
typedef int list_node_t ;
struct TYPE_6__ {char* key; char* value; } ;
typedef TYPE_2__ entry_t ;
struct TYPE_7__ {int sections; } ;
typedef TYPE_3__ config_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int const* FUNC_2 (int ) ;
 int const* FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int const*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(const config_t *VAR_0)
{
    FUNC_0(VAR_0 != ((void*)0));

    int VAR_1 = 0, VAR_2 = 0;

    for (const list_node_t *VAR_3 = FUNC_1(VAR_0->sections); VAR_3 != FUNC_2(VAR_0->sections); VAR_3 = FUNC_3(VAR_3)) {
        const section_t *VAR_4 = (const section_t *)FUNC_4(VAR_3);
        VAR_1 = FUNC_5(VAR_4->name) + FUNC_5("[]\n");
        VAR_2 += VAR_1;

        for (const list_node_t *VAR_5 = FUNC_1(VAR_4->entries); VAR_5 != FUNC_2(VAR_4->entries); VAR_5 = FUNC_3(VAR_5)) {
            const entry_t *VAR_6 = (const entry_t *)FUNC_4(VAR_5);
            VAR_1 = FUNC_5(VAR_6->key) + FUNC_5(VAR_6->value) + FUNC_5(" = \n");
            VAR_2 += VAR_1;
        }


        if (FUNC_3(VAR_3) != FUNC_2(VAR_0->sections)) {
                VAR_2 ++;
        } else {
            break;
        }
    }
    VAR_2 ++;
    return VAR_2;
}
