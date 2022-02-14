
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ y; } ;
typedef int IDWTELEM ;
typedef TYPE_1__ DWTCompose ;




 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*,int *,int *,int,int,int) ;
 int FUNC_2 (TYPE_1__*,int *,int *,int,int,int) ;

__attribute__((used)) static void FUNC_3(DWTCompose *VAR_0, IDWTELEM *VAR_1,
                                  IDWTELEM *VAR_2, int VAR_3, int VAR_4,
                                  int VAR_5, int VAR_6,
                                  int VAR_7, int VAR_8)
{
    const int VAR_9 = VAR_6 == 1 ? 3 : 5;
    int VAR_10;
    if (VAR_6 == 2)
        return;

    for (VAR_10 = VAR_7 - 1; VAR_10 >= 0; VAR_10--)
        while (VAR_0[VAR_10].y <= FUNC_0((VAR_8 >> VAR_10) + VAR_9, VAR_4 >> VAR_10)) {
            switch (VAR_6) {
            case 128:
                FUNC_2(VAR_0 + VAR_10, VAR_1, VAR_2, VAR_3 >> VAR_10,
                                      VAR_4 >> VAR_10, VAR_5 << VAR_10);
                break;
            case 129:
                FUNC_1(VAR_0 + VAR_10, VAR_1, VAR_2, VAR_3 >> VAR_10,
                                      VAR_4 >> VAR_10, VAR_5 << VAR_10);
                break;
            }
        }
}
