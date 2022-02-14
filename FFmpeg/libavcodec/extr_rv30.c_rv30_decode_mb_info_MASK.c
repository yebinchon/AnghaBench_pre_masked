
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pict_type; int avctx; int gb; } ;
struct TYPE_4__ {TYPE_2__ s; } ;
typedef TYPE_1__ RV34DecContext ;
typedef TYPE_2__ MpegEncContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 unsigned int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(RV34DecContext *VAR_2)
{
    static const int VAR_3[6] = { 130, 132, 131, -1, 129, 128 };
    static const int VAR_4[6] = { 130, 134, 133, 135, 129, 128 };
    MpegEncContext *VAR_5 = &VAR_2->s;
    GetBitContext *VAR_6 = &VAR_5->gb;
    unsigned VAR_7 = FUNC_1(VAR_6);

    if (VAR_7 > 11) {
        FUNC_0(VAR_5->avctx, VAR_0, "Incorrect MB type code\n");
        return -1;
    }
    if(VAR_7 > 5){
        FUNC_0(VAR_5->avctx, VAR_0, "dquant needed\n");
        VAR_7 -= 6;
    }
    if(VAR_5->pict_type != VAR_1)
        return VAR_3[VAR_7];
    else
        return VAR_4[VAR_7];
}
