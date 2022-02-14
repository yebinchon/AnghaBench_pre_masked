__attribute__((used)) static void FUNC_0() {
    int VAR_0[3] = { [1] = 5 };
    FUNC_0(0, VAR_0[0]);
    FUNC_0(5, VAR_0[1]);
    FUNC_0(0, VAR_0[2]);

    struct { int a, b; } VAR_1[2] = { [1] = { 1, 2 } };
    FUNC_0(0, VAR_1[0].a);
    FUNC_0(0, VAR_1[0].b);
    FUNC_0(1, VAR_1[1].a);
    FUNC_0(2, VAR_1[1].b);

    struct { int a, b; } VAR_2[3] = { [1] = 1, 2, 3, 4 };
    FUNC_0(0, VAR_2[0].a);
    FUNC_0(0, VAR_2[0].b);
    FUNC_0(1, VAR_2[1].a);
    FUNC_0(2, VAR_2[1].b);
    FUNC_0(3, VAR_2[2].a);
    FUNC_0(4, VAR_2[2].b);

    int VAR_3[] = { [2] = 3, [0] = 1, 2 };
    FUNC_0(1, VAR_3[0]);
    FUNC_0(2, VAR_3[1]);
    FUNC_0(3, VAR_3[2]);
}
