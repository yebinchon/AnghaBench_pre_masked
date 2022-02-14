
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int y; int * b1; int * b0; } ;
typedef int IDWTELEM ;
typedef TYPE_1__ DWTCompose ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *,int *,int) ;
 int FUNC_3 (int *,int *,int *,int) ;

__attribute__((used)) static void FUNC_4(DWTCompose *VAR_0, IDWTELEM *VAR_1,
                                  IDWTELEM *VAR_2, int VAR_3, int VAR_4,
                                  int VAR_5)
{
    int VAR_6 = VAR_0->y;
    IDWTELEM *VAR_7 = VAR_0->b0;
    IDWTELEM *VAR_8 = VAR_0->b1;
    IDWTELEM *VAR_9 = VAR_1 + FUNC_0(VAR_6 + 1, VAR_4 - 1) * VAR_5;
    IDWTELEM *VAR_10 = VAR_1 + FUNC_0(VAR_6 + 2, VAR_4 - 1) * VAR_5;

    if (VAR_6 + 1 < (unsigned)VAR_4)
        FUNC_3(VAR_8, VAR_9, VAR_10, VAR_3);
    if (VAR_6 + 0 < (unsigned)VAR_4)
        FUNC_2(VAR_7, VAR_8, VAR_9, VAR_3);

    if (VAR_6 - 1 < (unsigned)VAR_4)
        FUNC_1(VAR_7, VAR_2, VAR_3);
    if (VAR_6 + 0 < (unsigned)VAR_4)
        FUNC_1(VAR_8, VAR_2, VAR_3);

    VAR_0->b0 = VAR_9;
    VAR_0->b1 = VAR_10;
    VAR_0->y += 2;
}
