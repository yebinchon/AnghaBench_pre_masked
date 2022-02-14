
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {int parallelismType; } ;
typedef TYPE_1__ HEVCDecoderConfigurationRecord ;
typedef int GetBitContext ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(GetBitContext *VAR_0,
                          HEVCDecoderConfigurationRecord *VAR_1)
{
    uint8_t VAR_2, VAR_3;

    FUNC_2(VAR_0);
    FUNC_2(VAR_0);
    FUNC_3(VAR_0, 7);

    FUNC_2(VAR_0);
    FUNC_2(VAR_0);
    FUNC_1(VAR_0);





    FUNC_3(VAR_0, 2);

    if (FUNC_0(VAR_0))
        FUNC_2(VAR_0);

    FUNC_1(VAR_0);
    FUNC_1(VAR_0);







    FUNC_3(VAR_0, 4);

    VAR_2 = FUNC_0(VAR_0);
    VAR_3 = FUNC_0(VAR_0);

    if (VAR_3 && VAR_2)
        VAR_1->parallelismType = 0;
    else if (VAR_3)
        VAR_1->parallelismType = 3;
    else if (VAR_2)
        VAR_1->parallelismType = 2;
    else
        VAR_1->parallelismType = 1;


    return 0;
}
