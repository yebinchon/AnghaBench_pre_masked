
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nb_values; int nb_comps; int components; int width; int height; size_t* rgba_map; int * colors; scalar_t__ oy; scalar_t__ ox; int draw; TYPE_1__* values; } ;
struct TYPE_4__ {int* p; } ;
typedef TYPE_2__ OscilloscopeContext ;
typedef int AVFrame ;


 int FUNC_0 (int *,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int *,int ) ;

__attribute__((used)) static void FUNC_1(OscilloscopeContext *VAR_0, AVFrame *VAR_1)
{
    int VAR_2, VAR_3;

    for (VAR_2 = 1; VAR_2 < VAR_0->nb_values; VAR_2++) {
        for (VAR_3 = 0; VAR_3 < VAR_0->nb_comps; VAR_3++) {
            if ((1 << VAR_3) & VAR_0->components) {
                int VAR_4 = VAR_2 * VAR_0->width / VAR_0->nb_values;
                int VAR_5 = (VAR_2 - 1) * VAR_0->width / VAR_0->nb_values;
                int VAR_6 = VAR_0->height - VAR_0->values[VAR_2-1].p[VAR_0->rgba_map[VAR_3]] * VAR_0->height / 256;
                int VAR_7 = VAR_0->height - VAR_0->values[VAR_2].p[VAR_0->rgba_map[VAR_3]] * VAR_0->height / 256;

                FUNC_0(&VAR_0->draw, VAR_0->ox + VAR_4, VAR_0->oy + VAR_7, VAR_0->ox + VAR_5, VAR_0->oy + VAR_6, VAR_1, VAR_0->colors[VAR_3]);
            }
        }
    }
}
