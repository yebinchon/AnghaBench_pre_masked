
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
typedef int int32_t ;
struct TYPE_4__ {int codeword_history; unsigned int* dither; int dither_parity; } ;
typedef TYPE_1__ Channel ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(Channel *VAR_1)
{
    int VAR_2;
    int64_t VAR_3;
    int32_t VAR_4;

    FUNC_0(VAR_1);

    VAR_3 = (int64_t)5184443 * (VAR_1->codeword_history >> 7);
    VAR_4 = (VAR_3 * 4) + (VAR_3 >> 22);
    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
        VAR_1->dither[VAR_2] = (unsigned)VAR_4 << (23 - 5*VAR_2);
    VAR_1->dither_parity = (VAR_4 >> 25) & 1;
}
