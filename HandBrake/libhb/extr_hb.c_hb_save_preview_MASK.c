
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int hb_handle_t ;
struct TYPE_5__ {int max_plane; } ;
struct TYPE_7__ {TYPE_2__* plane; TYPE_1__ f; } ;
typedef TYPE_3__ hb_buffer_t ;
struct TYPE_6__ {int stride; int width; int height; int * data; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int,int,int *) ;
 int FUNC_4 (char*,...) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (char*,int ,int,int) ;
 int FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (int ,char*,int) ;

int FUNC_10( hb_handle_t * VAR_1, int VAR_2, int VAR_3, hb_buffer_t *VAR_4 )
{
    FILE * VAR_5;
    char * VAR_6;
    char VAR_7[80];

    VAR_6 = FUNC_7("%d_%d_%d", FUNC_6(VAR_1),
                                         VAR_2, VAR_3 );

    VAR_5 = FUNC_5(VAR_6, "wb");
    if (VAR_5 == ((void*)0))
    {
        if (FUNC_9(VAR_0, VAR_7, 79) != 0)
            FUNC_8(VAR_7, "unknown -- strerror_r() failed");

        FUNC_4("hb_save_preview: Failed to open %s (reason: %s)",
                 VAR_6, VAR_7);
        FUNC_2(VAR_6);
        return -1;
    }

    int VAR_8, VAR_9;
    for( VAR_8 = 0; VAR_8 <= VAR_4->f.max_plane; VAR_8++ )
    {
        uint8_t *VAR_10 = VAR_4->plane[VAR_8].data;
        int VAR_11 = VAR_4->plane[VAR_8].stride;
        int VAR_12 = VAR_4->plane[VAR_8].width;
        int VAR_13 = VAR_4->plane[VAR_8].height;

        for( VAR_9 = 0; VAR_9 < VAR_13; VAR_9++ )
        {
            if (FUNC_3( VAR_10, VAR_12, 1, VAR_5 ) < VAR_12)
            {
                if (FUNC_1(VAR_5))
                {
                    if (FUNC_9(VAR_0, VAR_7, 79) != 0)
                        FUNC_8(VAR_7, "unknown -- strerror_r() failed");

                    FUNC_4( "hb_save_preview: Failed to write line %d to %s "
                              "(reason: %s). Preview will be incomplete.",
                              VAR_9, VAR_6, VAR_7 );
                    goto done;
                }
            }
            VAR_10 += VAR_11;
        }
    }

done:
    FUNC_2(VAR_6);
    FUNC_0( VAR_5 );

    return 0;
}
