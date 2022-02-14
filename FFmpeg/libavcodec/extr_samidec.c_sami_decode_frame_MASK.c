
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {TYPE_2__* priv_data; } ;
struct TYPE_13__ {char* data; scalar_t__ size; } ;
struct TYPE_12__ {scalar_t__ num_rects; } ;
struct TYPE_10__ {int str; } ;
struct TYPE_11__ {int readorder; TYPE_1__ full; } ;
typedef TYPE_2__ SAMIContext ;
typedef TYPE_3__ AVSubtitle ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVCodecContext ;


 int FUNC_0 (TYPE_3__*,int ,int ,int ,int *,int *) ;
 int FUNC_1 (TYPE_5__*,char const*) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_0,
                             void *VAR_1, int *VAR_2, AVPacket *VAR_3)
{
    AVSubtitle *VAR_4 = VAR_1;
    const char *VAR_5 = VAR_3->data;
    SAMIContext *VAR_6 = VAR_0->priv_data;

    if (VAR_5 && VAR_3->size > 0) {
        int VAR_7 = FUNC_1(VAR_0, VAR_5);
        if (VAR_7 < 0)
            return VAR_7;

        VAR_7 = FUNC_0(VAR_4, VAR_6->full.str, VAR_6->readorder++, 0, ((void*)0), ((void*)0));
        if (VAR_7 < 0)
            return VAR_7;
    }
    *VAR_2 = VAR_4->num_rects > 0;
    return VAR_3->size;
}
