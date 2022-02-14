
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ff_asf_guid ;
typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_3__ {scalar_t__ id; int guid; } ;
typedef TYPE_1__ AVCodecGuid ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;

enum AVCodecID FUNC_1(const AVCodecGuid *VAR_1, ff_asf_guid VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_1[VAR_3].id != VAR_0; VAR_3++)
        if (!FUNC_0(VAR_1[VAR_3].guid, VAR_2))
            return VAR_1[VAR_3].id;
    return VAR_0;
}
