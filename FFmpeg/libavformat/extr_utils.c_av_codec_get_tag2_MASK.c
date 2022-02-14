
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_3__ {scalar_t__ id; unsigned int tag; } ;
typedef TYPE_1__ AVCodecTag ;


 scalar_t__ VAR_0 ;

int FUNC_0(const AVCodecTag * const *VAR_1, enum AVCodecID VAR_2,
                      unsigned int *VAR_3)
{
    int VAR_4;
    for (VAR_4 = 0; VAR_1 && VAR_1[VAR_4]; VAR_4++) {
        const AVCodecTag *VAR_5 = VAR_1[VAR_4];
        while (VAR_5->id != VAR_0) {
            if (VAR_5->id == VAR_2) {
                *VAR_3 = VAR_5->tag;
                return 1;
            }
            VAR_5++;
        }
    }
    return 0;
}
