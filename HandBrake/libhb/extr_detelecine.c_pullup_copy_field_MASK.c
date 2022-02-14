
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pullup_context {int nplanes; int* stride; int* h; } ;
struct pullup_buffer {unsigned char** planes; } ;


 int FUNC_0 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static void FUNC_1( struct pullup_context * VAR_0,
                               struct pullup_buffer * VAR_1,
                               struct pullup_buffer * VAR_2,
                               int VAR_3 )
{
    int VAR_4, VAR_5;
    unsigned char *VAR_6, *VAR_7;
    for( VAR_4 = 0; VAR_4 < VAR_0->nplanes; VAR_4++ )
    {
        VAR_7 = VAR_2->planes[VAR_4] + VAR_3*VAR_0->stride[VAR_4];
        VAR_6 = VAR_1->planes[VAR_4] + VAR_3*VAR_0->stride[VAR_4];
        for( VAR_5 = VAR_0->h[VAR_4]>>1; VAR_5; VAR_5-- )
        {
            FUNC_0( VAR_6, VAR_7, VAR_0->stride[VAR_4] );
            VAR_7 += VAR_0->stride[VAR_4]<<1;
            VAR_6 += VAR_0->stride[VAR_4]<<1;
        }
    }
}
