
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int list_filter; int * file; int * encoder_level; int * encoder_profile; int * encoder_options; int * encoder_tune; int * encoder_preset; int metadata; int list_attachment; int list_audio; int list_chapter; int list_subtitle; int * json; } ;
typedef TYPE_1__ hb_job_t ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*,int) ;
 void* FUNC_8 (int *) ;

hb_job_t* FUNC_9(hb_job_t * VAR_0)
{
    hb_job_t * VAR_1;


    VAR_1 = FUNC_0( sizeof( hb_job_t ), 1 );
    if (VAR_1 == ((void*)0))
        return ((void*)0);

    if (VAR_0->json != ((void*)0))
    {

        VAR_1->json = FUNC_8(VAR_0->json);
        return VAR_1;
    }
    FUNC_7( VAR_1, VAR_0, sizeof( hb_job_t ) );

    VAR_1->list_subtitle = FUNC_6( VAR_0->list_subtitle );
    VAR_1->list_chapter = FUNC_3( VAR_0->list_chapter );
    VAR_1->list_audio = FUNC_2( VAR_0->list_audio );
    VAR_1->list_attachment = FUNC_1( VAR_0->list_attachment );
    VAR_1->metadata = FUNC_5( VAR_0->metadata );

    if (VAR_0->encoder_preset != ((void*)0))
        VAR_1->encoder_preset = FUNC_8(VAR_0->encoder_preset);
    if (VAR_0->encoder_tune != ((void*)0))
        VAR_1->encoder_tune = FUNC_8(VAR_0->encoder_tune);
    if (VAR_0->encoder_options != ((void*)0))
        VAR_1->encoder_options = FUNC_8(VAR_0->encoder_options);
    if (VAR_0->encoder_profile != ((void*)0))
        VAR_1->encoder_profile = FUNC_8(VAR_0->encoder_profile);
    if (VAR_0->encoder_level != ((void*)0))
        VAR_1->encoder_level = FUNC_8(VAR_0->encoder_level);
    if (VAR_0->file != ((void*)0))
        VAR_1->file = FUNC_8(VAR_0->file);

    VAR_1->list_filter = FUNC_4( VAR_0->list_filter );

    return VAR_1;
}
