
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int time_base; } ;
struct TYPE_8__ {int time_base; } ;
struct TYPE_7__ {int stream_index; int duration; int size; scalar_t__ dts; scalar_t__ pts; int * data; int flags; } ;
typedef TYPE_1__ AVPacket ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_6__* VAR_6 ;
 scalar_t__ FUNC_1 (scalar_t__,int ,scalar_t__,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 TYPE_2__* VAR_20 ;

__attribute__((used)) static void FUNC_5(int VAR_21, int VAR_22)
{
    int VAR_23 = VAR_13 + VAR_21;
    while (1) {
        AVPacket VAR_24;
        uint8_t VAR_25[8] = { 0 };
        FUNC_2(&VAR_24);

        if (FUNC_1(VAR_4, VAR_6->time_base, VAR_19, VAR_20->time_base) < 0) {
            VAR_24.dts = VAR_24.pts = VAR_4;
            VAR_24.stream_index = 1;
            VAR_24.duration = VAR_5;
            VAR_4 += VAR_5;
        } else {
            if (VAR_13 == VAR_23)
                break;
            VAR_24.dts = VAR_19;
            VAR_24.stream_index = 0;
            VAR_24.duration = VAR_11;
            if ((VAR_13 % VAR_14) == 0) {
                VAR_24.flags |= VAR_3;
                VAR_15 = VAR_1;
                VAR_24.pts = VAR_24.dts + VAR_11;
                VAR_19 = VAR_24.pts;
            } else {
                if (VAR_15 == VAR_2) {
                    VAR_15 = VAR_0;
                    VAR_24.pts = VAR_24.dts;
                    VAR_19 = VAR_16;
                } else {
                    VAR_15 = VAR_2;
                    if (((VAR_13 + 1) % VAR_14) == 0) {
                        VAR_24.pts = VAR_24.dts + VAR_11;
                        VAR_19 = VAR_24.pts;
                    } else {
                        VAR_16 = VAR_24.pts = VAR_24.dts + 2 * VAR_11;
                        VAR_19 += VAR_11;
                    }
                }
            }
            if (!VAR_7)
                VAR_24.pts = VAR_24.dts;
            if (VAR_12)
                VAR_24.duration = VAR_12;
            VAR_13++;
        }

        if (VAR_8)
            VAR_24.duration = 0;
        FUNC_0(VAR_25 + 4, VAR_24.pts);
        VAR_24.data = VAR_25;
        VAR_24.size = 8;
        if (VAR_17)
            continue;
        if (VAR_18 && VAR_24.stream_index == 1)
            continue;

        if (VAR_22) {
            VAR_24.pts += (1LL<<32);
            VAR_24.dts += (1LL<<32);
        }

        if (VAR_10)
            FUNC_3(VAR_9, &VAR_24);
        else
            FUNC_4(VAR_9, &VAR_24);
    }
}
