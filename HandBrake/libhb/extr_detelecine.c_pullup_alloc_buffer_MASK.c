
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pullup_context {int nplanes; int* h; int* stride; int * background; } ;
struct pullup_buffer {int* size; int * planes; } ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3( struct pullup_context * VAR_0,
                                 struct pullup_buffer * VAR_1 )
{
    int VAR_2;
    if( VAR_1->planes ) return;
    VAR_1->planes = FUNC_0( VAR_0->nplanes, sizeof(unsigned char *) );
    VAR_1->size = FUNC_0( VAR_0->nplanes, sizeof(int) );
    for ( VAR_2 = 0; VAR_2 < VAR_0->nplanes; VAR_2++ )
    {
        VAR_1->size[VAR_2] = VAR_0->h[VAR_2] * VAR_0->stride[VAR_2];
        VAR_1->planes[VAR_2] = FUNC_1(VAR_1->size[VAR_2]);

        FUNC_2( VAR_1->planes[VAR_2], VAR_0->background[VAR_2], VAR_1->size[VAR_2] );
    }
}
