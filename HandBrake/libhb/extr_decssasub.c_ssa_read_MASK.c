
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_6__ {scalar_t__ start_time; scalar_t__ stop_time; int file; TYPE_1__* job; } ;
typedef TYPE_2__ hb_work_private_t ;
typedef int hb_buffer_t ;
struct TYPE_5__ {scalar_t__ reader_pts_offset; scalar_t__ pts_to_stop; scalar_t__ pts_to_start; } ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (TYPE_2__*,char*,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 () ;
 scalar_t__ FUNC_4 (char**,size_t*,int ) ;

__attribute__((used)) static hb_buffer_t * FUNC_5( hb_work_private_t * VAR_1 )
{
    hb_buffer_t * VAR_2;

    if (VAR_1->job->reader_pts_offset == VAR_0)
    {


        return ((void*)0);
    }
    if (VAR_1->start_time == VAR_0)
    {
        VAR_1->start_time = VAR_1->job->reader_pts_offset;
        if (VAR_1->job->pts_to_stop > 0)
        {
            VAR_1->stop_time = VAR_1->job->pts_to_start + VAR_1->job->pts_to_stop;
        }
    }
    while (!FUNC_1(VAR_1->file))
    {
        char * VAR_3 = ((void*)0);
        ssize_t VAR_4;
        size_t VAR_5 = 0;

        VAR_4 = FUNC_4(&VAR_3, &VAR_5, VAR_1->file);
        if (VAR_4 > 0 && VAR_3 != ((void*)0))
        {
            VAR_2 = FUNC_0(VAR_1, VAR_3, VAR_4);
            if (VAR_2 != ((void*)0))
            {
                FUNC_2(VAR_3);
                return VAR_2;
            }
        }
        FUNC_2(VAR_3);
        if (VAR_4 < 0)
        {

            VAR_2 = FUNC_3();
            return VAR_2;
        }
    }
    VAR_2 = FUNC_3();

    return VAR_2;
}
