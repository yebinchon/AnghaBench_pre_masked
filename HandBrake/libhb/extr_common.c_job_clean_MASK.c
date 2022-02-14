
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hb_subtitle_t ;
struct TYPE_3__ {void* encoder_preset; void* encoder_tune; void* encoder_options; void* encoder_profile; void* encoder_level; void* file; int metadata; int list_attachment; int list_filter; int list_subtitle; int list_audio; int list_chapter; int * json; } ;
typedef TYPE_1__ hb_job_t ;
typedef int hb_filter_object_t ;
typedef int hb_chapter_t ;
typedef int hb_audio_t ;
typedef int hb_attachment_t ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **) ;

__attribute__((used)) static void FUNC_10( hb_job_t * VAR_0 )
{
    if (VAR_0)
    {
        hb_chapter_t *VAR_1;
        hb_audio_t *VAR_2;
        hb_subtitle_t *VAR_3;
        hb_filter_object_t *VAR_4;
        hb_attachment_t *VAR_5;

        FUNC_0((void*)VAR_0->json);
        VAR_0->json = ((void*)0);
        FUNC_0(VAR_0->encoder_preset);
        VAR_0->encoder_preset = ((void*)0);
        FUNC_0(VAR_0->encoder_tune);
        VAR_0->encoder_tune = ((void*)0);
        FUNC_0(VAR_0->encoder_options);
        VAR_0->encoder_options = ((void*)0);
        FUNC_0(VAR_0->encoder_profile);
        VAR_0->encoder_profile = ((void*)0);
        FUNC_0(VAR_0->encoder_level);
        VAR_0->encoder_level = ((void*)0);
        FUNC_0(VAR_0->file);
        VAR_0->file = ((void*)0);


        while( ( VAR_1 = FUNC_6( VAR_0->list_chapter, 0 ) ) )
        {
            FUNC_7( VAR_0->list_chapter, VAR_1 );
            FUNC_3( &VAR_1 );
        }
        FUNC_5( &VAR_0->list_chapter );


        while( ( VAR_2 = FUNC_6( VAR_0->list_audio, 0 ) ) )
        {
            FUNC_7( VAR_0->list_audio, VAR_2 );
            FUNC_2( &VAR_2 );
        }
        FUNC_5( &VAR_0->list_audio );


        while( ( VAR_3 = FUNC_6( VAR_0->list_subtitle, 0 ) ) )
        {
            FUNC_7( VAR_0->list_subtitle, VAR_3 );
            FUNC_9( &VAR_3 );
        }
        FUNC_5( &VAR_0->list_subtitle );


        while( ( VAR_4 = FUNC_6( VAR_0->list_filter, 0 ) ) )
        {
            FUNC_7( VAR_0->list_filter, VAR_4 );
            FUNC_4( &VAR_4 );
        }
        FUNC_5( &VAR_0->list_filter );


        while( ( VAR_5 = FUNC_6( VAR_0->list_attachment, 0 ) ) )
        {
            FUNC_7( VAR_0->list_attachment, VAR_5 );
            FUNC_1( &VAR_5 );
        }
        FUNC_5( &VAR_0->list_attachment );


        FUNC_8( &VAR_0->metadata );
    }
}
