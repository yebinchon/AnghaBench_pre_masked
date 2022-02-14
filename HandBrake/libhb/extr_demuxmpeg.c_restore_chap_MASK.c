
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ new_chap; } ;
typedef TYPE_2__ hb_psdemux_t ;
struct TYPE_6__ {scalar_t__ new_chap; } ;
struct TYPE_8__ {TYPE_1__ s; } ;
typedef TYPE_3__ hb_buffer_t ;



__attribute__((used)) static inline void FUNC_0( hb_psdemux_t *VAR_0, hb_buffer_t *VAR_1 )
{
    if ( VAR_0 )
    {
        VAR_1->s.new_chap = VAR_0->new_chap;
        VAR_0->new_chap = 0;
    }
}
