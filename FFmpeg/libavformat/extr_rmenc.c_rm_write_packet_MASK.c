
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__** streams; } ;
struct TYPE_11__ {size_t stream_index; int flags; int size; int data; } ;
struct TYPE_10__ {TYPE_1__* codecpar; } ;
struct TYPE_9__ {scalar_t__ codec_type; } ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_1 (TYPE_4__*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_1, AVPacket *VAR_2)
{
    if (VAR_1->streams[VAR_2->stream_index]->codecpar->codec_type ==
        VAR_0)
        return FUNC_0(VAR_1, VAR_2->data, VAR_2->size, VAR_2->flags);
    else
        return FUNC_1(VAR_1, VAR_2->data, VAR_2->size, VAR_2->flags);
}
