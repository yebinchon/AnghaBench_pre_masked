
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double* combine_buffer; } ;
typedef TYPE_1__ ShowSpectrumContext ;



__attribute__((used)) static void FUNC_0(ShowSpectrumContext *VAR_0, int VAR_1)
{
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
        VAR_0->combine_buffer[3 * VAR_2 ] = 0;
        VAR_0->combine_buffer[3 * VAR_2 + 1] = 127.5;
        VAR_0->combine_buffer[3 * VAR_2 + 2] = 127.5;
    }
}
