
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int per_frame; } ;
typedef TYPE_1__ VideoData ;
struct TYPE_9__ {TYPE_1__* priv_data; } ;
struct TYPE_8__ {int data; int pts; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_3, AVPacket *VAR_4)
{
    VideoData *VAR_5 = VAR_3->priv_data;

    if (FUNC_2(VAR_4, VAR_2) < 0)
        return FUNC_0(VAR_0);

    FUNC_3(VAR_5->per_frame);

    VAR_4->pts = FUNC_1();
    FUNC_4(VAR_4->data, VAR_1, VAR_2);

    return VAR_2;
}
