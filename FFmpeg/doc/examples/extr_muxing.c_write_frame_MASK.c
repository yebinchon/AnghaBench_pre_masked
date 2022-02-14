
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int stream_index; } ;
struct TYPE_8__ {int index; int time_base; } ;
typedef TYPE_1__ AVStream ;
typedef int AVRational ;
typedef TYPE_2__ AVPacket ;
typedef int AVFormatContext ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int const,int ) ;
 int FUNC_2 (int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_0, const AVRational *VAR_1, AVStream *VAR_2, AVPacket *VAR_3)
{

    FUNC_1(VAR_3, *VAR_1, VAR_2->time_base);
    VAR_3->stream_index = VAR_2->index;


    FUNC_2(VAR_0, VAR_3);
    return FUNC_0(VAR_0, VAR_3);
}
