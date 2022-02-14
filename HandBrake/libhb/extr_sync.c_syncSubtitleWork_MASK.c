
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_16__ {TYPE_10__* stream; TYPE_9__* common; } ;
typedef TYPE_3__ hb_work_private_t ;
struct TYPE_17__ {int* done; TYPE_3__* private_data; } ;
typedef TYPE_4__ hb_work_object_t ;
struct TYPE_14__ {int flags; } ;
struct TYPE_18__ {TYPE_1__ s; } ;
typedef TYPE_5__ hb_buffer_t ;
struct TYPE_19__ {TYPE_2__* job; } ;
struct TYPE_15__ {scalar_t__ indepth_scan; } ;
struct TYPE_13__ {int flush; int common; scalar_t__ done; int in_queue; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_10__*,TYPE_5__*) ;
 int FUNC_2 (TYPE_10__*) ;
 int FUNC_3 (TYPE_9__*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6( hb_work_object_t * VAR_3, hb_buffer_t ** VAR_4,
                             hb_buffer_t ** VAR_5 )
{
    hb_work_private_t * VAR_6 = VAR_3->private_data;
    hb_buffer_t * VAR_7 = *VAR_4;

    if (VAR_6->stream->done)
    {
        FUNC_0(VAR_6->stream->common);
        return VAR_1;
    }
    if (VAR_7->s.flags & VAR_0)
    {
        VAR_6->stream->flush = 1;


        FUNC_5(VAR_6->stream->in_queue, FUNC_4());
        FUNC_3(VAR_6->common);
        if (VAR_6->common->job->indepth_scan)
        {


            *VAR_3->done = 1;
        }
        return VAR_1;
    }

    *VAR_4 = ((void*)0);
    FUNC_1(VAR_6->stream, VAR_7);
    FUNC_2(VAR_6->stream);

    if (VAR_6->stream->done)
    {
        FUNC_0(VAR_6->stream->common);
        return VAR_1;
    }
    return VAR_2;
}
