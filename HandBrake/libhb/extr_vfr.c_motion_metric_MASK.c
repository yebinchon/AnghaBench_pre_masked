
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_7__ {int width; int height; } ;
struct TYPE_8__ {TYPE_2__ f; TYPE_1__* plane; } ;
typedef TYPE_3__ hb_buffer_t ;
struct TYPE_6__ {int stride; int * data; } ;


 scalar_t__ FUNC_0 (unsigned int*,int *,int *,int) ;

__attribute__((used)) static float FUNC_1( unsigned * VAR_0, hb_buffer_t * VAR_1, hb_buffer_t * VAR_2 )
{
    int VAR_3 = VAR_1->f.width / 16;
    int VAR_4 = VAR_1->f.height / 16;
    int VAR_5 = VAR_1->plane[0].stride;
    uint8_t * VAR_6 = VAR_1->plane[0].data;
    uint8_t * VAR_7 = VAR_2->plane[0].data;
    int VAR_8, VAR_9;
    uint64_t VAR_10 = 0;

    for( VAR_9 = 0; VAR_9 < VAR_4; VAR_9++ )
    {
        for( VAR_8 = 0; VAR_8 < VAR_3; VAR_8++ )
        {
            VAR_10 += FUNC_0( VAR_0, VAR_6 + VAR_9 * 16 * VAR_5 + VAR_8 * 16,
                                            VAR_7 + VAR_9 * 16 * VAR_5 + VAR_8 * 16,
                                            VAR_5 );
        }
    }
    return (float)VAR_10 / ( VAR_1->f.width * VAR_1->f.height );;
}
