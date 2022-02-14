
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bitsize; int bitoff; } ;
typedef TYPE_1__ Type ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_1__*,char) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(Type *VAR_1, char *VAR_2) {
    VAR_0;
    if (VAR_1->bitsize <= 0)
        return;
    FUNC_3("rcx");
    FUNC_3("rdi");
    FUNC_0("mov $0x%lx, #rdi", (1 << (long)VAR_1->bitsize) - 1);
    FUNC_0("and #rdi, #rax");
    FUNC_0("shl $%d, #rax", VAR_1->bitoff);
    FUNC_0("mov %s, #%s", VAR_2, FUNC_1(VAR_1, 'c'));
    FUNC_0("mov $0x%lx, #rdi", ~(((1 << (long)VAR_1->bitsize) - 1) << VAR_1->bitoff));
    FUNC_0("and #rdi, #rcx");
    FUNC_0("or #rcx, #rax");
    FUNC_2("rdi");
    FUNC_2("rcx");
}
