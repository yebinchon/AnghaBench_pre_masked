
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int gb; int * tonal_scf; int avctx; } ;
struct TYPE_6__ {scalar_t__ id; int len; int data; } ;
typedef TYPE_1__ LBRChunk ;
typedef TYPE_2__ DCALbrDecoder ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_5(DCALbrDecoder *VAR_4, LBRChunk *VAR_5)
{
    int VAR_6, VAR_7;

    if (!VAR_5->len)
        return 0;

    if (FUNC_3(&VAR_4->gb, VAR_5->data, VAR_5->len) < 0)
        return -1;


    if (VAR_5->id == VAR_1 || VAR_5->id == VAR_3) {
        if (FUNC_2(&VAR_4->gb) < 36) {
            FUNC_0(VAR_4->avctx, VAR_0, "Tonal scale factor chunk too short\n");
            return -1;
        }
        for (VAR_6 = 0; VAR_6 < 6; VAR_6++)
            VAR_4->tonal_scf[VAR_6] = FUNC_1(&VAR_4->gb, 6);
    }


    if (VAR_5->id == VAR_2 || VAR_5->id == VAR_3)
        for (VAR_7 = 0; VAR_7 < 5; VAR_7++)
            if (FUNC_4(VAR_4, VAR_7) < 0)
                return -1;

    return 0;
}
