
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pos; } ;
typedef int SrcPos ;
typedef int NoteArg ;
typedef int Note ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,char const*,int *,int ) ;
 char* FUNC_5 () ;
 int FUNC_6 () ;
 TYPE_1__ VAR_3 ;

Note FUNC_7(void) {
    SrcPos VAR_4 = VAR_3.pos;
    const char *VAR_5 = FUNC_5();
    NoteArg *VAR_6 = ((void*)0);
    if (FUNC_3(VAR_1)) {
        FUNC_1(VAR_6, FUNC_6());
        while (FUNC_3(VAR_0)) {
            FUNC_1(VAR_6, FUNC_6());
        }
        FUNC_2(VAR_2);
    }
    return FUNC_4(VAR_4, VAR_5, VAR_6, FUNC_0(VAR_6));
}
