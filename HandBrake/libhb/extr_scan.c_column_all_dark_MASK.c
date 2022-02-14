
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {TYPE_1__* plane; } ;
typedef TYPE_2__ hb_buffer_t ;
struct TYPE_4__ {int stride; int height; int * data; } ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2( hb_buffer_t* VAR_1, int VAR_2, int VAR_3, int VAR_4 )
{
    int VAR_5 = VAR_1->plane[0].stride;
    int VAR_6 = VAR_1->plane[0].height - VAR_2 - VAR_3;
    uint8_t *VAR_7 = VAR_1->plane[0].data + VAR_5 * VAR_2 + VAR_4;


    int VAR_8 = VAR_6, VAR_9 = 0, VAR_10 = 0;
    for ( ; --VAR_8 >= 0; VAR_10 += VAR_5 )
    {
        VAR_9 += FUNC_1( VAR_7[VAR_10] );
    }
    VAR_9 /= VAR_6;
    if ( VAR_9 >= VAR_0 )
        return 0;



    VAR_8 = VAR_6, VAR_10 = 0;
    for ( ; --VAR_8 >= 0; VAR_10 += VAR_5 )
    {
        if ( FUNC_0( VAR_9, FUNC_1( VAR_7[VAR_10] ) ) > 16 )
            return 0;
    }
    return 1;
}
