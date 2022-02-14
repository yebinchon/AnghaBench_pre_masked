
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {int bufsize; int output_bytes; scalar_t__ last_code; int tabsize; int maxcode; TYPE_1__* tab; } ;
struct TYPE_9__ {scalar_t__ hash_prefix; scalar_t__ code; } ;
typedef TYPE_2__ LZWEncodeState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,scalar_t__,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*,scalar_t__) ;
 int FUNC_5 (TYPE_2__*) ;

int FUNC_6(LZWEncodeState * VAR_2, const uint8_t * VAR_3, int VAR_4)
{
    int VAR_5;

    if(VAR_4 * 3 > (VAR_2->bufsize - VAR_2->output_bytes) * 2){
        return -1;
    }

    if (VAR_2->last_code == VAR_0)
        FUNC_1(VAR_2);

    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        uint8_t VAR_6 = *VAR_3++;
        int VAR_7 = FUNC_2(VAR_2, VAR_6, VAR_2->last_code);
        if (VAR_2->tab[VAR_7].hash_prefix == VAR_1) {
            FUNC_4(VAR_2, VAR_2->last_code);
            FUNC_0(VAR_2, VAR_6, VAR_2->last_code, VAR_7);
            VAR_7= FUNC_3(0, VAR_6);
        }
        VAR_2->last_code = VAR_2->tab[VAR_7].code;
        if (VAR_2->tabsize >= VAR_2->maxcode - 1) {
            FUNC_1(VAR_2);
        }
    }

    return FUNC_5(VAR_2);
}
