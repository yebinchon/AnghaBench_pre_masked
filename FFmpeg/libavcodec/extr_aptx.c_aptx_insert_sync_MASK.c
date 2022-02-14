
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_6__ {TYPE_1__* quantize; } ;
struct TYPE_5__ {scalar_t__ error; int quantized_sample_parity_change; int quantized_sample; } ;
typedef TYPE_1__ Quantize ;
typedef TYPE_2__ Channel ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_1(Channel VAR_2[VAR_0], int32_t *VAR_3)
{
    if (FUNC_0(VAR_2, VAR_3)) {
        int VAR_4;
        Channel *VAR_5;
        static const int VAR_6[] = { 1, 2, 0, 3 };
        Quantize *VAR_7 = &VAR_2[VAR_0-1].quantize[VAR_6[0]];
        for (VAR_5 = &VAR_2[VAR_0-1]; VAR_5 >= VAR_2; VAR_5--)
            for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
                if (VAR_5->quantize[VAR_6[VAR_4]].error < VAR_7->error)
                    VAR_7 = &VAR_5->quantize[VAR_6[VAR_4]];



        VAR_7->quantized_sample = VAR_7->quantized_sample_parity_change;
    }
}
