
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int Typespec ;
struct TYPE_2__ {int name; int pos; } ;
typedef int SrcPos ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const**) ;
 int FUNC_1 (char const**,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int * FUNC_7 (int ,char const**,int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int * FUNC_10 () ;
 int * FUNC_11 () ;
 int * FUNC_12 () ;
 TYPE_1__ VAR_6 ;
 int FUNC_13 () ;

Typespec *FUNC_14(void) {
    if (FUNC_4(VAR_3)) {
        SrcPos VAR_7 = VAR_6.pos;
        const char **VAR_8 = ((void*)0);
        FUNC_1(VAR_8, VAR_6.name);
        FUNC_8();
        while (FUNC_6(VAR_0)) {
            FUNC_1(VAR_8, FUNC_9());
        }
        return FUNC_7(VAR_7, VAR_8, FUNC_0(VAR_8));
    } else if (FUNC_5(VAR_5)) {
        return FUNC_11();
    } else if (FUNC_6(VAR_2)) {
        Typespec *VAR_9 = FUNC_10();
        FUNC_2(VAR_4);
        return VAR_9;
    } else if (FUNC_6(VAR_1)) {
        return FUNC_12();
    } else {
        FUNC_3("Unexpected token %s in type", FUNC_13());
        return ((void*)0);
    }
}
