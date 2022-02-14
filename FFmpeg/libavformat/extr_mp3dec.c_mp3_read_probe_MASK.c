
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {int buf_size; int * buf; } ;
struct TYPE_5__ {scalar_t__ frame_size; } ;
typedef TYPE_1__ MPADecodeHeader ;
typedef TYPE_2__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (int const*,int ) ;
 int FUNC_4 (int const*) ;

__attribute__((used)) static int FUNC_5(const AVProbeData *VAR_3)
{
    int VAR_4, VAR_5 = 0;
    int VAR_6 = 0;
    int VAR_7, VAR_8;
    int VAR_9, VAR_10;
    uint32_t VAR_11;
    const uint8_t *VAR_12, *VAR_13, *VAR_14, *VAR_15;

    VAR_13 = VAR_3->buf;
    VAR_15 = VAR_3->buf + VAR_3->buf_size - sizeof(uint32_t);
    while (VAR_13 < VAR_15 && !*VAR_13)
        VAR_13++;

    VAR_4 = 0;
    VAR_10 = 0;
    VAR_12 = VAR_13;

    for (; VAR_12 < VAR_15; VAR_12 = VAR_14+1) {
        VAR_14 = VAR_12;
        for (VAR_9 = VAR_7 = 0; VAR_14 < VAR_15; VAR_7++) {
            MPADecodeHeader VAR_16;

            VAR_11 = FUNC_0(VAR_14);
            VAR_8 = FUNC_2(&VAR_16, VAR_11);
            if (VAR_8 != 0)
                break;
            VAR_14 += VAR_16.frame_size;
            VAR_9 += VAR_16.frame_size;
        }
        VAR_4 = FUNC_1(VAR_4, VAR_7);
        VAR_10 = FUNC_1(VAR_10, VAR_9);
        if (VAR_12 == VAR_13) {
            VAR_5= VAR_7;
            if (VAR_14 == VAR_15 + sizeof(uint32_t))
                VAR_6 = 1;
        }
    }


    if (VAR_5>=7) return VAR_0 + 1;
    else if (VAR_4>200 && VAR_3->buf_size < 2*VAR_10)return VAR_0;
    else if (VAR_4>=4 && VAR_3->buf_size < 2*VAR_10) return VAR_0 / 2;
    else if (FUNC_3(VAR_13, VAR_1) && 2*FUNC_4(VAR_13) >= VAR_3->buf_size)
                           return VAR_3->buf_size < VAR_2 ? VAR_0 / 4 : VAR_0 - 2;
    else if (VAR_5 > 1 && VAR_6) return 5;
    else if (VAR_4>=1 && VAR_3->buf_size < 10*VAR_10) return 1;
    else return 0;

}
