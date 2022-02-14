
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int frame_size; int avctx; int gb; } ;
typedef TYPE_1__ DCAXllDecoder ;
typedef int DCAExssAsset ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_7(DCAXllDecoder *VAR_2, uint8_t *VAR_3, int VAR_4, DCAExssAsset *VAR_5)
{
    int VAR_6;

    if ((VAR_6 = FUNC_2(&VAR_2->gb, VAR_3, VAR_4)) < 0)
        return VAR_6;
    if ((VAR_6 = FUNC_4(VAR_2)) < 0)
        return VAR_6;
    if ((VAR_6 = FUNC_6(VAR_2, VAR_5)) < 0)
        return VAR_6;
    if ((VAR_6 = FUNC_5(VAR_2)) < 0)
        return VAR_6;
    if ((VAR_6 = FUNC_3(VAR_2)) < 0)
        return VAR_6;
    if (FUNC_1(&VAR_2->gb, VAR_2->frame_size * 8)) {
        FUNC_0(VAR_2->avctx, VAR_1, "Read past end of XLL frame\n");
        return VAR_0;
    }
    return VAR_6;
}
