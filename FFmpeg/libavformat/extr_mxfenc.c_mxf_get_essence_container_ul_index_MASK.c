
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_2__ {int id; int index; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_0(enum AVCodecID VAR_1)
{
    int VAR_2;
    for (VAR_2 = 0; VAR_0[VAR_2].id; VAR_2++)
        if (VAR_0[VAR_2].id == VAR_1)
            return VAR_0[VAR_2].index;
    return -1;
}
