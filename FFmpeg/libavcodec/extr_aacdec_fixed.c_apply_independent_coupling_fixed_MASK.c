
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_17__ {TYPE_4__* oc; } ;
struct TYPE_11__ {int** gain; } ;
struct TYPE_16__ {TYPE_2__* ch; TYPE_1__ coup; } ;
struct TYPE_15__ {unsigned int* ret; } ;
struct TYPE_13__ {int sbr; } ;
struct TYPE_14__ {TYPE_3__ m4ac; } ;
struct TYPE_12__ {int* ret; } ;
typedef TYPE_5__ SingleChannelElement ;
typedef TYPE_6__ ChannelElement ;
typedef TYPE_7__ AACContext ;


 int* VAR_0 ;

__attribute__((used)) static void FUNC_0(AACContext *VAR_1,
                                       SingleChannelElement *VAR_2,
                                       ChannelElement *VAR_3, int VAR_4)
{
    int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
    const int VAR_10 = VAR_3->coup.gain[VAR_4][0];
    const int *VAR_11 = VAR_3->ch[0].ret;
    unsigned int *VAR_12 = VAR_2->ret;
    const int VAR_13 = 1024 << (VAR_1->oc[1].m4ac.sbr == 1);

    VAR_6 = VAR_0[VAR_10 & 7];
    VAR_7 = (VAR_10-1024) >> 3;
    if (VAR_7 < -31) {
        return;
    } else if (VAR_7 < 0) {
        VAR_7 = -VAR_7;
        VAR_8 = 1 << (VAR_7 - 1);

        for (VAR_5 = 0; VAR_5 < VAR_13; VAR_5++) {
            VAR_9 = (int)(((int64_t)VAR_11[VAR_5] * VAR_6 + (int64_t)0x1000000000) >> 37);
            VAR_12[VAR_5] += (VAR_9 + VAR_8) >> VAR_7;
        }
    }
    else {
      for (VAR_5 = 0; VAR_5 < VAR_13; VAR_5++) {
          VAR_9 = (int)(((int64_t)VAR_11[VAR_5] * VAR_6 + (int64_t)0x1000000000) >> 37);
          VAR_12[VAR_5] += VAR_9 * (1U << VAR_7);
      }
    }
}
