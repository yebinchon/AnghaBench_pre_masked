
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1() {
    struct incdec {
 int x, y;
    } VAR_0[] = { { 1, 2 }, { 3, 4 } }, *VAR_1 = VAR_0;
    FUNC_0(1, VAR_1->x);
    FUNC_0(2, VAR_1->y);
    VAR_1++;
    FUNC_0(3, VAR_1->x);
    FUNC_0(4, VAR_1->y);
    VAR_1--;
    FUNC_0(1, VAR_1->x);
    FUNC_0(2, VAR_1->y);
    ++VAR_1;
    FUNC_0(3, VAR_1->x);
    FUNC_0(4, VAR_1->y);
    --VAR_1;
    FUNC_0(1, VAR_1->x);
    FUNC_0(2, VAR_1->y);
}
