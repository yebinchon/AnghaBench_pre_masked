
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; int name; struct TYPE_4__* sub_filter; } ;
typedef TYPE_1__ hb_filter_object_t ;




 int VAR_0 ;

 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int) ;

hb_filter_object_t * FUNC_2( int VAR_1 )
{
    switch (VAR_1)
    {
        case 128:
        case 129:
        case 130:
        {
            hb_filter_object_t * VAR_2;

            VAR_2 = FUNC_0(FUNC_1(VAR_0));
            VAR_2->sub_filter = FUNC_0(FUNC_1(VAR_1));
            VAR_2->id = VAR_1;
            VAR_2->name = VAR_2->sub_filter->name;
            return VAR_2;
        } break;

        default:
            return FUNC_0(FUNC_1(VAR_1));
    }
}
