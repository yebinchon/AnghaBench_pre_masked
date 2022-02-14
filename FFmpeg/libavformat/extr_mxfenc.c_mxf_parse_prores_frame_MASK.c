
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_18__ {int profile; int codec_ul; } ;
struct TYPE_17__ {TYPE_3__* priv_data; } ;
struct TYPE_16__ {int size; } ;
struct TYPE_15__ {TYPE_1__* codecpar; TYPE_2__* priv_data; } ;
struct TYPE_14__ {scalar_t__ header_written; } ;
struct TYPE_13__ {int frame_size; int * codec_ul; } ;
struct TYPE_12__ {int profile; } ;
typedef TYPE_2__ MXFStreamContext ;
typedef TYPE_3__ MXFContext ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVPacket ;
typedef TYPE_6__ AVFormatContext ;


 int FUNC_0 (TYPE_7__*) ;
 TYPE_7__* VAR_0 ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_1, AVStream *VAR_2, AVPacket *VAR_3)
{
    MXFContext *VAR_4 = VAR_1->priv_data;
    MXFStreamContext *VAR_5 = VAR_2->priv_data;
    int VAR_6, VAR_7;

    if (VAR_4->header_written)
        return 1;

    VAR_5->codec_ul = ((void*)0);
    VAR_7 = VAR_2->codecpar->profile;
    for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++) {
        if (VAR_7 == VAR_0[VAR_6].profile) {
            VAR_5->codec_ul = &VAR_0[VAR_6].codec_ul;
            break;
        }
    }
    if (!VAR_5->codec_ul)
        return 0;

    VAR_5->frame_size = VAR_3->size;

    return 1;
}
