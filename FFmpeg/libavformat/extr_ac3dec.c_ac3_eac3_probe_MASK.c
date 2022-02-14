
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
typedef int buf3 ;
struct TYPE_3__ {int* buf; int buf_size; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int const*,int,int*,int*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int ,int const*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int const*,char*,int) ;

__attribute__((used)) static int FUNC_6(const AVProbeData *VAR_4, enum AVCodecID VAR_5)
{
    int VAR_6, VAR_7 = 0, VAR_8;
    const uint8_t *VAR_9, *VAR_10, *VAR_11;
    enum AVCodecID VAR_12 = VAR_1;

    VAR_6 = 0;
    VAR_9 = VAR_4->buf;
    VAR_11 = VAR_9 + VAR_4->buf_size;

    for(; VAR_9 < VAR_11; VAR_9++) {
        if(VAR_9 > VAR_4->buf && !(VAR_9[0] == 0x0B && VAR_9[1] == 0x77)
                        && !(VAR_9[0] == 0x77 && VAR_9[1] == 0x0B) )
            continue;
        VAR_10 = VAR_9;

        for(VAR_8 = 0; VAR_10 < VAR_11; VAR_8++) {
            uint8_t VAR_13[4096];
            uint8_t VAR_14;
            uint16_t VAR_15;
            int VAR_16, VAR_17;

            if(!FUNC_5(VAR_10, "\x1\x10", 2)) {
                if (VAR_10 + 16 > VAR_11)
                    break;
                VAR_10+=16;
            }
            if (VAR_9[0] == 0x77 && VAR_9[1] == 0x0B) {
                for(VAR_16=0; VAR_16<8; VAR_16+=2) {
                    VAR_13[VAR_16 ] = VAR_10[VAR_16+1];
                    VAR_13[VAR_16+1] = VAR_10[VAR_16 ];
                }
                VAR_17 = FUNC_1(VAR_13, 8, &VAR_14,
                                          &VAR_15);
            }else
                VAR_17 = FUNC_1(VAR_10, VAR_11 - VAR_10, &VAR_14,
                                          &VAR_15);
            if (VAR_17 < 0)
                break;
            if(VAR_10 + VAR_15 > VAR_11)
                break;
            if (VAR_9[0] == 0x77 && VAR_9[1] == 0x0B) {
                FUNC_2(VAR_15 <= sizeof(VAR_13));
                for(VAR_16 = 8; VAR_16 < VAR_15; VAR_16 += 2) {
                    VAR_13[VAR_16 ] = VAR_10[VAR_16+1];
                    VAR_13[VAR_16+1] = VAR_10[VAR_16 ];
                }
                if (FUNC_3(FUNC_4(VAR_3), 0, VAR_13 + 2, VAR_15 - 2))
                    break;
            } else {
                if (FUNC_3(FUNC_4(VAR_3), 0, VAR_10 + 2, VAR_15 - 2))
                    break;
            }
            if (VAR_14 > 10)
                VAR_12 = VAR_2;
            VAR_10 += VAR_15;
        }
        VAR_6 = FUNC_0(VAR_6, VAR_8);
        if(VAR_9 == VAR_4->buf)
            VAR_7 = VAR_8;
    }
    if(VAR_12 != VAR_5) return 0;


    if (VAR_7>=7) return VAR_0 + 1;
    else if(VAR_6>200)return VAR_0;
    else if(VAR_6>=4) return VAR_0/2;
    else if(VAR_6>=1) return 1;
    else return 0;
}
