
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int avctx; } ;
struct TYPE_6__ {int bfraction_lut_index; int bfraction; TYPE_1__ s; } ;
typedef TYPE_2__ VC1Context ;
struct TYPE_7__ {int table; } ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 int * VAR_3 ;
 TYPE_4__ VAR_4 ;
 int FUNC_1 (int *,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(VC1Context *VAR_5, GetBitContext* VAR_6) {
    int VAR_7 = FUNC_1(VAR_6, VAR_4.table, VAR_2, 1);

    if (VAR_7 == 21 || VAR_7 < 0) {
        FUNC_0(VAR_5->s.avctx, VAR_1, "bfraction invalid\n");
        return VAR_0;
    }
    VAR_5->bfraction_lut_index = VAR_7;
    VAR_5->bfraction = VAR_3[VAR_5->bfraction_lut_index];
    return 0;
}
