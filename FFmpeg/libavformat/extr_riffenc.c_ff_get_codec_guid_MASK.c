
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ff_asf_guid ;
typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_3__ {scalar_t__ id; int const guid; } ;
typedef TYPE_1__ AVCodecGuid ;


 scalar_t__ VAR_0 ;

const ff_asf_guid *FUNC_0(enum AVCodecID VAR_1, const AVCodecGuid *VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_2[VAR_3].id != VAR_0; VAR_3++) {
        if (VAR_1 == VAR_2[VAR_3].id)
            return &(VAR_2[VAR_3].guid);
    }
    return ((void*)0);
}
