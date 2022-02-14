
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int Typespec ;
struct TYPE_2__ {int pos; } ;
typedef int SrcPos ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int **,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int * FUNC_6 (int ,int **,int ,int *,int) ;
 int * FUNC_7 () ;
 int FUNC_8 () ;
 TYPE_1__ VAR_5 ;

Typespec *FUNC_9(void) {
    SrcPos VAR_6 = VAR_5.pos;
    Typespec **VAR_7 = ((void*)0);
    bool VAR_8 = 0;
    FUNC_3(VAR_3);
    if (!FUNC_4(VAR_4)) {
        FUNC_1(VAR_7, FUNC_8());
        while (FUNC_5(VAR_1)) {
            if (FUNC_5(VAR_2)) {
                if (VAR_8) {
                    FUNC_2("Multiple ellipsis instances in function type");
                }
                VAR_8 = 1;
            } else {
                if (VAR_8) {
                    FUNC_2("Ellipsis must be last parameter in function type");
                }
                FUNC_1(VAR_7, FUNC_8());
            }
        }
    }
    FUNC_3(VAR_4);
    Typespec *VAR_9 = ((void*)0);
    if (FUNC_5(VAR_0)) {
        VAR_9 = FUNC_7();
    }
    return FUNC_6(VAR_6, VAR_7, FUNC_0(VAR_7), VAR_9, VAR_8);
}
