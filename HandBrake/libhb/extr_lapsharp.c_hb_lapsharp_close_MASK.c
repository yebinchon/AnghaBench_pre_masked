
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hb_filter_private_t ;
struct TYPE_3__ {int * private_data; } ;
typedef TYPE_1__ hb_filter_object_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(hb_filter_object_t * VAR_0)
{
    hb_filter_private_t *VAR_1 = VAR_0->private_data;

    if (VAR_1 == ((void*)0))
    {
        return;
    }

    FUNC_0(VAR_1);
    VAR_0->private_data = ((void*)0);
}
