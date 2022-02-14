
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* internal; TYPE_1__* oformat; } ;
struct TYPE_7__ {scalar_t__ streams_initialized; scalar_t__ initialized; } ;
struct TYPE_6__ {int (* deinit ) (TYPE_3__*) ;} ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(AVFormatContext *VAR_0)
{
    if (VAR_0->oformat && VAR_0->oformat->deinit && VAR_0->internal->initialized)
        VAR_0->oformat->deinit(VAR_0);
    VAR_0->internal->initialized =
    VAR_0->internal->streams_initialized = 0;
}
