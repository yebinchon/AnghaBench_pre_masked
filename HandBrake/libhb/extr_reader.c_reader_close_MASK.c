
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int splice_list_size; struct TYPE_5__* splice_list; struct TYPE_5__* fifos; int list; scalar_t__ stream; scalar_t__ dvd; scalar_t__ bd; } ;
typedef TYPE_1__ hb_work_private_t ;
struct TYPE_6__ {TYPE_1__* private_data; } ;
typedef TYPE_2__ hb_work_object_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__*) ;

__attribute__((used)) static void FUNC_7( hb_work_object_t * VAR_0 )
{
    hb_work_private_t * VAR_1 = VAR_0->private_data;

    if ( VAR_1 == ((void*)0) )
    {
        return;
    }
    if (VAR_1->bd)
    {
        FUNC_2( VAR_1->bd );
        FUNC_1( &VAR_1->bd );
    }
    else if (VAR_1->dvd)
    {
        FUNC_5( VAR_1->dvd );
        FUNC_4( &VAR_1->dvd );
    }
    else if (VAR_1->stream)
    {
        FUNC_6(&VAR_1->stream);
    }

    int VAR_2;
    for (VAR_2 = 0; VAR_2 < VAR_1->splice_list_size; VAR_2++)
    {
        FUNC_3(&VAR_1->splice_list[VAR_2].list);
    }

    FUNC_0(VAR_1->fifos);
    FUNC_0(VAR_1->splice_list);
    FUNC_0(VAR_1);
}
