
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_5__ {scalar_t__ index; scalar_t__ duration; } ;
typedef TYPE_1__ hb_title_t ;
struct TYPE_6__ {scalar_t__ feature; int list_title; } ;
typedef TYPE_2__ hb_title_set_t ;
typedef int gint ;


 int FUNC_0 (char*) ;
 int * VAR_0 ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ,int) ;

gint
FUNC_4()
{
    hb_title_set_t * VAR_1;
    const hb_title_t * VAR_2;
    gint VAR_3 = 0, VAR_4, VAR_5 = -1;
    int64_t VAR_6 = 0;

    FUNC_0("ghb_longest_title ()\n");
    if (VAR_0 == ((void*)0)) return 0;
    VAR_1 = FUNC_1( VAR_0 );
    VAR_3 = FUNC_2( VAR_1->list_title );
    if (VAR_3 < 1) return -1;



    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
    {
        VAR_2 = FUNC_3(VAR_1->list_title, VAR_4);
        if (VAR_2->index == VAR_1->feature)
            return VAR_1->feature;
        if (VAR_2->duration > VAR_6)
            VAR_5 = VAR_2->index;
    }
    return VAR_5;
}
