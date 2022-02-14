
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* write_uncoded_frame ) (TYPE_1__*,int,int *,int ) ;} ;
struct TYPE_5__ {TYPE_4__* oformat; } ;
typedef TYPE_1__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_1__*,int,int *,int ) ;

int FUNC_3(AVFormatContext *VAR_2, int VAR_3)
{
    FUNC_1(VAR_2->oformat);
    if (!VAR_2->oformat->write_uncoded_frame)
        return FUNC_0(VAR_1);
    return VAR_2->oformat->write_uncoded_frame(VAR_2, VAR_3, ((void*)0),
                                           VAR_0);
}
