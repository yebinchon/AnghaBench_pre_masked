
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int objecttype; int sample_rate_index; int channel_conf; } ;
typedef int PutBitContext ;
typedef TYPE_1__ ADTSContext ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,char*,unsigned int,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,scalar_t__) ;
 int FUNC_3 (int *,int,int) ;

__attribute__((used)) static int FUNC_4(ADTSContext *VAR_4,
                                   uint8_t *VAR_5, int VAR_6, int VAR_7)
{
    PutBitContext VAR_8;

    unsigned VAR_9 = (unsigned)VAR_0 + VAR_6 + VAR_7;
    if (VAR_9 > VAR_1) {
        FUNC_0(((void*)0), VAR_3, "ADTS frame size too large: %u (max %d)\n",
               VAR_9, VAR_1);
        return VAR_2;
    }

    FUNC_2(&VAR_8, VAR_5, VAR_0);


    FUNC_3(&VAR_8, 12, 0xfff);
    FUNC_3(&VAR_8, 1, 0);
    FUNC_3(&VAR_8, 2, 0);
    FUNC_3(&VAR_8, 1, 1);
    FUNC_3(&VAR_8, 2, VAR_4->objecttype);
    FUNC_3(&VAR_8, 4, VAR_4->sample_rate_index);
    FUNC_3(&VAR_8, 1, 0);
    FUNC_3(&VAR_8, 3, VAR_4->channel_conf);
    FUNC_3(&VAR_8, 1, 0);
    FUNC_3(&VAR_8, 1, 0);


    FUNC_3(&VAR_8, 1, 0);
    FUNC_3(&VAR_8, 1, 0);
    FUNC_3(&VAR_8, 13, VAR_9);
    FUNC_3(&VAR_8, 11, 0x7ff);
    FUNC_3(&VAR_8, 2, 0);

    FUNC_1(&VAR_8);

    return 0;
}
