
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int out; int in; int flen; int ** fifo; } ;
struct TYPE_5__ {TYPE_1__ mf; } ;
typedef TYPE_2__ hb_track_t ;
typedef int hb_buffer_t ;



__attribute__((used)) static hb_buffer_t *FUNC_0( hb_track_t *VAR_0 )
{
    return VAR_0->mf.out == VAR_0->mf.in ?
                ((void*)0) : VAR_0->mf.fifo[VAR_0->mf.out & (VAR_0->mf.flen - 1)];
}
