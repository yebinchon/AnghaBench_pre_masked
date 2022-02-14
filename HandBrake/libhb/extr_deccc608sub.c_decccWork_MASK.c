
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {TYPE_5__* cc608; } ;
typedef TYPE_2__ hb_work_private_t ;
struct TYPE_14__ {TYPE_2__* private_data; } ;
typedef TYPE_3__ hb_work_object_t ;
struct TYPE_12__ {int flags; int scr_sequence; int start; } ;
struct TYPE_15__ {int size; int data; TYPE_1__ s; } ;
typedef TYPE_4__ hb_buffer_t ;
struct TYPE_16__ {int list; int last_scr_sequence; int last_pts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int *,TYPE_4__*) ;
 TYPE_4__* FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,TYPE_5__*) ;

__attribute__((used)) static int FUNC_4( hb_work_object_t * VAR_3, hb_buffer_t ** VAR_4,
               hb_buffer_t ** VAR_5 )
{
    hb_work_private_t * VAR_6 = VAR_3->private_data;
    hb_buffer_t * VAR_7 = *VAR_4;

    if (VAR_7->s.flags & VAR_0)
    {

        FUNC_0(VAR_6->cc608);



        *VAR_4 = ((void*)0);
        FUNC_1(&VAR_6->cc608->list, VAR_7);
        *VAR_5 = FUNC_2(&VAR_6->cc608->list);
        return VAR_1;
    }

    VAR_6->cc608->last_pts = VAR_7->s.start;
    VAR_6->cc608->last_scr_sequence = VAR_7->s.scr_sequence;
    FUNC_3(VAR_7->data, VAR_7->size, VAR_6->cc608);




    *VAR_5 = FUNC_2(&VAR_6->cc608->list);
    return VAR_2;
}
