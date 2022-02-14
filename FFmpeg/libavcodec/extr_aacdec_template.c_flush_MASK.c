
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__*** che; } ;
struct TYPE_8__ {TYPE_4__* priv_data; } ;
struct TYPE_7__ {TYPE_1__* ch; } ;
struct TYPE_6__ {int saved; } ;
typedef TYPE_2__ ChannelElement ;
typedef TYPE_3__ AVCodecContext ;
typedef TYPE_4__ AACContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(AVCodecContext *VAR_1)
{
    AACContext *VAR_2= VAR_1->priv_data;
    int VAR_3, VAR_4, VAR_5;

    for (VAR_3 = 3; VAR_3 >= 0; VAR_3--) {
        for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
            ChannelElement *VAR_6 = VAR_2->che[VAR_3][VAR_4];
            if (VAR_6) {
                for (VAR_5 = 0; VAR_5 <= 1; VAR_5++) {
                    FUNC_0(VAR_6->ch[VAR_5].saved, 0, sizeof(VAR_6->ch[VAR_5].saved));
                }
            }
        }
    }
}
