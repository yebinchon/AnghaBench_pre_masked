
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int line; } ;
typedef TYPE_2__ hb_work_private_t ;
struct TYPE_11__ {TYPE_2__* private_data; } ;
typedef TYPE_3__ hb_work_object_t ;
struct TYPE_9__ {int flags; scalar_t__ stop; int frametype; } ;
struct TYPE_12__ {TYPE_1__ s; } ;
typedef TYPE_4__ hb_buffer_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_2(hb_work_object_t * VAR_4,
                       hb_buffer_t **VAR_5, hb_buffer_t **VAR_6)
{
    hb_work_private_t * VAR_7 = VAR_4->private_data;
    hb_buffer_t * VAR_8 = *VAR_5;
    hb_buffer_t *VAR_9 = *VAR_5;

    *VAR_5 = ((void*)0);
    if (VAR_8->s.flags & VAR_0)
    {
        *VAR_6 = VAR_8;
        return VAR_2;
    }



    if (VAR_9->s.stop == 0)
    {
        FUNC_0("decutf8sub: subtitle packet lacks duration");
    }

    FUNC_1(VAR_9, ++VAR_7->line);
    VAR_9->s.frametype = VAR_1;
    *VAR_6 = VAR_9;

    return VAR_3;
}
