
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {TYPE_3__* priv_data; } ;
struct TYPE_13__ {TYPE_2__* codecpar; } ;
struct TYPE_10__ {int num; int den; } ;
struct TYPE_12__ {int first_image; scalar_t__ pts; TYPE_1__ framerate; } ;
struct TYPE_11__ {int codec_id; int codec_type; } ;
typedef TYPE_3__ FITSContext ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_1 (TYPE_5__*,int *) ;
 int FUNC_2 (TYPE_4__*,int,int ,int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_3)
{
    AVStream *VAR_4;
    FITSContext * VAR_5 = VAR_3->priv_data;

    VAR_4 = FUNC_1(VAR_3, ((void*)0));
    if (!VAR_4)
        return FUNC_0(VAR_2);

    VAR_4->codecpar->codec_type = VAR_0;
    VAR_4->codecpar->codec_id = VAR_1;

    FUNC_2(VAR_4, 64, VAR_5->framerate.den, VAR_5->framerate.num);
    VAR_5->pts = 0;
    VAR_5->first_image = 1;
    return 0;
}
