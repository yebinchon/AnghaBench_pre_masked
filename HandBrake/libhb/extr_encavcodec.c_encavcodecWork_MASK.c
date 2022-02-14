
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {TYPE_2__* context; } ;
typedef TYPE_3__ hb_work_private_t ;
struct TYPE_16__ {TYPE_3__* private_data; } ;
typedef TYPE_4__ hb_work_object_t ;
struct TYPE_13__ {int flags; } ;
struct TYPE_17__ {TYPE_1__ s; } ;
typedef TYPE_5__ hb_buffer_t ;
typedef int hb_buffer_list_t ;
struct TYPE_14__ {int * codec; } ;


 int FUNC_0 (TYPE_4__*,TYPE_5__*,int *) ;
 int FUNC_1 (TYPE_4__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ) ;
 TYPE_5__* FUNC_4 (int *) ;
 int FUNC_5 (char*) ;

int FUNC_6( hb_work_object_t * VAR_3, hb_buffer_t ** VAR_4,
                    hb_buffer_t ** VAR_5 )
{
    hb_work_private_t * VAR_6 = VAR_3->private_data;
    hb_buffer_t * VAR_7 = *VAR_4;
    hb_buffer_list_t VAR_8;

    if (VAR_6->context == ((void*)0) || VAR_6->context->codec == ((void*)0))
    {
        FUNC_5("encavcodec: codec context is uninitialized");
        return VAR_1;
    }

    FUNC_4(&VAR_8);
    if (VAR_7->s.flags & VAR_0)
    {
        FUNC_1(VAR_3, &VAR_8);
        FUNC_3(&VAR_8, FUNC_2());
        *VAR_5 = FUNC_4(&VAR_8);
        return VAR_1;
    }

    FUNC_0(VAR_3, VAR_7, &VAR_8);
    *VAR_5 = FUNC_4(&VAR_8);

    return VAR_2;
}
