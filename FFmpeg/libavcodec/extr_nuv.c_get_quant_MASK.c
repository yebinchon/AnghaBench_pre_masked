
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {void** cq; void** lq; } ;
typedef TYPE_1__ NuvContext ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int const*) ;
 int FUNC_1 (int *,int ,char*) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_2, NuvContext *VAR_3, const uint8_t *VAR_4,
                     int VAR_5)
{
    int VAR_6;
    if (VAR_5 < 2 * 64 * 4) {
        FUNC_1(VAR_2, VAR_1, "insufficient rtjpeg quant data\n");
        return VAR_0;
    }
    for (VAR_6 = 0; VAR_6 < 64; VAR_6++, VAR_4 += 4)
        VAR_3->lq[VAR_6] = FUNC_0(VAR_4);
    for (VAR_6 = 0; VAR_6 < 64; VAR_6++, VAR_4 += 4)
        VAR_3->cq[VAR_6] = FUNC_0(VAR_4);
    return 0;
}
