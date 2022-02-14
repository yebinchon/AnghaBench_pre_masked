
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ usig; } ;
struct TYPE_8__ {TYPE_7__* ty; } ;
typedef TYPE_1__ Node ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (TYPE_7__*,int,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int) ;
 TYPE_1__* FUNC_4 () ;

__attribute__((used)) static Node *FUNC_5() {
    Node *VAR_3 = FUNC_4();
    for (;;) {
        int VAR_4;
        if (FUNC_3(VAR_0))
            VAR_4 = VAR_0;
        else if (FUNC_3(VAR_1))
            VAR_4 = VAR_3->ty->usig ? VAR_2 : VAR_1;
        else
            break;
        Node *VAR_5 = FUNC_4();
        FUNC_2(VAR_3);
        FUNC_2(VAR_5);
        VAR_3 = FUNC_0(VAR_3->ty, VAR_4, FUNC_1(VAR_3), FUNC_1(VAR_5));
    }
    return VAR_3;
}
