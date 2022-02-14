
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_3__ {char* extradata; int channels; int sample_rate; int initial_padding; } ;
typedef TYPE_1__ AVCodecContext ;


 int FUNC_0 (char**,char const*,int) ;
 int FUNC_1 (char**,int) ;
 int FUNC_2 (char**,int ) ;
 int FUNC_3 (char**,int ) ;

__attribute__((used)) static void FUNC_4(AVCodecContext *VAR_0, int VAR_1,
                                 int VAR_2,
                                 int VAR_3,
                                 const uint8_t *VAR_4)
{
    uint8_t *VAR_5 = VAR_0->extradata;
    int VAR_6 = VAR_0->channels;

    FUNC_0(&VAR_5, "OpusHead", 8);
    FUNC_1(&VAR_5, 1);
    FUNC_1(&VAR_5, VAR_6);
    FUNC_2(&VAR_5, VAR_0->initial_padding);
    FUNC_3(&VAR_5, VAR_0->sample_rate);
    FUNC_2(&VAR_5, 0);


    FUNC_1(&VAR_5, VAR_3);
    if (VAR_3 != 0) {
        FUNC_1(&VAR_5, VAR_1);
        FUNC_1(&VAR_5, VAR_2);
        FUNC_0(&VAR_5, VAR_4, VAR_6);
    }
}
