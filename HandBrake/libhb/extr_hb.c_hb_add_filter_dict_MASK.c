
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int list_filter; } ;
typedef TYPE_2__ hb_job_t ;
struct TYPE_12__ {scalar_t__ id; scalar_t__ enforce_order; TYPE_1__* sub_filter; int const* settings; } ;
typedef TYPE_3__ hb_filter_object_t ;
typedef int const hb_dict_t ;
struct TYPE_10__ {void* settings; } ;


 int const* FUNC_0 () ;
 int FUNC_1 (TYPE_3__**) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,TYPE_3__*) ;
 TYPE_3__* FUNC_5 (int ,int) ;
 void* FUNC_6 (int const*) ;

void FUNC_7( hb_job_t * VAR_0, hb_filter_object_t * VAR_1,
                         const hb_dict_t * VAR_2 )
{
    hb_dict_t * VAR_3;


    if (VAR_2 == ((void*)0))
    {
        VAR_3 = FUNC_0();
    }
    else
    {
        VAR_3 = FUNC_6(VAR_2);
    }
    VAR_1->settings = VAR_3;
    if (VAR_1->sub_filter)
    {
        VAR_1->sub_filter->settings = FUNC_6(VAR_3);
    }
    if( VAR_1->enforce_order )
    {

        int VAR_4;
        for( VAR_4 = 0; VAR_4 < FUNC_3( VAR_0->list_filter ); VAR_4++ )
        {
            hb_filter_object_t * VAR_5 = FUNC_5( VAR_0->list_filter, VAR_4 );
            if( VAR_5->id > VAR_1->id )
            {
                FUNC_4( VAR_0->list_filter, VAR_4, VAR_1 );
                return;
            }
            else if( VAR_5->id == VAR_1->id )
            {

                FUNC_1( &VAR_1 );
                return;
            }
        }
    }

    FUNC_2( VAR_0->list_filter, VAR_1 );
}
