
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int eedi2_taskset; TYPE_4__** eedi_half; TYPE_2__** ref; int tff; } ;
typedef TYPE_5__ hb_filter_private_t ;
struct TYPE_10__ {TYPE_3__* plane; } ;
struct TYPE_9__ {int data; } ;
struct TYPE_8__ {TYPE_1__* plane; } ;
struct TYPE_7__ {int stride; int height; int * data; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int ,int,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2( hb_filter_private_t * VAR_1 )
{

    int VAR_2;
    for( VAR_2 = 0; VAR_2 < 3; VAR_2++ )
    {
        int VAR_3 = VAR_1->ref[1]->plane[VAR_2].stride;
        int VAR_4 = VAR_1->ref[1]->plane[VAR_2].height;
        int VAR_5 = !VAR_1->tff;

        FUNC_0(
                &VAR_1->ref[1]->plane[VAR_2].data[VAR_3 * VAR_5],
                VAR_1->eedi_half[VAR_0]->plane[VAR_2].data, VAR_3, VAR_4 );
    }





    FUNC_1( &VAR_1->eedi2_taskset );
}
