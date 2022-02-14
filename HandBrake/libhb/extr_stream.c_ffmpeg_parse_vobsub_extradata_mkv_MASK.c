
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int width; int height; int palette_set; int * palette; } ;
typedef TYPE_1__ hb_subtitle_t ;
struct TYPE_6__ {int extradata_size; int extradata; } ;
typedef TYPE_2__ AVCodecParameters ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (char*,char*,int*,int*,...) ;
 char* FUNC_5 (char*,char*,char**) ;

__attribute__((used)) static int FUNC_6( AVCodecParameters *VAR_0,
                                              hb_subtitle_t *VAR_1 )
{

    char *VAR_2 = FUNC_2( VAR_0->extradata_size + 1 );
    if ( VAR_2 == ((void*)0) )
        return 1;
    FUNC_3( VAR_2, VAR_0->extradata, VAR_0->extradata_size );
    VAR_2[VAR_0->extradata_size] = '\0';

    uint32_t VAR_3[16];
    int VAR_4 = 0;
    int VAR_5 = 0;

    char *VAR_6, *VAR_7;
    for ( VAR_6 = FUNC_5( VAR_2, "\n", &VAR_7 );
          VAR_6;
          VAR_6 = FUNC_5( ((void*)0), "\n", &VAR_7 ) )
    {
        if (!VAR_4)
        {
            int VAR_8 = FUNC_4(VAR_6, "palette: "
                "%06x, %06x, %06x, %06x, "
                "%06x, %06x, %06x, %06x, "
                "%06x, %06x, %06x, %06x, "
                "%06x, %06x, %06x, %06x",
                &VAR_3[0], &VAR_3[1], &VAR_3[2], &VAR_3[3],
                &VAR_3[4], &VAR_3[5], &VAR_3[6], &VAR_3[7],
                &VAR_3[8], &VAR_3[9], &VAR_3[10], &VAR_3[11],
                &VAR_3[12], &VAR_3[13], &VAR_3[14], &VAR_3[15]);

            if (VAR_8 == 16) {
                VAR_4 = 1;
            }
        }
        if (!VAR_5)
        {
            int VAR_9 = FUNC_4(VAR_6, "size: %dx%d",
                &VAR_1->width, &VAR_1->height);

            if (VAR_9 == 2) {
                VAR_5 = 1;
            }
        }
        if (VAR_4 && VAR_5)
            break;
    }

    if (VAR_1->width == 0 || VAR_1->height == 0)
    {
        VAR_1->width = 720;
        VAR_1->height = 480;
    }

    FUNC_0( VAR_2 );

    if ( VAR_4 )
    {
        int VAR_10;
        for (VAR_10=0; VAR_10<16; VAR_10++)
            VAR_1->palette[VAR_10] = FUNC_1(VAR_3[VAR_10]);
        VAR_1->palette_set = 1;
        return 0;
    }
    else
    {
        return 1;
    }
}
