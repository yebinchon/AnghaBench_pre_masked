
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int codec_tag; int workaround_bugs; TYPE_1__* codec; int coded_height; int coded_width; } ;
struct TYPE_7__ {int codec_tag; int workaround_bugs; int codec_id; int height; int width; TYPE_3__* avctx; } ;
struct TYPE_6__ {int id; } ;
typedef TYPE_2__ MpegEncContext ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ) ;

void FUNC_1(MpegEncContext *VAR_0, AVCodecContext *VAR_1)
{
    VAR_0->avctx = VAR_1;
    VAR_0->width = VAR_1->coded_width;
    VAR_0->height = VAR_1->coded_height;
    VAR_0->codec_id = VAR_1->codec->id;
    VAR_0->workaround_bugs = VAR_1->workaround_bugs;


    VAR_0->codec_tag = FUNC_0(VAR_1->codec_tag);
}
