
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {TYPE_1__* pb; } ;
struct TYPE_9__ {int sample_rate; int ext_sample_rate; } ;
struct TYPE_8__ {int seekable; } ;
typedef TYPE_2__ MPEG4AudioConfig ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int ,char*) ;
 int FUNC_2 (TYPE_2__*,int *,int,int,TYPE_3__*) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_3, uint8_t *VAR_4, int VAR_5,
                                int *VAR_6, int *VAR_7)
{
    MPEG4AudioConfig VAR_8;
    int VAR_9;

    VAR_9 = FUNC_2(&VAR_8, VAR_4, VAR_5, 1, VAR_3);





    if (VAR_9 < 0 && (VAR_5 || !(VAR_3->pb->seekable & VAR_0))) {
        FUNC_1(VAR_3, VAR_1,
               "Error parsing AAC extradata, unable to determine samplerate.\n");
        return FUNC_0(VAR_2);
    }

    if (VAR_9 < 0) {





        *VAR_7 = *VAR_6;
    } else {
        *VAR_6 = VAR_8.sample_rate;
        *VAR_7 = VAR_8.ext_sample_rate;
    }
    return 0;
}
