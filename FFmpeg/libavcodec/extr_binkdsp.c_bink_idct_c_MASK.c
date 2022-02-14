
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int *,int*) ;
 int FUNC_1 (int*,int *) ;

__attribute__((used)) static void FUNC_2(int32_t *VAR_0)
{
    int VAR_1;
    int VAR_2[64];

    for (VAR_1 = 0; VAR_1 < 8; VAR_1++)
        FUNC_1(&VAR_2[VAR_1], &VAR_0[VAR_1]);
    for (VAR_1 = 0; VAR_1 < 8; VAR_1++) {
        FUNC_0( (&VAR_0[8*VAR_1]), (&VAR_2[8*VAR_1]) );
    }
}
