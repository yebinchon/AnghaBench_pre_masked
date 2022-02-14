
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* ty; } ;
struct TYPE_6__ {int size; } ;
typedef TYPE_2__ Node ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(Node *VAR_0, Node *VAR_1) {
    FUNC_3("rcx");
    FUNC_3("r11");
    FUNC_1(VAR_1);
    FUNC_0("mov #rax, #rcx");
    FUNC_1(VAR_0);
    int VAR_2 = 0;
    for (; VAR_2 < VAR_0->ty->size; VAR_2 += 8) {
        FUNC_0("movq %d(#rcx), #r11", VAR_2);
        FUNC_0("movq #r11, %d(#rax)", VAR_2);
    }
    for (; VAR_2 < VAR_0->ty->size; VAR_2 += 4) {
        FUNC_0("movl %d(#rcx), #r11", VAR_2);
        FUNC_0("movl #r11, %d(#rax)", VAR_2);
    }
    for (; VAR_2 < VAR_0->ty->size; VAR_2++) {
        FUNC_0("movb %d(#rcx), #r11", VAR_2);
        FUNC_0("movb #r11, %d(#rax)", VAR_2);
    }
    FUNC_2("r11");
    FUNC_2("rcx");
}
