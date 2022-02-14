
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int) ;
 int** VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,void*,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void *VAR_4)
{
    int VAR_5 = FUNC_4();
    for(int VAR_6 = 0; VAR_6 < VAR_0; VAR_6++){
        VAR_3[VAR_5][VAR_6] = (VAR_1 << VAR_6);
        FUNC_3(((void*)0), VAR_6, (void *)&VAR_3[VAR_5][VAR_6], VAR_2);
    }

    for(int VAR_7 = 0; VAR_7 < VAR_0; VAR_7++){
        uint32_t * VAR_8 = (uint32_t *)FUNC_1(((void*)0), VAR_7);
        FUNC_0(*VAR_8, (VAR_1 << VAR_7));
    }

    FUNC_2(((void*)0));
}
