
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int name; } ;
struct TYPE_6__ {int type; int ctx; int crctab; } ;
typedef TYPE_1__ AVHashContext ;



 int FUNC_0 (int ) ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (char const*,int ) ;
 TYPE_2__* VAR_4 ;

int FUNC_10(AVHashContext **VAR_5, const char *VAR_6)
{
    AVHashContext *VAR_7;
    int VAR_8;
    *VAR_5 = ((void*)0);
    for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
        if (FUNC_9(VAR_6, VAR_4[VAR_8].name) == 0)
            break;
    if (VAR_8 >= VAR_3) return FUNC_0(VAR_1);
    VAR_7 = FUNC_3(sizeof(*VAR_7));
    if (!VAR_7) return FUNC_0(VAR_2);
    VAR_7->type = VAR_8;
    switch (VAR_8) {
    case 140: VAR_7->ctx = FUNC_4(); break;
    case 139: VAR_7->ctx = FUNC_5(); break;
    case 138:
    case 137:
    case 136:
    case 135: VAR_7->ctx = FUNC_6(); break;
    case 134:
    case 133:
    case 132: VAR_7->ctx = FUNC_8(); break;
    case 129:
    case 128:
    case 131:
    case 130: VAR_7->ctx = FUNC_7(); break;
    case 141: VAR_7->crctab = FUNC_1(VAR_0); break;
    case 142: break;
    }
    if (VAR_8 != 142 && VAR_8 != 141 && !VAR_7->ctx) {
        FUNC_2(VAR_7);
        return FUNC_0(VAR_2);
    }
    *VAR_5 = VAR_7;
    return 0;
}
