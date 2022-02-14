
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int context; } ;
typedef TYPE_1__ hb_work_private_t ;
struct TYPE_6__ {TYPE_1__* private_data; } ;
typedef TYPE_2__ hb_work_object_t ;
typedef int hb_buffer_list_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_2( hb_work_object_t * VAR_0, hb_buffer_list_t * VAR_1 )
{
    hb_work_private_t * VAR_2 = VAR_0->private_data;

    FUNC_0(VAR_2->context, ((void*)0));
    FUNC_1(VAR_0, VAR_1);
}
