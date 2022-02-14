
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {int num_x; int thread_buf_size; int * thread_buf; } ;
typedef int DiracSlice ;
typedef TYPE_1__ DiracContext ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (TYPE_1__*,int *,int *) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4;
    DiracContext *VAR_5 = VAR_0->priv_data;
    DiracSlice *VAR_6 = ((DiracSlice *)VAR_1) + VAR_5->num_x*VAR_2;
    uint8_t *VAR_7 = &VAR_5->thread_buf[VAR_5->thread_buf_size*VAR_3];
    for (VAR_4 = 0; VAR_4 < VAR_5->num_x; VAR_4++)
        FUNC_0(VAR_5, &VAR_6[VAR_4], VAR_7);
    return 0;
}
