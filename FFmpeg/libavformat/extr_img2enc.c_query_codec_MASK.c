
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_2__ {scalar_t__ id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_0(enum AVCodecID VAR_3, int VAR_4)
{
    int VAR_5;
    for (VAR_5 = 0; VAR_2[VAR_5].id != VAR_0; VAR_5++)
        if (VAR_2[VAR_5].id == VAR_3)
            return 1;


    return VAR_4 < VAR_1;
}
