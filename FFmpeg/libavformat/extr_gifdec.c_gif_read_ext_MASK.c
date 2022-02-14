
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int * pb; TYPE_1__* priv_data; } ;
struct TYPE_5__ {scalar_t__ delay; scalar_t__ min_delay; scalar_t__ default_delay; int total_iter; int max_delay; } ;
typedef TYPE_1__ GIFDemuxContext ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int*,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_5)
{
    GIFDemuxContext *VAR_6 = VAR_5->priv_data;
    AVIOContext *VAR_7 = VAR_5->pb;
    int VAR_8, VAR_9 = FUNC_3(VAR_7);
    int VAR_10;

    if (VAR_9 == VAR_3) {
        if ((VAR_8 = FUNC_3(VAR_7)) < 4) {
            FUNC_2(VAR_5, VAR_1, "Graphic Control Extension block's size less than 4.\n");
            return VAR_0;
        }


        if ((VAR_10 = FUNC_6(VAR_7, 1)) < 0)
            return VAR_10;

        VAR_6->delay = FUNC_5(VAR_7);

        if (VAR_6->delay < VAR_6->min_delay)
            VAR_6->delay = VAR_6->default_delay;
        VAR_6->delay = FUNC_1(VAR_6->delay, VAR_6->max_delay);


        if ((VAR_10 = FUNC_6(VAR_7, VAR_8 - 3)) < 0 )
            return VAR_10;
    } else if (VAR_9 == VAR_2) {
        uint8_t VAR_11[256];

        VAR_8 = FUNC_3(VAR_7);
        VAR_10 = FUNC_4(VAR_7, VAR_11, VAR_8);
        if (VAR_10 < 0 || !VAR_8)
            return VAR_10;

        if (VAR_8 == FUNC_8(VAR_4)) {
            VAR_8 = FUNC_3(VAR_7);
            VAR_10 = FUNC_4(VAR_7, VAR_11, VAR_8);
            if (VAR_10 < 0 || !VAR_8)
                return VAR_10;

            if (VAR_8 == 3 && VAR_11[0] == 1) {
                VAR_6->total_iter = FUNC_0(VAR_11+1);

                if (VAR_6->total_iter == 0)
                    VAR_6->total_iter = -1;
            }
        }
    }

    if ((VAR_10 = FUNC_7(VAR_7)) < 0)
        return VAR_10;

    return 0;
}
