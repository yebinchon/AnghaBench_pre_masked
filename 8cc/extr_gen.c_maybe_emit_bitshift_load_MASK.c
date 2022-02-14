
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bitsize; int bitoff; } ;
typedef TYPE_1__ Type ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(Type *VAR_1) {
    VAR_0;
    if (VAR_1->bitsize <= 0)
        return;
    FUNC_0("shr $%d, #rax", VAR_1->bitoff);
    FUNC_2("rcx");
    FUNC_0("mov $0x%lx, #rcx", (1 << (long)VAR_1->bitsize) - 1);
    FUNC_0("and #rcx, #rax");
    FUNC_1("rcx");
}
