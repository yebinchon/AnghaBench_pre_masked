
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef double uint64_t ;
struct TYPE_9__ {int index; double duration; } ;
typedef TYPE_2__ hb_title_t ;
typedef int hb_list_t ;
struct TYPE_10__ {TYPE_4__** title_info; } ;
typedef TYPE_3__ hb_bd_t ;
struct TYPE_12__ {int format; } ;
struct TYPE_11__ {int chapter_count; TYPE_1__* clips; } ;
struct TYPE_8__ {TYPE_5__* video_streams; } ;
typedef TYPE_4__ BLURAY_TITLE_INFO ;
typedef TYPE_5__ BLURAY_STREAM_INFO ;


 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *,int) ;

int FUNC_2( hb_bd_t * VAR_0, hb_list_t * VAR_1 )
{
    int VAR_2 = 0;
    int VAR_3;
    uint64_t VAR_4 = 0;
    int VAR_5 = 0;
    int VAR_6 = 0;
    int VAR_7[8] = {0, 1, 3, 2, 6, 5, 7, 4};
    BLURAY_TITLE_INFO * VAR_8;

    for ( VAR_3 = 0; VAR_3 < FUNC_0( VAR_1 ); VAR_3++ )
    {
        hb_title_t * VAR_9 = FUNC_1( VAR_1, VAR_3 );
        VAR_8 = VAR_0->title_info[VAR_9->index - 1];
        if ( VAR_8 )
        {
            BLURAY_STREAM_INFO * VAR_10 = &VAR_8->clips[0].video_streams[0];
            if ( VAR_9->duration > VAR_4 * 0.7 && VAR_10->format < 8 )
            {
                if (VAR_5 < VAR_7[VAR_10->format] ||
                    ( VAR_9->duration > VAR_4 &&
                          VAR_5 == VAR_7[VAR_10->format]))
                {
                    VAR_2 = VAR_9->index;
                    VAR_4 = VAR_9->duration;
                    VAR_5 = VAR_7[VAR_10->format];
                    VAR_6 = VAR_8->chapter_count;
                }
                else if (VAR_5 == VAR_7[VAR_10->format] &&
                         VAR_9->duration == VAR_4 &&
                         VAR_8->chapter_count > VAR_6)
                {
                    VAR_2 = VAR_9->index;
                    VAR_6 = VAR_8->chapter_count;
                }
            }
        }
        else if ( VAR_9->duration > VAR_4 )
        {
            VAR_4 = VAR_9->duration;
            VAR_2 = VAR_9->index;
        }
    }
    return VAR_2;
}
