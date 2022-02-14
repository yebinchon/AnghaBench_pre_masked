
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* xmlNodePtr ;
struct TYPE_8__ {int name; } ;


 int FUNC_0 (int ,char const*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static xmlNodePtr FUNC_3(xmlNodePtr VAR_0, const char *VAR_1)
{
    xmlNodePtr VAR_2 = VAR_0;
    if (!VAR_2) {
        return ((void*)0);
    }

    VAR_2 = FUNC_1(VAR_2);
    while (VAR_2) {
        if (!FUNC_0(VAR_2->name, VAR_1)) {
            return VAR_2;
        }
        VAR_2 = FUNC_2(VAR_2);
    }
    return ((void*)0);
}
