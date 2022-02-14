
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int event_flags; int metadata; } ;
typedef TYPE_1__ AVStream ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int const*,int,int) ;

int FUNC_1(AVFormatContext *VAR_1, AVStream *VAR_2,
                             const uint8_t *VAR_3, int VAR_4)
{
    int VAR_5 = FUNC_0(VAR_1, &VAR_2->metadata, VAR_3, VAR_4, 1);

    if (VAR_5 > 0) {
        VAR_2->event_flags |= VAR_0;
    }

    return VAR_5;
}
