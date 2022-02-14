
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ start_time; scalar_t__ stop_time; int line; TYPE_1__* job; } ;
typedef TYPE_2__ hb_work_private_t ;
struct TYPE_8__ {TYPE_2__* private_data; } ;
typedef TYPE_3__ hb_work_object_t ;
typedef int hb_buffer_t ;
struct TYPE_6__ {scalar_t__ reader_pts_offset; scalar_t__ pts_to_stop; scalar_t__ pts_to_start; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 () ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3( hb_work_object_t * VAR_3, hb_buffer_t ** VAR_4,
                       hb_buffer_t ** VAR_5 )
{
    hb_work_private_t * VAR_6 = VAR_3->private_data;
    hb_buffer_t * VAR_7 = ((void*)0);

    if (VAR_6->job->reader_pts_offset == VAR_0)
    {


        *VAR_5 = ((void*)0);
        return VAR_2;
    }
    if (VAR_6->start_time == VAR_0)
    {
        VAR_6->start_time = VAR_6->job->reader_pts_offset;
        if (VAR_6->job->pts_to_stop > 0)
        {
            VAR_6->stop_time = VAR_6->job->pts_to_start + VAR_6->job->pts_to_stop;
        }
    }
    VAR_7 = FUNC_2( VAR_6 );
    if (VAR_7 != ((void*)0))
    {
        FUNC_1(VAR_7, ++VAR_6->line);
        *VAR_5 = VAR_7;
        return VAR_2;
    } else {
        *VAR_5 = FUNC_0();
        return VAR_1;
    }
}
