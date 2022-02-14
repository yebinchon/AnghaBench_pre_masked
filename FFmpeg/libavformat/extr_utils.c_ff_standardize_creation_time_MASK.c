
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_4__ {int metadata; } ;
typedef TYPE_1__ AVFormatContext ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (TYPE_1__*,int *,int ) ;

int FUNC_2(AVFormatContext *VAR_0)
{
    int64_t VAR_1;
    int VAR_2 = FUNC_1(VAR_0, &VAR_1, 0);
    if (VAR_2 == 1)
        return FUNC_0(&VAR_0->metadata, "creation_time", VAR_1);
    return VAR_2;
}
