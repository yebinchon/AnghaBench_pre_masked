
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int HEVCDecoderConfigurationRecord ;
typedef int GetBitContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;





 int FUNC_1 (int*) ;
 int* FUNC_2 (int*,int ,int *,int) ;
 int FUNC_3 (int*,int ,int,int,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int*,int ) ;
 int FUNC_8 (int *,int*) ;

__attribute__((used)) static int FUNC_9(uint8_t *VAR_2, uint32_t VAR_3,
                             int VAR_4,
                             HEVCDecoderConfigurationRecord *VAR_5)
{
    int VAR_6 = 0;
    GetBitContext VAR_7;
    uint8_t VAR_8;
    uint8_t *VAR_9;
    uint32_t VAR_10;

    VAR_9 = FUNC_2(VAR_2, VAR_3, &VAR_10, 2);
    if (!VAR_9) {
        VAR_6 = FUNC_0(VAR_1);
        goto end;
    }

    VAR_6 = FUNC_7(&VAR_7, VAR_9, VAR_10);
    if (VAR_6 < 0)
        goto end;

    FUNC_8(&VAR_7, &VAR_8);






    switch (VAR_8) {
    case 128:
    case 129:
    case 132:
    case 131:
    case 130:
        VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_8,
                                      VAR_4, VAR_5);
        if (VAR_6 < 0)
            goto end;
        else if (VAR_8 == 128)
            VAR_6 = FUNC_6(&VAR_7, VAR_5);
        else if (VAR_8 == 129)
            VAR_6 = FUNC_5(&VAR_7, VAR_5);
        else if (VAR_8 == 132)
            VAR_6 = FUNC_4(&VAR_7, VAR_5);
        if (VAR_6 < 0)
            goto end;
        break;
    default:
        VAR_6 = VAR_0;
        goto end;
    }

end:
    FUNC_1(VAR_9);
    return VAR_6;
}
