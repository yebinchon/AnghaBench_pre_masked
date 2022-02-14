
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {TYPE_4__* channel; } ;
struct TYPE_10__ {int prev_win; } ;
struct TYPE_9__ {TYPE_1__* block_config; TYPE_5__* block; } ;
struct TYPE_8__ {TYPE_3__* priv_data; } ;
struct TYPE_7__ {int count; scalar_t__* type; } ;
typedef TYPE_2__ AVCodecContext ;
typedef TYPE_3__ ATRAC9Context ;
typedef TYPE_4__ ATRAC9ChannelData ;
typedef TYPE_5__ ATRAC9BlockData ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(AVCodecContext *VAR_1)
{
    ATRAC9Context *VAR_2 = VAR_1->priv_data;

    for (int VAR_3 = 0; VAR_3 < VAR_2->block_config->count; VAR_3++) {
        ATRAC9BlockData *VAR_4 = &VAR_2->block[VAR_3];
        const int VAR_5 = VAR_2->block_config->type[VAR_3] == VAR_0;
        for (int VAR_6 = 0; VAR_6 <= VAR_5; VAR_6++) {
            ATRAC9ChannelData *VAR_7 = &VAR_4->channel[VAR_6];
            FUNC_0(VAR_7->prev_win, 0, sizeof(VAR_7->prev_win));
        }
    }
}
