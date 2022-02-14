
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int num; int den; } ;
struct TYPE_9__ {TYPE_2__ par; } ;
struct TYPE_7__ {int num; int den; } ;
struct TYPE_10__ {int index; int playlist; int video_id; int angle_count; TYPE_3__ geometry; TYPE_1__ video_timebase; int video_codec_param; int video_codec; int path; int metadata; void* list_attachment; void* list_subtitle; void* list_chapter; void* list_audio; } ;
typedef TYPE_4__ hb_title_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (int,int) ;
 void* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;

hb_title_t * FUNC_4( char * VAR_2, int VAR_3 )
{
    hb_title_t * VAR_4;

    VAR_4 = FUNC_0( sizeof( hb_title_t ), 1 );

    VAR_4->index = VAR_3;
    VAR_4->playlist = -1;
    VAR_4->list_audio = FUNC_1();
    VAR_4->list_chapter = FUNC_1();
    VAR_4->list_subtitle = FUNC_1();
    VAR_4->list_attachment = FUNC_1();
    VAR_4->metadata = FUNC_2();
    VAR_4->path = FUNC_3(VAR_2);

    VAR_4->video_id = 0xE0;
    VAR_4->video_codec = VAR_1;
    VAR_4->video_codec_param = VAR_0;
    VAR_4->video_timebase.num = 1;
    VAR_4->video_timebase.den = 90000;
    VAR_4->angle_count = 1;
    VAR_4->geometry.par.num = 1;
    VAR_4->geometry.par.den = 1;

    return VAR_4;
}
