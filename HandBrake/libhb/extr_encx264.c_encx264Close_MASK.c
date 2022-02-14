
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* filename; int x264; TYPE_1__* api; int chapter_queue; } ;
typedef TYPE_2__ hb_work_private_t ;
struct TYPE_8__ {TYPE_2__* private_data; } ;
typedef TYPE_3__ hb_work_object_t ;
struct TYPE_6__ {int (* encoder_close ) (int ) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

void FUNC_3( hb_work_object_t * VAR_0 )
{
    hb_work_private_t * VAR_1 = VAR_0->private_data;

    if (VAR_1 == ((void*)0))
    {

        return;
    }

    FUNC_1(&VAR_1->chapter_queue);

    VAR_1->api->encoder_close( VAR_1->x264 );
    FUNC_0( VAR_1->filename );
    FUNC_0( VAR_1 );
    VAR_0->private_data = ((void*)0);
}
