
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int list_subtitle; } ;
typedef TYPE_1__ hb_title_t ;
struct TYPE_11__ {scalar_t__* name; int * src_filename; } ;
struct TYPE_10__ {int track; scalar_t__ out_track; TYPE_3__ config; } ;
typedef TYPE_2__ hb_subtitle_t ;
typedef TYPE_3__ hb_subtitle_config_t ;
struct TYPE_12__ {int list_subtitle; TYPE_1__* title; } ;
typedef TYPE_4__ hb_job_t ;


 int FUNC_0 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 TYPE_2__* FUNC_3 (int ) ;
 scalar_t__* FUNC_4 (scalar_t__*) ;

int FUNC_5(const hb_job_t * VAR_0, const hb_subtitle_config_t * VAR_1, int VAR_2)
{
    hb_title_t *VAR_3 = VAR_0->title;
    hb_subtitle_t *VAR_4;

    VAR_4 = FUNC_3( FUNC_2( VAR_3->list_subtitle, VAR_2 ) );
    if( VAR_4 == ((void*)0) )
    {

        return 0;
    }



    VAR_4->track = VAR_2;
    VAR_4->config = *VAR_1;
    if (VAR_1->name != ((void*)0) && VAR_1->name[0] != 0)
    {
        VAR_4->config.name = FUNC_4(VAR_1->name);
    }
    else
    {
        VAR_4->config.name = ((void*)0);
    }
    VAR_4->config.src_filename = ((void*)0);
    VAR_4->out_track = FUNC_1(VAR_0->list_subtitle) + 1;
    FUNC_0(VAR_0->list_subtitle, VAR_4);
    return 1;
}
