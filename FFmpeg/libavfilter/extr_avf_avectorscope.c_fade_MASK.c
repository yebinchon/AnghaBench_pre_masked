
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_5__ {int h; int w; scalar_t__* fade; TYPE_1__* outpicref; } ;
struct TYPE_4__ {int* linesize; scalar_t__** data; } ;
typedef TYPE_2__ AudioVectorScopeContext ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(AudioVectorScopeContext *VAR_0)
{
    const int VAR_1 = VAR_0->outpicref->linesize[0];
    int VAR_2, VAR_3;

    if (VAR_0->fade[0] || VAR_0->fade[1] || VAR_0->fade[2]) {
        uint8_t *VAR_4 = VAR_0->outpicref->data[0];
        for (VAR_2 = 0; VAR_2 < VAR_0->h; VAR_2++) {
            for (VAR_3 = 0; VAR_3 < VAR_0->w*4; VAR_3+=4) {
                VAR_4[VAR_3+0] = FUNC_0(VAR_4[VAR_3+0] - VAR_0->fade[0], 0);
                VAR_4[VAR_3+1] = FUNC_0(VAR_4[VAR_3+1] - VAR_0->fade[1], 0);
                VAR_4[VAR_3+2] = FUNC_0(VAR_4[VAR_3+2] - VAR_0->fade[2], 0);
                VAR_4[VAR_3+3] = FUNC_0(VAR_4[VAR_3+3] - VAR_0->fade[3], 0);
            }
            VAR_4 += VAR_1;
        }
    }
}
