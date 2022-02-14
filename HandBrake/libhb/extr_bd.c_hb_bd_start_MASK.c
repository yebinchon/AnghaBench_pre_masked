
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int index; int duration; } ;
typedef TYPE_2__ hb_title_t ;
struct TYPE_9__ {int next_chap; int * stream; int h; scalar_t__ chapter; int bd; TYPE_1__** title_info; int duration; } ;
typedef TYPE_3__ hb_bd_t ;
struct TYPE_7__ {int idx; } ;
typedef int BD_EVENT ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int * FUNC_2 (int ,TYPE_2__*) ;

int FUNC_3( hb_bd_t * VAR_0, hb_title_t *VAR_1 )
{
    BD_EVENT VAR_2;

    VAR_0->duration = VAR_1->duration;


    FUNC_1( VAR_0->bd, VAR_0->title_info[VAR_1->index - 1]->idx );
    FUNC_0( VAR_0->bd, &VAR_2 );
    VAR_0->chapter = 0;
    VAR_0->next_chap = 1;
    VAR_0->stream = FUNC_2( VAR_0->h, VAR_1 );
    if ( VAR_0->stream == ((void*)0) )
    {
        return 0;
    }
    return 1;
}
