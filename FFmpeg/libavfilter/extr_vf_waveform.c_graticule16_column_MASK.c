
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_10__ {int flags; float opacity; int max; scalar_t__ display; int acomp; int ncomp; int pcomp; int const* grat_yuva_color; int nb_glines; int size; int (* draw_text ) (TYPE_4__*,int,int,int const,float const,float const,char const*,int const*) ;scalar_t__ mirror; TYPE_2__* glines; int (* blend_line ) (int *,int const,int,float const,float const,int const,int const) ;scalar_t__ rgb; } ;
typedef TYPE_3__ WaveformContext ;
struct TYPE_11__ {int width; int* linesize; scalar_t__* data; } ;
struct TYPE_9__ {TYPE_1__* line; } ;
struct TYPE_8__ {int pos; char* name; } ;
typedef TYPE_4__ AVFrame ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int const,int,float const,float const,int const,int const) ;
 int FUNC_1 (TYPE_4__*,int,int,int const,float const,float const,char const*,int const*) ;

__attribute__((used)) static void FUNC_2(WaveformContext *VAR_2, AVFrame *VAR_3)
{
    const int VAR_4 = (VAR_2->flags & 2) + 1;
    const float VAR_5 = VAR_2->opacity;
    const float VAR_6 = 1. - VAR_5;
    const int VAR_7 = VAR_2->max / 256;
    const int VAR_8 = VAR_2->display == VAR_0 ? VAR_3->width / VAR_2->acomp : VAR_3->width;
    int VAR_9, VAR_10 = 0, VAR_11, VAR_12, VAR_13, VAR_14 = 0, VAR_15 = 0;

    for (VAR_11 = 0; VAR_11 < VAR_2->ncomp; VAR_11++) {
        if ((!((1 << VAR_11) & VAR_2->pcomp) || (!VAR_2->display && VAR_10 > 0)))
            continue;

        VAR_10++;
        VAR_9 = VAR_2->rgb ? 0 : VAR_11;
        for (VAR_12 = 0; VAR_12 < VAR_2->ncomp; VAR_12++) {
            const int VAR_16 = VAR_2->grat_yuva_color[VAR_12] * VAR_7;
            for (VAR_13 = 0; VAR_13 < VAR_2->nb_glines ; VAR_13++) {
                const uint16_t VAR_17 = VAR_2->glines[VAR_13].line[VAR_9].pos;
                int VAR_18 = VAR_15 + (VAR_2->mirror ? VAR_2->size - 1 - VAR_17 : VAR_17);
                uint8_t *VAR_19 = (uint8_t *)(VAR_3->data[VAR_12] + VAR_18 * VAR_3->linesize[VAR_12]) + VAR_14 * 2;

                VAR_2->blend_line(VAR_19, VAR_8, 1, VAR_5, VAR_6, VAR_16, VAR_4);
            }
        }

        for (VAR_13 = 0; VAR_13 < VAR_2->nb_glines && (VAR_2->flags & 1); VAR_13++) {
            const char *VAR_20 = VAR_2->glines[VAR_13].line[VAR_9].name;
            const uint16_t VAR_21 = VAR_2->glines[VAR_13].line[VAR_9].pos;
            int VAR_22 = VAR_15 + (VAR_2->mirror ? VAR_2->size - 1 - VAR_21: VAR_21) - 10;

            if (VAR_22 < 0)
                VAR_22 = 4;

            VAR_2->draw_text(VAR_3, 2 + VAR_14, VAR_22, VAR_7, VAR_5, VAR_6, VAR_20, VAR_2->grat_yuva_color);
        }

        VAR_15 += VAR_2->size * (VAR_2->display == VAR_1);
        VAR_14 += VAR_8 * (VAR_2->display == VAR_0);
    }
}
