
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int slice_buffer ;
struct TYPE_5__ {scalar_t__ y; } ;
typedef int SnowDWTContext ;
typedef int IDWTELEM ;
typedef TYPE_1__ DWTCompose ;




 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*,int *,int *,int,int,int) ;
 int FUNC_2 (int *,TYPE_1__*,int *,int *,int,int,int) ;

void FUNC_3(SnowDWTContext *VAR_0, DWTCompose *VAR_1,
                                    slice_buffer *VAR_2, IDWTELEM *VAR_3,
                                    int VAR_4, int VAR_5, int VAR_6,
                                    int VAR_7, int VAR_8, int VAR_9)
{
    const int VAR_10 = VAR_7 == 1 ? 3 : 5;
    int VAR_11;
    if (VAR_7 == 2)
        return;

    for (VAR_11 = VAR_8 - 1; VAR_11 >= 0; VAR_11--)
        while (VAR_1[VAR_11].y <= FUNC_0((VAR_9 >> VAR_11) + VAR_10, VAR_5 >> VAR_11)) {
            switch (VAR_7) {
            case 128:
                FUNC_2(VAR_0, VAR_1 + VAR_11, VAR_2, VAR_3,
                                               VAR_4 >> VAR_11,
                                               VAR_5 >> VAR_11,
                                               VAR_6 << VAR_11);
                break;
            case 129:
                FUNC_1(VAR_1 + VAR_11, VAR_2, VAR_3,
                                               VAR_4 >> VAR_11,
                                               VAR_5 >> VAR_11,
                                               VAR_6 << VAR_11);
                break;
            }
        }
}
