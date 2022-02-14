
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; int in_queue; } ;
typedef TYPE_2__ sync_stream_t ;
struct TYPE_6__ {double start; double duration; double stop; } ;
struct TYPE_8__ {TYPE_1__ s; } ;
typedef TYPE_3__ hb_buffer_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2( sync_stream_t * VAR_1 )
{


    if (VAR_1->type == VAR_0)
    {
        int VAR_2 = FUNC_0(VAR_1->in_queue);
        if (VAR_2 >= 2)
        {
            hb_buffer_t * VAR_3 = FUNC_1(VAR_1->in_queue, VAR_2 - 1);
            hb_buffer_t * VAR_4 = FUNC_1(VAR_1->in_queue, VAR_2 - 2);
            double VAR_5 = VAR_3->s.start - VAR_4->s.start;
            if (VAR_5 > 0)
            {
                VAR_4->s.duration = VAR_5;
                VAR_4->s.stop = VAR_3->s.start;
            }
            else
            {
                VAR_4->s.duration = 0.;
                VAR_4->s.start = VAR_4->s.stop = VAR_3->s.start;
            }
        }
    }
}
