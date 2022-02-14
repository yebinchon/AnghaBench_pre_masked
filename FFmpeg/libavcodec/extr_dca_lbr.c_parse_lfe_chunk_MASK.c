
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int flags; int avctx; int gb; } ;
struct TYPE_7__ {int len; int data; } ;
typedef TYPE_1__ LBRChunk ;
typedef TYPE_2__ DCALbrDecoder ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(DCALbrDecoder *VAR_2, LBRChunk *VAR_3)
{
    if (!(VAR_2->flags & VAR_1))
        return 0;

    if (!VAR_3->len)
        return 0;

    if (FUNC_1(&VAR_2->gb, VAR_3->data, VAR_3->len) < 0)
        return -1;


    if (VAR_3->len >= 52)
        return FUNC_3(VAR_2);
    if (VAR_3->len >= 35)
        return FUNC_2(VAR_2);

    FUNC_0(VAR_2->avctx, VAR_0, "LFE chunk too short\n");
    return -1;
}
