
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_11__ {TYPE_2__** streams; } ;
struct TYPE_10__ {int size; scalar_t__ duration; scalar_t__ data; scalar_t__ pts; scalar_t__ dts; } ;
struct TYPE_9__ {scalar_t__ cur_dts; scalar_t__ duration; scalar_t__ start_time; TYPE_1__* codecpar; } ;
struct TYPE_8__ {scalar_t__ frame_size; } ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_3, AVPacket *VAR_4)
{
    int64_t VAR_5, VAR_6;

    VAR_5 = VAR_3->streams[0]->cur_dts;
    VAR_6 = VAR_5 + VAR_3->streams[0]->codecpar->frame_size;
    if (VAR_3->streams[0]->duration != VAR_1)
        VAR_6 = FUNC_3(VAR_3->streams[0]->start_time + VAR_3->streams[0]->duration,
                       VAR_6);
    if (VAR_6 <= VAR_5)
        return VAR_0;
    if (FUNC_4(VAR_4, 12) < 0)
        return FUNC_0(VAR_2);
    VAR_4->dts = VAR_4->pts = VAR_5;
    VAR_4->duration = VAR_6 - VAR_5;
    FUNC_2(VAR_4->data + 0, VAR_5);
    FUNC_1(VAR_4->data + 8, VAR_4->duration);
    return VAR_4->size;
}
