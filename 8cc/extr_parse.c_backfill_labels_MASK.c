
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* label; scalar_t__ kind; scalar_t__ newlabel; } ;
typedef TYPE_1__ Node ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__* FUNC_2 (int ,char*) ;
 TYPE_1__* FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5() {
    for (int VAR_3 = 0; VAR_3 < FUNC_4(VAR_1); VAR_3++) {
        Node *VAR_4 = FUNC_3(VAR_1, VAR_3);
        char *VAR_5 = VAR_4->label;
        Node *VAR_6 = FUNC_2(VAR_2, VAR_5);
        if (!VAR_6)
            FUNC_0("stray %s: %s", VAR_4->kind == VAR_0 ? "goto" : "unary &&", VAR_5);
        if (VAR_6->newlabel)
            VAR_4->newlabel = VAR_6->newlabel;
        else
            VAR_4->newlabel = VAR_6->newlabel = FUNC_1();
    }
}
