
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dcb; int * dc_vlc; scalar_t__ interlaced; TYPE_1__* slice; } ;
struct TYPE_5__ {int * block; int gb; } ;
typedef TYPE_1__ HQXSlice ;
typedef TYPE_2__ HQXContext ;
typedef int GetBitContext ;


 int FUNC_0 (int *,int *,int const*,int ,int ,int*) ;
 size_t FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int** VAR_2 ;
 int FUNC_3 (TYPE_2__*,int,int,int,int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(HQXContext *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    HQXSlice *VAR_7 = &VAR_3->slice[VAR_4];
    GetBitContext *VAR_8 = &VAR_7->gb;
    const int *VAR_9;
    int VAR_10;
    int VAR_11;
    int VAR_12, VAR_13;

    if (VAR_3->interlaced)
        VAR_10 = FUNC_2(VAR_8);
    else
        VAR_10 = 0;

    VAR_9 = VAR_2[FUNC_1(VAR_8, 4)];

    for (VAR_12 = 0; VAR_12 < 8; VAR_12++) {
        int VAR_14 = VAR_3->dcb - 9;
        if (VAR_12 == 0 || VAR_12 == 4 || VAR_12 == 6)
            VAR_11 = 0;
        VAR_13 = FUNC_0(VAR_8, &VAR_3->dc_vlc[VAR_14], VAR_9,
                           VAR_3->dcb, VAR_7->block[VAR_12], &VAR_11);
        if (VAR_13 < 0)
            return VAR_13;
    }

    FUNC_3(VAR_3, 0, VAR_5, VAR_6, VAR_10, VAR_7->block[0], VAR_7->block[2], VAR_1);
    FUNC_3(VAR_3, 0, VAR_5 + 8, VAR_6, VAR_10, VAR_7->block[1], VAR_7->block[3], VAR_1);
    FUNC_3(VAR_3, 2, VAR_5 >> 1, VAR_6, VAR_10, VAR_7->block[4], VAR_7->block[5], VAR_0);
    FUNC_3(VAR_3, 1, VAR_5 >> 1, VAR_6, VAR_10, VAR_7->block[6], VAR_7->block[7], VAR_0);

    return 0;
}
