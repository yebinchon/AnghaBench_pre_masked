
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {TYPE_1__* plane; } ;
typedef TYPE_2__ hb_buffer_t ;
struct TYPE_4__ {int width; int stride; int * data; } ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2( hb_buffer_t* VAR_1, int VAR_2 )
{
    int VAR_3 = VAR_1->plane[0].width;
    int VAR_4 = VAR_1->plane[0].stride;
    uint8_t *VAR_5 = VAR_1->plane[0].data + VAR_4 * VAR_2;


    int VAR_6, VAR_7 = 0;
    for ( VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6 )
    {
        VAR_7 += FUNC_1( VAR_5[VAR_6] );
    }
    VAR_7 /= VAR_3;
    if ( VAR_7 >= VAR_0 )
        return 0;





    for ( VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6 )
    {
        if ( FUNC_0( VAR_7, FUNC_1( VAR_5[VAR_6] ) ) > 16 )
            return 0;
    }
    return 1;
}
