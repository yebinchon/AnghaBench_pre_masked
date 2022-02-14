
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int channels; scalar_t__* extended_data; int format; } ;
typedef TYPE_1__ AVFrame ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(AVFrame *VAR_0)
{
    int VAR_1 = FUNC_0(VAR_0->format) ?
                 VAR_0->channels : 1;
    int VAR_2 = 128;
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
        int VAR_4 = 128;
        while ((intptr_t)VAR_0->extended_data[VAR_3] % VAR_4)
            VAR_4 >>= 1;
        if (VAR_4 < VAR_2)
            VAR_2 = VAR_4;
    }
    return VAR_2;
}
