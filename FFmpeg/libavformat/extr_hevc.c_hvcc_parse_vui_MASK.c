
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int min_spatial_segmentation_idc; } ;
typedef TYPE_1__ HEVCDecoderConfigurationRecord ;
typedef int GetBitContext ;


 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 unsigned int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int,unsigned int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(GetBitContext *VAR_0,
                           HEVCDecoderConfigurationRecord *VAR_1,
                           unsigned int VAR_2)
{
    unsigned int VAR_3;

    if (FUNC_2(VAR_0))
        if (FUNC_1(VAR_0, 8) == 255)
            FUNC_6(VAR_0, 32);

    if (FUNC_2(VAR_0))
        FUNC_5(VAR_0);

    if (FUNC_2(VAR_0)) {
        FUNC_4(VAR_0, 4);

        if (FUNC_2(VAR_0))





            FUNC_4(VAR_0, 24);
    }

    if (FUNC_2(VAR_0)) {
        FUNC_3(VAR_0);
        FUNC_3(VAR_0);
    }






    FUNC_4(VAR_0, 3);

    if (FUNC_2(VAR_0)) {
        FUNC_3(VAR_0);
        FUNC_3(VAR_0);
        FUNC_3(VAR_0);
        FUNC_3(VAR_0);
    }

    if (FUNC_2(VAR_0)) {
        FUNC_8(VAR_0);

        if (FUNC_2(VAR_0))
            FUNC_7(VAR_0, 1, VAR_2);
    }

    if (FUNC_2(VAR_0)) {





        FUNC_4(VAR_0, 3);

        VAR_3 = FUNC_3(VAR_0);
        VAR_1->min_spatial_segmentation_idc = FUNC_0(VAR_1->min_spatial_segmentation_idc,
                                                   VAR_3);

        FUNC_3(VAR_0);
        FUNC_3(VAR_0);
        FUNC_3(VAR_0);
        FUNC_3(VAR_0);
    }
}
