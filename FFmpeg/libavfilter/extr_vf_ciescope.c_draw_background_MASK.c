
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
struct ColorSystem {int dummy; } ;
struct TYPE_10__ {int* linesize; scalar_t__* data; } ;
struct TYPE_9__ {TYPE_2__** outputs; TYPE_1__* priv; } ;
struct TYPE_8__ {int h; int w; } ;
struct TYPE_7__ {size_t color_system; int size; int contrast; int correct_gamma; int cie; scalar_t__ i; TYPE_4__* f; } ;
typedef TYPE_1__ CiescopeContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct ColorSystem* VAR_1 ;
 TYPE_4__* FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (int *,int,int,int,int,struct ColorSystem const*,double const**,int ,int ,int ) ;
 int FUNC_3 (int *,int,int,int,int,int ) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_2)
{
    CiescopeContext *VAR_3 = VAR_2->priv;
    const struct ColorSystem *VAR_4 = &VAR_1[VAR_3->color_system];
    AVFilterLink *VAR_5 = VAR_2->outputs[0];
    int VAR_6 = VAR_3->size;
    int VAR_7 = VAR_3->size;
    uint16_t *VAR_8;

    if ((VAR_3->f = FUNC_1(VAR_5, VAR_5->w, VAR_5->h)) == ((void*)0))
        return FUNC_0(VAR_0);
    VAR_8 = (uint16_t *)VAR_3->f->data[0];

    FUNC_3(VAR_8, VAR_3->f->linesize[0] / 2, VAR_6, VAR_7, 65535, VAR_3->cie);

    FUNC_2(VAR_8, VAR_3->f->linesize[0] / 2, VAR_6, VAR_7, 65535, VAR_4, (const double (*)[3])VAR_3->i, VAR_3->cie,
                   VAR_3->correct_gamma, VAR_3->contrast);

    return 0;
}
