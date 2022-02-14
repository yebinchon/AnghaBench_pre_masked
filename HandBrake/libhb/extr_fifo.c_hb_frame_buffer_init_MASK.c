
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {int max_plane; int width; int height; int fmt; } ;
struct TYPE_11__ {int type; } ;
struct TYPE_13__ {TYPE_3__ f; TYPE_2__ s; } ;
typedef TYPE_4__ hb_buffer_t ;
struct TYPE_14__ {int nb_components; TYPE_1__* comp; } ;
struct TYPE_10__ {int plane; } ;
typedef TYPE_5__ AVPixFmtDescriptor ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (int) ;
 TYPE_4__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int,int,int) ;

hb_buffer_t * FUNC_5( int VAR_1, int VAR_2, int VAR_3 )
{
    const AVPixFmtDescriptor * VAR_4 = FUNC_0(VAR_1);
    hb_buffer_t * VAR_5;
    uint8_t VAR_6[4] = {0,};
    int VAR_7, VAR_8, VAR_9 = 0;

    if (VAR_4 == ((void*)0))
    {
        return ((void*)0);
    }

    int VAR_10 = 0;
    for (VAR_7 = 0; VAR_7 < VAR_4->nb_components; VAR_7++)
    {
        VAR_8 = VAR_4->comp[VAR_7].plane;
        if (VAR_8 > VAR_9)
        {
            VAR_9 = VAR_8;
        }
        if (!VAR_6[VAR_8])
        {
            VAR_6[VAR_8] = 1;
            VAR_10 += FUNC_4( VAR_1, VAR_2, VAR_8 ) *
                    FUNC_3( VAR_1, VAR_3, VAR_8 );
        }
    }

    VAR_5 = FUNC_1(VAR_10);

    if( VAR_5 == ((void*)0) )
        return ((void*)0);

    VAR_5->f.max_plane = VAR_9;
    VAR_5->s.type = VAR_0;
    VAR_5->f.width = VAR_2;
    VAR_5->f.height = VAR_3;
    VAR_5->f.fmt = VAR_1;

    FUNC_2(VAR_5);
    return VAR_5;
}
