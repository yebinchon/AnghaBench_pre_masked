
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * pb; } ;
typedef TYPE_2__ WtvContext ;
struct TYPE_11__ {TYPE_2__* priv_data; } ;
struct TYPE_10__ {TYPE_1__* codecpar; } ;
struct TYPE_8__ {int codec_tag; } ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_0, AVStream *VAR_1)
{
    WtvContext *VAR_2 = VAR_0->priv_data;
    AVIOContext *VAR_3 = VAR_2->pb;

    FUNC_0(VAR_3, 72);
    VAR_1->codecpar->codec_tag = FUNC_1(VAR_3, VAR_1, ((void*)0));

    return 72 + 40;
}
