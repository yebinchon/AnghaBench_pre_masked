
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int slice_buffer ;
struct TYPE_6__ {int y; int * b3; int * b2; int * b1; int * b0; } ;
struct TYPE_5__ {int (* horizontal_compose97i ) (int *,int *,int) ;int (* vertical_compose97i ) (int *,int *,int *,int *,int *,int *,int) ;} ;
typedef TYPE_1__ SnowDWTContext ;
typedef int IDWTELEM ;
typedef TYPE_2__ DWTCompose ;


 int FUNC_0 (int,int) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int *,int *,int *,int *,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int *,int *,int) ;
 int FUNC_6 (int *,int *,int *,int) ;
 int FUNC_7 (int *,int *,int *,int) ;
 int FUNC_8 (int *,int *,int *,int) ;

__attribute__((used)) static void FUNC_9(SnowDWTContext *VAR_0, DWTCompose *VAR_1,
                                           slice_buffer * VAR_2, IDWTELEM *VAR_3,
                                           int VAR_4, int VAR_5,
                                           int VAR_6)
{
    int VAR_7 = VAR_1->y;

    IDWTELEM *VAR_8 = VAR_1->b0;
    IDWTELEM *VAR_9 = VAR_1->b1;
    IDWTELEM *VAR_10 = VAR_1->b2;
    IDWTELEM *VAR_11 = VAR_1->b3;
    IDWTELEM *VAR_12 = FUNC_1(VAR_2,
                                         FUNC_0(VAR_7 + 3, VAR_5 - 1) *
                                         VAR_6);
    IDWTELEM *VAR_13 = FUNC_1(VAR_2,
                                         FUNC_0(VAR_7 + 4, VAR_5 - 1) *
                                         VAR_6);

    if (VAR_7 > 0 && VAR_7 + 4 < VAR_5) {
        VAR_0->vertical_compose97i(VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_4);
    } else {
        if (VAR_7 + 3 < (unsigned)VAR_5)
            FUNC_8(VAR_11, VAR_12, VAR_13, VAR_4);
        if (VAR_7 + 2 < (unsigned)VAR_5)
            FUNC_6(VAR_10, VAR_11, VAR_12, VAR_4);
        if (VAR_7 + 1 < (unsigned)VAR_5)
            FUNC_7(VAR_9, VAR_10, VAR_11, VAR_4);
        if (VAR_7 + 0 < (unsigned)VAR_5)
            FUNC_5(VAR_8, VAR_9, VAR_10, VAR_4);
    }

    if (VAR_7 - 1 < (unsigned)VAR_5)
        VAR_0->horizontal_compose97i(VAR_8, VAR_3, VAR_4);
    if (VAR_7 + 0 < (unsigned)VAR_5)
        VAR_0->horizontal_compose97i(VAR_9, VAR_3, VAR_4);

    VAR_1->b0 = VAR_10;
    VAR_1->b1 = VAR_11;
    VAR_1->b2 = VAR_12;
    VAR_1->b3 = VAR_13;
    VAR_1->y += 2;
}
