
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* oformat; TYPE_1__* internal; } ;
struct TYPE_8__ {scalar_t__ init; } ;
struct TYPE_7__ {int initialized; int streams_initialized; } ;
typedef TYPE_3__ AVFormatContext ;
typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int **) ;
 int FUNC_1 (TYPE_3__*) ;

int FUNC_2(AVFormatContext *VAR_2, AVDictionary **VAR_3)
{
    int VAR_4 = 0;

    if ((VAR_4 = FUNC_0(VAR_2, VAR_3)) < 0)
        return VAR_4;

    VAR_2->internal->initialized = 1;
    VAR_2->internal->streams_initialized = VAR_4;

    if (VAR_2->oformat->init && VAR_4) {
        if ((VAR_4 = FUNC_1(VAR_2)) < 0)
            return VAR_4;

        return VAR_0;
    }

    return VAR_1;
}
