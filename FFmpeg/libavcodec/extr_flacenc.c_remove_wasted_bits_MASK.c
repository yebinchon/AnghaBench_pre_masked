
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_6__ {int blocksize; TYPE_3__* subframes; } ;
struct TYPE_9__ {int channels; TYPE_1__ frame; } ;
struct TYPE_7__ {int coding_mode; } ;
struct TYPE_8__ {int* samples; int wasted; int obits; TYPE_2__ rc; } ;
typedef TYPE_3__ FlacSubframe ;
typedef TYPE_4__ FlacEncodeContext ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(FlacEncodeContext *VAR_1)
{
    int VAR_2, VAR_3;

    for (VAR_2 = 0; VAR_2 < VAR_1->channels; VAR_2++) {
        FlacSubframe *VAR_4 = &VAR_1->frame.subframes[VAR_2];
        int32_t VAR_5 = 0;

        for (VAR_3 = 0; VAR_3 < VAR_1->frame.blocksize; VAR_3++) {
            VAR_5 |= VAR_4->samples[VAR_3];
            if (VAR_5 & 1)
                break;
        }

        if (VAR_5 && !(VAR_5 & 1)) {
            VAR_5 = FUNC_0(VAR_5);

            for (VAR_3 = 0; VAR_3 < VAR_1->frame.blocksize; VAR_3++)
                VAR_4->samples[VAR_3] >>= VAR_5;

            VAR_4->wasted = VAR_5;
            VAR_4->obits -= VAR_5;



            if (VAR_4->obits <= 17)
                VAR_4->rc.coding_mode = VAR_0;
        }
    }
}
