
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_10__ {TYPE_2__* internal; int pb; } ;
struct TYPE_9__ {TYPE_1__* sys; } ;
struct TYPE_8__ {int data_offset; } ;
struct TYPE_7__ {int frame_size; } ;
typedef TYPE_3__ DVDemuxContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int64_t FUNC_1(AVFormatContext *VAR_0, DVDemuxContext *VAR_1,
                               int64_t VAR_2, int VAR_3)
{

    const int VAR_4 = VAR_1->sys->frame_size;
    int64_t VAR_5;
    int64_t VAR_6 = FUNC_0(VAR_0->pb) - VAR_0->internal->data_offset;
    int64_t VAR_7 = ((VAR_6 - 1) / VAR_4) * VAR_4;

    VAR_5 = VAR_4 * VAR_2;

    if (VAR_6 >= 0 && VAR_5 > VAR_7)
        VAR_5 = VAR_7;
    else if (VAR_5 < 0)
        VAR_5 = 0;

    return VAR_5 + VAR_0->internal->data_offset;
}
