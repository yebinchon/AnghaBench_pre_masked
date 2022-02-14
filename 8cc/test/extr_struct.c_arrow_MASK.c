
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1() {
    struct cell { int val; struct cell *next; };
    struct cell VAR_0 = { 5, ((void*)0) };
    struct cell VAR_1 = { 6, &VAR_0 };
    struct cell VAR_2 = { 7, &VAR_1 };
    struct cell *VAR_3 = &VAR_2;
    FUNC_0(7, VAR_2);
    FUNC_0(7, VAR_3->val);
    FUNC_0(6, VAR_3->next->val);
    FUNC_0(5, VAR_3->next->next->val);

    VAR_3->val = 10;
    VAR_3->next->val = 11;
    VAR_3->next->next->val = 12;
    FUNC_0(10, VAR_3->val);
    FUNC_0(11, VAR_3->next->val);
    FUNC_0(12, VAR_3->next->next->val);
}
