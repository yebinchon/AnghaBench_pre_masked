
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int numTemporalLayers; } ;
typedef TYPE_1__ HEVCDecoderConfigurationRecord ;
typedef int GetBitContext ;


 int FUNC_0 (int ,unsigned int) ;
 unsigned int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,TYPE_1__*,unsigned int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(GetBitContext *VAR_0,
                          HEVCDecoderConfigurationRecord *VAR_1)
{
    unsigned int VAR_2;






    FUNC_3(VAR_0, 12);

    VAR_2 = FUNC_1(VAR_0, 3);
    VAR_1->numTemporalLayers = FUNC_0(VAR_1->numTemporalLayers,
                                    VAR_2 + 1);





    FUNC_3(VAR_0, 17);

    FUNC_2(VAR_0, VAR_1, VAR_2);


    return 0;
}
