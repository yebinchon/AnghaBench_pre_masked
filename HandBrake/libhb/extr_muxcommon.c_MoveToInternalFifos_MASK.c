
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ pts; int rdy; } ;
typedef TYPE_2__ hb_mux_t ;
struct TYPE_8__ {scalar_t__ start; } ;
struct TYPE_10__ {TYPE_1__ s; } ;
typedef TYPE_3__ hb_buffer_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_2__*,int,TYPE_3__*) ;

__attribute__((used)) static void FUNC_2( int VAR_0, hb_mux_t *VAR_1, hb_buffer_t * VAR_2 )
{




    FUNC_1( VAR_1, VAR_0, VAR_2 );
    if ( VAR_2->s.start >= VAR_1->pts )
    {


        FUNC_0(VAR_1->rdy, VAR_0);
    }
}
