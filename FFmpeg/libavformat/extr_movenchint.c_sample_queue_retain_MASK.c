
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int own_data; int * data; int size; } ;
struct TYPE_6__ {int len; TYPE_2__* samples; } ;
typedef TYPE_1__ HintSampleQueue ;
typedef TYPE_2__ HintSample ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_3(HintSampleQueue *VAR_0)
{
    int VAR_1;
    for (VAR_1 = 0; VAR_1 < VAR_0->len; ) {
        HintSample *VAR_2 = &VAR_0->samples[VAR_1];
        if (!VAR_2->own_data) {
            uint8_t *VAR_3 = FUNC_0(VAR_2->size);
            if (!VAR_3) {

                FUNC_2(VAR_0->samples + VAR_1, VAR_0->samples + VAR_1 + 1,
                        sizeof(HintSample)*(VAR_0->len - VAR_1 - 1));
                VAR_0->len--;
                continue;
            }
            FUNC_1(VAR_3, VAR_2->data, VAR_2->size);
            VAR_2->data = VAR_3;
            VAR_2->own_data = 1;
        }
        VAR_1++;
    }
}
