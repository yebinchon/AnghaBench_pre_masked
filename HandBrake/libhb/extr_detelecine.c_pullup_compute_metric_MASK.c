
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pullup_field {TYPE_1__* buffer; } ;
struct pullup_context {int metric_plane; int* bpp; int* stride; int metric_w; int metric_len; int metric_offset; int metric_h; } ;
struct TYPE_2__ {unsigned char** planes; } ;


 int FUNC_0 (int*,int ,int) ;

__attribute__((used)) static void FUNC_1( struct pullup_context * VAR_0,
                                   struct pullup_field * VAR_1, int VAR_2,
                                   struct pullup_field * VAR_3, int VAR_4,
                                   int (* VAR_5)( unsigned char *,
                                                 unsigned char *, int),
                                   int * VAR_6 )
{
    unsigned char *VAR_7, *VAR_8;
    int VAR_9, VAR_10;
    int VAR_11 = VAR_0->metric_plane;
    int VAR_12 = VAR_0->bpp[VAR_11];
    int VAR_13 = VAR_0->stride[VAR_11]<<3;
    int VAR_14 = VAR_0->stride[VAR_11]<<1;
    int VAR_15 = VAR_0->metric_w*VAR_12;

    if( !VAR_1->buffer || !VAR_3->buffer ) return;


    if( VAR_1->buffer == VAR_3->buffer && VAR_2 == VAR_4 )
    {
        FUNC_0( VAR_6, 0, VAR_0->metric_len * sizeof(int) );
        return;
    }

    VAR_7 = VAR_1->buffer->planes[VAR_11] + VAR_2 * VAR_0->stride[VAR_11] + VAR_0->metric_offset;
    VAR_8 = VAR_3->buffer->planes[VAR_11] + VAR_4 * VAR_0->stride[VAR_11] + VAR_0->metric_offset;

    for( VAR_10 = VAR_0->metric_h; VAR_10; VAR_10-- )
    {
        for( VAR_9 = 0; VAR_9 < VAR_15; VAR_9 += VAR_12 )
        {
            *VAR_6++ = VAR_5( VAR_7 + VAR_9, VAR_8 + VAR_9, VAR_14 );
        }
        VAR_7 += VAR_13; VAR_8 += VAR_13;
    }
}
