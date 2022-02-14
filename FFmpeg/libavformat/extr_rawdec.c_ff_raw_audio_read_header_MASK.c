
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* iformat; } ;
struct TYPE_10__ {scalar_t__ start_time; int need_parsing; TYPE_1__* codecpar; } ;
struct TYPE_9__ {int raw_codec_id; } ;
struct TYPE_8__ {int codec_id; int codec_type; } ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_1 (TYPE_4__*,int *) ;

int FUNC_2(AVFormatContext *VAR_3)
{
    AVStream *VAR_4 = FUNC_1(VAR_3, ((void*)0));
    if (!VAR_4)
        return FUNC_0(VAR_2);
    VAR_4->codecpar->codec_type = VAR_0;
    VAR_4->codecpar->codec_id = VAR_3->iformat->raw_codec_id;
    VAR_4->need_parsing = VAR_1;
    VAR_4->start_time = 0;


    return 0;
}
