
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_4__ {int width; } ;
typedef TYPE_1__ hb_work_private_t ;
struct TYPE_5__ {TYPE_1__* private_data; } ;
typedef TYPE_2__ hb_work_object_t ;



__attribute__((used)) static int FUNC_0( hb_work_object_t * VAR_0, uint8_t * VAR_1 )
{
    hb_work_private_t * VAR_2 = VAR_0->private_data;
    int VAR_3;
    for( VAR_3 = 0; VAR_3 < VAR_2->width; VAR_3++ )
    {
        if( VAR_1[VAR_3] )
        {
            return 0;
        }
    }
    return 1;
}
