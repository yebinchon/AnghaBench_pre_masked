
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ file; TYPE_3__* context; int chapter_queue; } ;
typedef TYPE_1__ hb_work_private_t ;
struct TYPE_8__ {TYPE_1__* private_data; } ;
typedef TYPE_2__ hb_work_object_t ;
struct TYPE_9__ {scalar_t__ codec; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_3__**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,char*) ;

void FUNC_6( hb_work_object_t * VAR_0 )
{
    hb_work_private_t * VAR_1 = VAR_0->private_data;

    if (VAR_1 == ((void*)0))
    {
        return;
    }
    FUNC_4(&VAR_1->chapter_queue);
    if( VAR_1->context )
    {
        FUNC_5( 2, "encavcodec: closing libavcodec" );
        if( VAR_1->context->codec ) {
            FUNC_0( VAR_1->context );
        }
        FUNC_3(&VAR_1->context);
    }
    if( VAR_1->file )
    {
        FUNC_1( VAR_1->file );
    }
    FUNC_2( VAR_1 );
    VAR_0->private_data = ((void*)0);
}
