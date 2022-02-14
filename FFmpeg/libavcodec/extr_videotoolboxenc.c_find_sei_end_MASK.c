
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_3,
                        uint8_t *VAR_4,
                        size_t VAR_5,
                        uint8_t **VAR_6)
{
    int VAR_7;
    size_t VAR_8 = 0;
    int VAR_9 = 0;
    *VAR_6 = ((void*)0);
    uint8_t *VAR_10 = VAR_4;

    if (!VAR_5)
        return 0;

    VAR_7 = *VAR_4 & 0x1F;
    if (VAR_7 != VAR_2)
        return 0;

    VAR_4++;
    VAR_5--;

    if (VAR_4[VAR_5 - 1] == 0x80)
        VAR_5--;

    while (VAR_5 > 0 && *VAR_4 > 0) {
        do{
            VAR_9 += *VAR_4;
            VAR_4++;
            VAR_5--;
        } while (VAR_5 > 0 && *VAR_4 == 0xFF);

        if (!VAR_5) {
            FUNC_0(VAR_3, VAR_1, "Unexpected end of SEI NAL Unit parsing type.\n");
            return VAR_0;
        }

        do{
            VAR_8 += *VAR_4;
            VAR_4++;
            VAR_5--;
        } while (VAR_5 > 0 && *VAR_4 == 0xFF);

        if (VAR_5 < VAR_8) {
            FUNC_0(VAR_3, VAR_1, "Unexpected end of SEI NAL Unit parsing size.\n");
            return VAR_0;
        }

        VAR_4 += VAR_8;
        VAR_5 -= VAR_8;
    }

    *VAR_6 = VAR_4;

    return VAR_4 - VAR_10 + 1;
}
