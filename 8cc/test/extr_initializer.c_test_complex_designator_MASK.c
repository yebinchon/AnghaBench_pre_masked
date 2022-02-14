__attribute__((used)) static void FUNC_0() {
    struct { struct { int a, b; } x[3]; } VAR_0[] = {
        [1].x[0].b = 5, 6, 7, 8, 9,
        [0].x[2].b = 10, 11
    };
    FUNC_0(0, VAR_0[0].x[0].a);
    FUNC_0(0, VAR_0[0].x[0].b);
    FUNC_0(0, VAR_0[0].x[1].a);
    FUNC_0(0, VAR_0[0].x[1].b);
    FUNC_0(0, VAR_0[0].x[2].a);
    FUNC_0(10, VAR_0[0].x[2].b);
    FUNC_0(11, VAR_0[1].x[0].a);
    FUNC_0(5, VAR_0[1].x[0].b);
    FUNC_0(6, VAR_0[1].x[1].a);
    FUNC_0(7, VAR_0[1].x[1].b);
    FUNC_0(8, VAR_0[1].x[2].a);
    FUNC_0(9, VAR_0[1].x[2].b);

    int VAR_1[][3] = { [0][0] = 1, [1][0] = 3 };
    FUNC_0(1, VAR_1[0][0]);
    FUNC_0(3, VAR_1[1][0]);

    struct { int a, b[3]; } VAR_2 = { .a = 1, .b[0] = 10, .b[1] = 11 };
    FUNC_0(1, VAR_2);
    FUNC_0(10, VAR_2[0]);
    FUNC_0(11, VAR_2[1]);
    FUNC_0(0, VAR_2[2]);
}
