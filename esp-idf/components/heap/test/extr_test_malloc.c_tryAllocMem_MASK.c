
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int** VAR_0 ;
 void* FUNC_0 (int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(void) {
    int VAR_2, VAR_3;
    const int VAR_4=1024*5;

    VAR_0=FUNC_0(sizeof(int *)*VAR_4);
    if (!VAR_0) return 0;

    for (VAR_2=0; VAR_2<VAR_4; VAR_2++) {
        VAR_0[VAR_2]=FUNC_0(1024);
        if (VAR_0[VAR_2]==((void*)0)) break;
        for (VAR_3=0; VAR_3<1024/4; VAR_3++) VAR_0[VAR_2][VAR_3]=(0xdeadbeef);
    }
    VAR_1=VAR_2;
    return VAR_2;
}
