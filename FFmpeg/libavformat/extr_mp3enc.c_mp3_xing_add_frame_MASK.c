
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ size; } ;
struct TYPE_5__ {int seen; int want; size_t pos; int * bag; int size; int frames; } ;
typedef TYPE_1__ MP3Context ;
typedef TYPE_2__ AVPacket ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(MP3Context *VAR_1, AVPacket *VAR_2)
{
    int VAR_3;

    VAR_1->frames++;
    VAR_1->seen++;
    VAR_1->size += VAR_2->size;

    if (VAR_1->want == VAR_1->seen) {
        VAR_1->bag[VAR_1->pos] = VAR_1->size;

        if (VAR_0 == ++VAR_1->pos) {

            for (VAR_3 = 1; VAR_3 < VAR_0; VAR_3 += 2)
                VAR_1->bag[VAR_3 >> 1] = VAR_1->bag[VAR_3];


            VAR_1->want *= 2;

            VAR_1->pos = VAR_0 / 2;
        }

        VAR_1->seen = 0;
    }
}
