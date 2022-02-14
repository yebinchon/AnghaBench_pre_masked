
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int height; int width; } ;
struct TYPE_10__ {TYPE_1__ geometry; int index; } ;
typedef TYPE_3__ hb_title_t ;
typedef int hb_handle_t ;
struct TYPE_11__ {TYPE_2__* plane; } ;
typedef TYPE_4__ hb_buffer_t ;
struct TYPE_9__ {int stride; int width; int height; int * data; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 int * FUNC_5 (char*,char*) ;
 TYPE_4__* FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (char*,int ,int ,int) ;
 int FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (int ,char*,int) ;

hb_buffer_t * FUNC_11(hb_handle_t * VAR_2, hb_title_t *VAR_3, int VAR_4)
{
    FILE * VAR_5;
    char * VAR_6;
    char VAR_7[80];

    VAR_6 = FUNC_8("%d_%d_%d", FUNC_7(VAR_2),
                                         VAR_3->index, VAR_4);

    VAR_5 = FUNC_5(VAR_6, "rb");
    if (VAR_5 == ((void*)0))
    {
        if (FUNC_10(VAR_1, VAR_7, 79) != 0)
            FUNC_9(VAR_7, "unknown -- strerror_r() failed");

        FUNC_4("hb_read_preview: Failed to open %s (reason: %s)",
                 VAR_6, VAR_7);
        FUNC_3(VAR_6);
        return ((void*)0);
    }

    hb_buffer_t * VAR_8;
    VAR_8 = FUNC_6(VAR_0,
                               VAR_3->geometry.width, VAR_3->geometry.height);

    if (!VAR_8)
        goto done;

    int VAR_9, VAR_10;
    for (VAR_9 = 0; VAR_9 < 3; VAR_9++)
    {
        uint8_t *VAR_11 = VAR_8->plane[VAR_9].data;
        int VAR_12 = VAR_8->plane[VAR_9].stride;
        int VAR_13 = VAR_8->plane[VAR_9].width;
        int VAR_14 = VAR_8->plane[VAR_9].height;

        for (VAR_10 = 0; VAR_10 < VAR_14; VAR_10++)
        {
            if (FUNC_2(VAR_11, VAR_13, 1, VAR_5) < VAR_13)
            {
                if (FUNC_1(VAR_5))
                {
                    if (FUNC_10(VAR_1, VAR_7, 79) != 0)
                        FUNC_9(VAR_7, "unknown -- strerror_r() failed");

                    FUNC_4("hb_read_preview: Failed to read line %d from %s "
                             "(reason: %s). Preview will be incomplete.",
                             VAR_10, VAR_6, VAR_7 );
                    goto done;
                }
            }
            VAR_11 += VAR_12;
        }
    }

done:
    FUNC_3(VAR_6);
    FUNC_0(VAR_5);

    return VAR_8;
}
