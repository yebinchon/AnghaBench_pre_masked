
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int picture_hash; } ;
typedef TYPE_1__ HEVCSEI ;
typedef int GetBitContext ;


 int VAR_0 ;

 int FUNC_0 (void*,int ,char*,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(GetBitContext *VAR_1, void *VAR_2, HEVCSEI *VAR_3,
                                 int VAR_4, int VAR_5)
{
    switch (VAR_4) {
    case 128:
        return FUNC_1(&VAR_3->picture_hash, VAR_1);
    default:
        FUNC_0(VAR_2, VAR_0, "Skipped SUFFIX SEI %d\n", VAR_4);
        FUNC_2(VAR_1, 8 * VAR_5);
        return 0;
    }
}
