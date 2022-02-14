
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int NUTContext ;
typedef int AVIOContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int **) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *,int) ;
 int VAR_0 ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_8(NUTContext *VAR_1, AVIOContext *VAR_2, AVIOContext *VAR_3,
                       int VAR_4, uint64_t VAR_5)
{
    uint8_t *VAR_6 = ((void*)0);
    int VAR_7 = FUNC_1(VAR_3, &VAR_6);
    int VAR_8 = VAR_7 + 4 * VAR_4;

    if (VAR_8 > 4096)
        FUNC_7(VAR_2, VAR_0, 0);
    FUNC_2(VAR_2, VAR_5);
    FUNC_5(VAR_2, VAR_8);
    if (VAR_8 > 4096)
        FUNC_3(VAR_2, FUNC_6(VAR_2));

    if (VAR_4)
        FUNC_7(VAR_2, VAR_0, 0);
    FUNC_4(VAR_2, VAR_6, VAR_7);
    if (VAR_4)
        FUNC_3(VAR_2, FUNC_6(VAR_2));

    FUNC_0(VAR_6);
}
