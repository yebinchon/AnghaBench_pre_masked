
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ start; scalar_t__ new_chap; } ;
struct TYPE_6__ {TYPE_1__ s; } ;
typedef TYPE_2__ hb_buffer_t ;



__attribute__((used)) static inline void FUNC_0( hb_buffer_t * VAR_0, hb_buffer_t * VAR_1 )
{





    if( VAR_1 && VAR_0 && VAR_1->s.start == VAR_0->s.start && VAR_1->s.new_chap != 0)
    {

        VAR_0->s.new_chap = VAR_1->s.new_chap;
    }
}
