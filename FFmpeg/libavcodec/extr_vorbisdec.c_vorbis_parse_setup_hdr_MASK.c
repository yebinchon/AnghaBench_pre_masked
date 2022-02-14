
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int avctx; int gb; } ;
typedef TYPE_1__ vorbis_context ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 char FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(vorbis_context *VAR_2)
{
    GetBitContext *VAR_3 = &VAR_2->gb;
    int VAR_4;

    if ((FUNC_1(VAR_3, 8) != 'v') || (FUNC_1(VAR_3, 8) != 'o') ||
        (FUNC_1(VAR_3, 8) != 'r') || (FUNC_1(VAR_3, 8) != 'b') ||
        (FUNC_1(VAR_3, 8) != 'i') || (FUNC_1(VAR_3, 8) != 's')) {
        FUNC_0(VAR_2->avctx, VAR_1, " Vorbis setup header packet corrupt (no vorbis signature). \n");
        return VAR_0;
    }

    if ((VAR_4 = FUNC_3(VAR_2))) {
        FUNC_0(VAR_2->avctx, VAR_1, " Vorbis setup header packet corrupt (codebooks). \n");
        return VAR_4;
    }
    if ((VAR_4 = FUNC_8(VAR_2))) {
        FUNC_0(VAR_2->avctx, VAR_1, " Vorbis setup header packet corrupt (time domain transforms). \n");
        return VAR_4;
    }
    if ((VAR_4 = FUNC_4(VAR_2))) {
        FUNC_0(VAR_2->avctx, VAR_1, " Vorbis setup header packet corrupt (floors). \n");
        return VAR_4;
    }
    if ((VAR_4 = FUNC_7(VAR_2))) {
        FUNC_0(VAR_2->avctx, VAR_1, " Vorbis setup header packet corrupt (residues). \n");
        return VAR_4;
    }
    if ((VAR_4 = FUNC_5(VAR_2))) {
        FUNC_0(VAR_2->avctx, VAR_1, " Vorbis setup header packet corrupt (mappings). \n");
        return VAR_4;
    }
    if ((VAR_4 = FUNC_6(VAR_2))) {
        FUNC_0(VAR_2->avctx, VAR_1, " Vorbis setup header packet corrupt (modes). \n");
        return VAR_4;
    }
    if (!FUNC_2(VAR_3)) {
        FUNC_0(VAR_2->avctx, VAR_1, " Vorbis setup header packet corrupt (framing flag). \n");
        return VAR_0;
    }

    return 0;
}
