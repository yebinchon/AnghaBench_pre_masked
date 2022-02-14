
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint32_t ;
typedef scalar_t__ int32_t ;
struct TYPE_5__ {TYPE_1__* codecpar; } ;
struct TYPE_4__ {int bits_per_coded_sample; scalar_t__ height; void* width; } ;
typedef TYPE_2__ AVStream ;
typedef int AVIOContext ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (int *) ;

int FUNC_2(AVIOContext *VAR_0, AVStream *VAR_1, uint32_t *VAR_2)
{
    int VAR_3;
    uint32_t VAR_4 = FUNC_1(VAR_0);
    if (VAR_2)
        *VAR_2 = VAR_4;
    VAR_1->codecpar->width = FUNC_1(VAR_0);
    VAR_1->codecpar->height = (int32_t)FUNC_1(VAR_0);
    FUNC_0(VAR_0);
    VAR_1->codecpar->bits_per_coded_sample = FUNC_0(VAR_0);
    VAR_3 = FUNC_1(VAR_0);
    FUNC_1(VAR_0);
    FUNC_1(VAR_0);
    FUNC_1(VAR_0);
    FUNC_1(VAR_0);
    FUNC_1(VAR_0);
    return VAR_3;
}
