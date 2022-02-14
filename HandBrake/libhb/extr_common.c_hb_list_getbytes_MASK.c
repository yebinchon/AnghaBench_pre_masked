
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint64_t ;
typedef int hb_list_t ;
struct TYPE_6__ {size_t start; } ;
struct TYPE_7__ {size_t size; size_t offset; TYPE_1__ s; int * data; } ;
typedef TYPE_2__ hb_buffer_t ;


 int FUNC_0 (size_t,int) ;
 int FUNC_1 (TYPE_2__**) ;
 TYPE_2__* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (int*,int *,int) ;

void FUNC_5( hb_list_t * VAR_0, uint8_t * VAR_1, int VAR_2,
                       uint64_t * VAR_3, uint64_t * VAR_4 )
{
    hb_buffer_t * VAR_5;
    int VAR_6;
    int VAR_7;
    uint8_t VAR_8;


     uint64_t VAR_9, VAR_10;

    if( !VAR_3 ) VAR_3 = &VAR_9;
    if( !VAR_4 ) VAR_4 = &VAR_10;

    for( VAR_6 = 0, VAR_8 = 0; VAR_6 < VAR_2; )
    {
        VAR_5 = FUNC_2( VAR_0, 0 );
        VAR_7 = FUNC_0( VAR_5->size - VAR_5->offset, VAR_2 - VAR_6 );
        FUNC_4( &VAR_1[VAR_6], &VAR_5->data[VAR_5->offset], VAR_7 );

        if( !VAR_8 )
        {
            *VAR_3 = VAR_5->s.start;
            *VAR_4 = VAR_5->offset;
            VAR_8 = 1;
        }

        VAR_5->offset += VAR_7;
        if( VAR_5->offset >= VAR_5->size )
        {
            FUNC_3( VAR_0, VAR_5 );
            FUNC_1( &VAR_5 );
        }

        VAR_6 += VAR_7;
    }
}
