
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_3__ {int prob; } ;
typedef TYPE_1__ PTable ;



__attribute__((used)) static void FUNC_0(uint8_t *VAR_0, int VAR_1,
                        int VAR_2, PTable *VAR_3)
{
    int VAR_4, VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
        for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
            VAR_3[VAR_0[VAR_4]].prob++;
        }
        VAR_0 += VAR_1;
    }
}
