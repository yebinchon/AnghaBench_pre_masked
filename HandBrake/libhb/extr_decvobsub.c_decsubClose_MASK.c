
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ buf; } ;
typedef TYPE_1__ hb_work_private_t ;
struct TYPE_6__ {TYPE_1__* private_data; } ;
typedef TYPE_2__ hb_work_object_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__*) ;

void FUNC_2( hb_work_object_t * VAR_0 )
{
    hb_work_private_t * VAR_1 = VAR_0->private_data;

    if ( VAR_1 && VAR_1->buf )
        FUNC_1( &VAR_1->buf );
    FUNC_0( VAR_0->private_data );
}
