
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pullup_frame {int dummy; } ;
struct pullup_context {int metric_plane; int nbuffers; int metric_w; int* w; int junk_left; int junk_right; int metric_h; int* h; int junk_top; int junk_bottom; int metric_offset; int* bpp; int* stride; int metric_len; scalar_t__ format; int var; int comb; int diff; TYPE_1__* frame; int head; void* buffers; } ;
struct pullup_buffer {int dummy; } ;
struct TYPE_2__ {void* ifields; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct pullup_context*,int) ;
 int VAR_3 ;

void FUNC_2( struct pullup_context * VAR_4 )
{
    int VAR_5 = VAR_4->metric_plane;
    if ( VAR_4->nbuffers < 10 )
    {
        VAR_4->nbuffers = 10;
    }
    VAR_4->buffers = FUNC_0( VAR_4->nbuffers, sizeof (struct pullup_buffer) );

    VAR_4->metric_w = (VAR_4->w[VAR_5] - ((VAR_4->junk_left + VAR_4->junk_right) << 3)) >> 3;
    VAR_4->metric_h = (VAR_4->h[VAR_5] - ((VAR_4->junk_top + VAR_4->junk_bottom) << 1)) >> 3;
    VAR_4->metric_offset = VAR_4->junk_left*VAR_4->bpp[VAR_5] + (VAR_4->junk_top<<1)*VAR_4->stride[VAR_5];
    VAR_4->metric_len = VAR_4->metric_w * VAR_4->metric_h;

    VAR_4->head = FUNC_1( VAR_4, 8 );

    VAR_4->frame = FUNC_0( 1, sizeof (struct pullup_frame) );
    VAR_4->frame->ifields = FUNC_0( 3, sizeof (struct pullup_buffer *) );

    if( VAR_4->format == VAR_0 )
    {
        VAR_4->diff = VAR_1;
        VAR_4->comb = VAR_2;
        VAR_4->var = VAR_3;
    }
}
