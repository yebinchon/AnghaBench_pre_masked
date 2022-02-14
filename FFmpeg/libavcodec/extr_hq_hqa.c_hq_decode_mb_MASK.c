
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * block; } ;
typedef TYPE_1__ HQContext ;
typedef int GetBitContext ;
typedef int AVFrame ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int *,int ,int,int,int ) ;
 int FUNC_3 (TYPE_1__*,int *,int,int,int,int,int ,int ) ;

__attribute__((used)) static int FUNC_4(HQContext *VAR_0, AVFrame *VAR_1,
                        GetBitContext *VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5, VAR_6;
    int VAR_7, VAR_8;

    VAR_5 = FUNC_0(VAR_2, 4);
    VAR_6 = FUNC_1(VAR_2);

    for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
        VAR_8 = FUNC_2(VAR_0, VAR_2, VAR_0->block[VAR_7], VAR_5, VAR_7 >= 4, 0);
        if (VAR_8 < 0)
            return VAR_8;
    }

    FUNC_3(VAR_0, VAR_1, 0, VAR_3, VAR_4, VAR_6, VAR_0->block[0], VAR_0->block[2]);
    FUNC_3(VAR_0, VAR_1, 0, VAR_3 + 8, VAR_4, VAR_6, VAR_0->block[1], VAR_0->block[3]);
    FUNC_3(VAR_0, VAR_1, 2, VAR_3 >> 1, VAR_4, VAR_6, VAR_0->block[4], VAR_0->block[5]);
    FUNC_3(VAR_0, VAR_1, 1, VAR_3 >> 1, VAR_4, VAR_6, VAR_0->block[6], VAR_0->block[7]);

    return 0;
}
