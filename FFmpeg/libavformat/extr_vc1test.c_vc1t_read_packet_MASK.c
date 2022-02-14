
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_11__ {TYPE_2__** streams; int * pb; } ;
struct TYPE_10__ {int pos; int size; int flags; int pts; } ;
struct TYPE_8__ {int den; } ;
struct TYPE_9__ {TYPE_1__ time_base; } ;
typedef TYPE_3__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_2,
                           AVPacket *VAR_3)
{
    AVIOContext *VAR_4 = VAR_2->pb;
    int VAR_5;
    int VAR_6 = 0;
    uint32_t VAR_7;

    if(FUNC_2(VAR_4))
        return FUNC_0(VAR_1);

    VAR_5 = FUNC_4(VAR_4);
    if(FUNC_3(VAR_4) & 0x80)
        VAR_6 = 1;
    VAR_7 = FUNC_5(VAR_4);
    if(FUNC_1(VAR_4, VAR_3, VAR_5) < 0)
        return FUNC_0(VAR_1);
    if(VAR_2->streams[0]->time_base.den == 1000)
        VAR_3->pts = VAR_7;
    VAR_3->flags |= VAR_6 ? VAR_0 : 0;
    VAR_3->pos -= 8;

    return VAR_3->size;
}
