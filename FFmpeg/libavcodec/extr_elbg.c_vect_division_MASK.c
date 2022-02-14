
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int*,int*,int) ;

__attribute__((used)) static inline void FUNC_2(int *VAR_0, int *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4;
    if (VAR_2 > 1)
        for (VAR_4=0; VAR_4<VAR_3; VAR_4++)
            VAR_0[VAR_4] = FUNC_0(VAR_1[VAR_4],VAR_2);
    else if (VAR_0 != VAR_1)
        FUNC_1(VAR_0, VAR_1, VAR_3*sizeof(int));

}
