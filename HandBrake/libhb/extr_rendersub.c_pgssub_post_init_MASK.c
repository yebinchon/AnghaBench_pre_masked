
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int hb_job_t ;
struct TYPE_4__ {int sub_list; } ;
typedef TYPE_1__ hb_filter_private_t ;
struct TYPE_5__ {TYPE_1__* private_data; } ;
typedef TYPE_2__ hb_filter_object_t ;


 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1( hb_filter_object_t * VAR_0, hb_job_t * VAR_1 )
{
    hb_filter_private_t * VAR_2 = VAR_0->private_data;

    VAR_2->sub_list = FUNC_0();

    return 0;
}
