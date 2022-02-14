
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_10__ {scalar_t__ request_probe; TYPE_2__* internal; TYPE_1__* codecpar; } ;
struct TYPE_9__ {scalar_t__ stream_type; scalar_t__ codec_type; scalar_t__ codec_id; } ;
struct TYPE_8__ {int need_context_update; } ;
struct TYPE_7__ {scalar_t__ codec_type; scalar_t__ codec_id; } ;
typedef TYPE_3__ StreamType ;
typedef TYPE_4__ AVStream ;



__attribute__((used)) static void FUNC_0(AVStream *VAR_0,
                                    uint32_t VAR_1,
                                    const StreamType *VAR_2)
{
    for (; VAR_2->stream_type; VAR_2++)
        if (VAR_1 == VAR_2->stream_type) {
            if (VAR_0->codecpar->codec_type != VAR_2->codec_type ||
                VAR_0->codecpar->codec_id != VAR_2->codec_id) {
                VAR_0->codecpar->codec_type = VAR_2->codec_type;
                VAR_0->codecpar->codec_id = VAR_2->codec_id;
                VAR_0->internal->need_context_update = 1;
            }
            VAR_0->request_probe = 0;
            return;
        }
}
