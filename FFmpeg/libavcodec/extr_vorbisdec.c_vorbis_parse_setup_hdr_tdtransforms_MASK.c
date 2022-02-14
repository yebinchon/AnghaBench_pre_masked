
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int avctx; int gb; } ;
typedef TYPE_1__ vorbis_context ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int *,char*,unsigned int,unsigned int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(vorbis_context *VAR_2)
{
    GetBitContext *VAR_3 = &VAR_2->gb;
    unsigned VAR_4, VAR_5 = FUNC_2(VAR_3, 6) + 1;

    for (VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4) {
        unsigned VAR_6 = FUNC_2(VAR_3, 16);

        FUNC_1(((void*)0), " Vorbis time domain transform %u: %u\n",
                VAR_5, VAR_6);

        if (VAR_6) {
            FUNC_0(VAR_2->avctx, VAR_1, "Vorbis time domain transform data nonzero. \n");
            return VAR_0;
        }
    }
    return 0;
}
