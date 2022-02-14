
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ line; scalar_t__ name; } ;
typedef TYPE_1__ SrcPos ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,scalar_t__) ;

void FUNC_3(SrcPos VAR_2) {
    if (VAR_0) {
        return;
    }
    if (VAR_1.line != VAR_2.line || VAR_1.name != VAR_2.name) {
        FUNC_2("#line %d", VAR_2.line);
        if (VAR_1.name != VAR_2.name) {
            FUNC_1(" ");
            FUNC_0(VAR_2.name, 0);
        }
        VAR_1 = VAR_2;
    }
}
