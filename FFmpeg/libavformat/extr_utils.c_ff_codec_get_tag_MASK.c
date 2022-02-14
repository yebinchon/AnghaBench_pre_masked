
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_3__ {scalar_t__ id; unsigned int tag; } ;
typedef TYPE_1__ AVCodecTag ;


 scalar_t__ VAR_0 ;

unsigned int FUNC_0(const AVCodecTag *VAR_1, enum AVCodecID VAR_2)
{
    while (VAR_1->id != VAR_0) {
        if (VAR_1->id == VAR_2)
            return VAR_1->tag;
        VAR_1++;
    }
    return 0;
}
