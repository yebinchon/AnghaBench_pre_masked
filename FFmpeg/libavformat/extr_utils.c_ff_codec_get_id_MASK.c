
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_3__ {scalar_t__ id; unsigned int tag; } ;
typedef TYPE_1__ AVCodecTag ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;

enum AVCodecID FUNC_1(const AVCodecTag *VAR_1, unsigned int VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_1[VAR_3].id != VAR_0; VAR_3++)
        if (VAR_2 == VAR_1[VAR_3].tag)
            return VAR_1[VAR_3].id;
    for (VAR_3 = 0; VAR_1[VAR_3].id != VAR_0; VAR_3++)
        if (FUNC_0(VAR_2) == FUNC_0(VAR_1[VAR_3].tag))
            return VAR_1[VAR_3].id;
    return VAR_0;
}
