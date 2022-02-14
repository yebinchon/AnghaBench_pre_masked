
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int func; } ;
struct TYPE_8__ {int name; TYPE_1__ versions; struct TYPE_8__** child; } ;
typedef TYPE_2__ CheckasmFunc ;


 int FUNC_0 (TYPE_2__**) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (int ,char const*,int) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static CheckasmFunc *FUNC_5(CheckasmFunc **VAR_0, const char *VAR_1)
{
    CheckasmFunc *VAR_2 = *VAR_0;

    if (VAR_2) {

        int VAR_3 = FUNC_2(VAR_1, VAR_2->name);
        if (VAR_3) {
            VAR_2 = FUNC_5(&VAR_2->child[VAR_3 > 0], VAR_1);


            if (!VAR_2->versions.func)
                FUNC_0(VAR_0);
        }
    } else {

        int VAR_4 = FUNC_4(VAR_1);
        VAR_2 = *VAR_0 = FUNC_1(sizeof(CheckasmFunc) + VAR_4);
        FUNC_3(VAR_2->name, VAR_1, VAR_4 + 1);
    }

    return VAR_2;
}
