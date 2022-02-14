
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1() {
    struct tag {
        int val;
        struct tag *next;
    };
    struct tag VAR_0 = { 1, ((void*)0) };
    struct tag VAR_1 = { 2, &VAR_0 };
    struct tag VAR_2 = { 3, &VAR_1 };
    struct tag *VAR_3 = &VAR_2;
    FUNC_0(3, VAR_3->val);
    FUNC_0(2, VAR_3->next->val);
    FUNC_0(1, VAR_3->next->next->val);
    VAR_3->next = VAR_3->next->next;
    FUNC_0(1, VAR_3->next->val);
}
