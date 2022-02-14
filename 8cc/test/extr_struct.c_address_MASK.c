__attribute__((used)) static void FUNC_0() {
    struct tag { int a; struct { int b; } y; } VAR_0 = { 6, 7 };
    int *VAR_1 = &VAR_0.a;
    int *VAR_2 = &VAR_0.y.b;
    FUNC_0(6, *VAR_1);
    FUNC_0(7, *VAR_2);
    FUNC_0(6, *&VAR_0.a);
    FUNC_0(7, *&VAR_0.y.b);

    struct tag *VAR_3 = &VAR_0;
    int *VAR_4 = &VAR_3->a;
    int *VAR_5 = &VAR_3->y.b;
    FUNC_0(6, *VAR_4);
    FUNC_0(7, *VAR_5);
    FUNC_0(6, *&VAR_3->a);
    FUNC_0(7, *&VAR_3->y.b);
}
