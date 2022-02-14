
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int offset; int size; int sample_number; int data; } ;
struct TYPE_5__ {scalar_t__ len; TYPE_2__* samples; } ;
typedef TYPE_1__ HintSampleQueue ;
typedef TYPE_2__ HintSample ;


 scalar_t__ FUNC_0 (int const*,int,int ,int,int,int*,int*,int*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(const uint8_t *VAR_0, int VAR_1,
                             HintSampleQueue *VAR_2, int *VAR_3,
                             int *VAR_4, int *VAR_5,
                             int *VAR_6)
{
    while (VAR_2->len > 0) {
        HintSample *VAR_7 = &VAR_2->samples[0];


        if (VAR_7->offset == 0 && VAR_7->size > 5)
            VAR_7->offset = 5;

        if (FUNC_0(VAR_0, VAR_1, VAR_7->data, VAR_7->offset,
                           VAR_7->size, VAR_3, VAR_5, VAR_6) == 0) {
            *VAR_4 = VAR_7->sample_number;


            VAR_7->offset = *VAR_5 + *VAR_6 + 5;
            if (VAR_7->offset + 10 >= VAR_7->size)
                FUNC_1(VAR_2);
            return 0;
        }

        if (VAR_7->offset < 10 && VAR_7->size > 20) {


            VAR_7->offset = VAR_7->size/2;
        } else {

            FUNC_1(VAR_2);
        }
    }
    return -1;
}
