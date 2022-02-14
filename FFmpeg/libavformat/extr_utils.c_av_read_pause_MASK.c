
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ pb; TYPE_1__* iformat; } ;
struct TYPE_5__ {int (* read_pause ) (TYPE_2__*) ;} ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (TYPE_2__*) ;

int FUNC_3(AVFormatContext *VAR_1)
{
    if (VAR_1->iformat->read_pause)
        return VAR_1->iformat->read_pause(VAR_1);
    if (VAR_1->pb)
        return FUNC_1(VAR_1->pb, 1);
    return FUNC_0(VAR_0);
}
