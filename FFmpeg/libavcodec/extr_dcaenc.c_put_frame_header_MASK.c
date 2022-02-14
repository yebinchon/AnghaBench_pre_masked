
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int frame_size; int channel_config; size_t samplerate_index; int bitrate_index; int pb; scalar_t__ lfe_channel; } ;
typedef TYPE_1__ DCAEncContext ;


 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static void FUNC_1(DCAEncContext *VAR_2)
{

    FUNC_0(&VAR_2->pb, 16, 0x7ffe);
    FUNC_0(&VAR_2->pb, 16, 0x8001);


    FUNC_0(&VAR_2->pb, 1, 1);


    FUNC_0(&VAR_2->pb, 5, 31);


    FUNC_0(&VAR_2->pb, 1, 0);


    FUNC_0(&VAR_2->pb, 7, VAR_0 - 1);


    FUNC_0(&VAR_2->pb, 14, VAR_2->frame_size - 1);


    FUNC_0(&VAR_2->pb, 6, VAR_2->channel_config);


    FUNC_0(&VAR_2->pb, 4, VAR_1[VAR_2->samplerate_index]);


    FUNC_0(&VAR_2->pb, 5, VAR_2->bitrate_index);


    FUNC_0(&VAR_2->pb, 1, 0);


    FUNC_0(&VAR_2->pb, 1, 0);


    FUNC_0(&VAR_2->pb, 1, 0);


    FUNC_0(&VAR_2->pb, 1, 0);


    FUNC_0(&VAR_2->pb, 1, 0);


    FUNC_0(&VAR_2->pb, 3, 0);


    FUNC_0(&VAR_2->pb, 1, 0);


    FUNC_0(&VAR_2->pb, 1, 0);


    FUNC_0(&VAR_2->pb, 2, VAR_2->lfe_channel ? 2 : 0);


    FUNC_0(&VAR_2->pb, 1, 1);



    FUNC_0(&VAR_2->pb, 1, 0);


    FUNC_0(&VAR_2->pb, 4, 7);


    FUNC_0(&VAR_2->pb, 2, 0);


    FUNC_0(&VAR_2->pb, 3, 0);


    FUNC_0(&VAR_2->pb, 1, 0);


    FUNC_0(&VAR_2->pb, 1, 0);


    FUNC_0(&VAR_2->pb, 4, 0);
}
