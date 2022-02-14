
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {int max_plane; int width; int height; int fmt; } ;
struct TYPE_11__ {int size; TYPE_2__ f; } ;
typedef TYPE_3__ hb_buffer_t ;
struct TYPE_12__ {int nb_components; TYPE_1__* comp; } ;
struct TYPE_9__ {int plane; } ;
typedef TYPE_4__ AVPixFmtDescriptor ;


 TYPE_4__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int,int) ;

void FUNC_5( hb_buffer_t * VAR_0, int VAR_1, int VAR_2 )
{
    const AVPixFmtDescriptor * VAR_3 = FUNC_0(VAR_0->f.fmt);
    uint8_t VAR_4[4] = {0,};
    int VAR_5, VAR_6;

    if (VAR_3 == ((void*)0))
    {
        return;
    }

    VAR_0->f.max_plane = 0;
    int VAR_7 = 0;
    for (VAR_5 = 0; VAR_5 < VAR_3->nb_components; VAR_5++)
    {
        VAR_6 = VAR_3->comp[VAR_5].plane;
        if (VAR_6 > VAR_0->f.max_plane)
        {
            VAR_0->f.max_plane = VAR_6;
        }
        if (!VAR_4[VAR_6])
        {
            VAR_4[VAR_6] = 1;
            VAR_7 += FUNC_4(VAR_0->f.fmt, VAR_1, VAR_6) *
                    FUNC_3(VAR_0->f.fmt, VAR_2, VAR_6 );
        }
    }

    FUNC_2(VAR_0, VAR_7 );

    VAR_0->f.width = VAR_1;
    VAR_0->f.height = VAR_2;
    VAR_0->size = VAR_7;

    FUNC_1(VAR_0);
}
