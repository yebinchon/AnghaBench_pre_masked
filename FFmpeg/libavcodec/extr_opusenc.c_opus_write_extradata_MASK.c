
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int channels; int initial_padding; int sample_rate; int * extradata; } ;
typedef TYPE_1__ AVCodecContext ;


 int FUNC_0 (int **,char*,int) ;
 int FUNC_1 (int **,int) ;
 int FUNC_2 (int **,int) ;
 int FUNC_3 (int **,int ) ;

__attribute__((used)) static void FUNC_4(AVCodecContext *VAR_0)
{
    uint8_t *VAR_1 = VAR_0->extradata;

    FUNC_0(&VAR_1, "OpusHead", 8);
    FUNC_1 (&VAR_1, 0x1);
    FUNC_1 (&VAR_1, VAR_0->channels);
    FUNC_2 (&VAR_1, VAR_0->initial_padding);
    FUNC_3 (&VAR_1, VAR_0->sample_rate);
    FUNC_2 (&VAR_1, 0x0);
    FUNC_1 (&VAR_1, 0x0);
}
