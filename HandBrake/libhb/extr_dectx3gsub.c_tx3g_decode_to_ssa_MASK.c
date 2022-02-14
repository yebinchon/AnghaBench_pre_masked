
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef char uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_14__ {int line; } ;
typedef TYPE_2__ hb_work_private_t ;
struct TYPE_13__ {int scr_sequence; int stop; int start; int frametype; } ;
struct TYPE_15__ {char* data; int size; TYPE_1__ s; } ;
typedef TYPE_3__ hb_buffer_t ;
struct TYPE_16__ {int startChar; int endChar; void* textColorRGBA; void* fontSize; void* faceStyleFlags; void* fontID; } ;
typedef TYPE_4__ StyleRecord ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char) ;
 int VAR_1 ;
 char* FUNC_2 (int) ;
 void* FUNC_3 () ;
 void* FUNC_4 () ;
 void* FUNC_5 () ;
 int FUNC_6 (int) ;
 int VAR_2 ;
 int FUNC_7 (char) ;
 TYPE_4__* FUNC_8 (int,int) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_3__**) ;
 TYPE_3__* FUNC_11 (int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*,TYPE_4__*) ;

__attribute__((used)) static hb_buffer_t *FUNC_16(hb_work_private_t *VAR_3, hb_buffer_t *VAR_4)
{
    uint8_t *VAR_5 = VAR_4->data;
    uint8_t *VAR_6 = VAR_4->data + VAR_4->size;

    uint16_t VAR_7 = 0;
    StyleRecord *VAR_8 = ((void*)0);
    uint16_t VAR_9 = FUNC_3();
    uint8_t *VAR_10 = FUNC_2(VAR_9);
    while ( VAR_5 < VAR_6 )
    {



        uint32_t VAR_11 = FUNC_4();
        if ( VAR_11 == 0 )
        {
            VAR_11 = VAR_5 - VAR_6;
        }
        if ( VAR_11 == 1 )
        {
            FUNC_12( "dectx3gsub: TextSampleModifierBox has unsupported large size" );
            break;
        }
        uint32_t VAR_12 = FUNC_4();
        if (VAR_12 == FUNC_0("uuid"))
        {
            FUNC_12( "dectx3gsub: TextSampleModifierBox has unsupported extended type" );
            break;
        }

        if (VAR_12 == FUNC_0("styl"))
        {


            if ( VAR_7 != 0 )
            {
                FUNC_12( "dectx3gsub: found additional StyleBoxes on subtitle; skipping" );
                FUNC_6(VAR_11);
                continue;
            }

            VAR_7 = FUNC_3();
            if (VAR_7 > 0)
                VAR_8 = FUNC_8(VAR_7, sizeof(StyleRecord));

            int VAR_13;
            for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++)
            {
                VAR_8[VAR_13].startChar = FUNC_3();
                VAR_8[VAR_13].endChar = FUNC_3();
                VAR_8[VAR_13].fontID = FUNC_3();
                VAR_8[VAR_13].faceStyleFlags = FUNC_5();
                VAR_8[VAR_13].fontSize = FUNC_5();
                VAR_8[VAR_13].textColorRGBA = FUNC_4();
            }
        }
        else
        {

            FUNC_6(VAR_11);
        }
    }




    int VAR_14 = VAR_9 + VAR_2 + (VAR_7 * VAR_1);
    hb_buffer_t *VAR_15 = FUNC_11( VAR_14 );
    if ( VAR_15 == ((void*)0) )
        goto fail;
    uint8_t *VAR_16 = VAR_15->data;
    uint8_t *VAR_17;
    int VAR_18 = 0;
    int VAR_19 = 0;

    FUNC_13((char*)VAR_16, "%d,,Default,,0,0,0,,", VAR_3->line);
    VAR_16 += FUNC_14((char*)VAR_16);
    VAR_17 = VAR_16;
    for (VAR_5 = VAR_10, VAR_6 = VAR_10 + VAR_9; VAR_5 < VAR_6; VAR_5++)
    {
        if (FUNC_1(*VAR_5))
        {

            FUNC_7(*VAR_5);
            continue;
        }

        if (VAR_19 < VAR_7)
        {
            if (VAR_8[VAR_19].endChar == VAR_18)
            {
                if (VAR_19 + 1 >= VAR_7 ||
                    VAR_8[VAR_19+1].startChar > VAR_18)
                {
                    VAR_16 += FUNC_15((char*)VAR_16, ((void*)0));
                }
                VAR_19++;
            }
            if (VAR_8[VAR_19].startChar == VAR_18)
            {
                VAR_16 += FUNC_15((char*)VAR_16, &VAR_8[VAR_19]);
            }
        }

        if (*VAR_5 == '\n')
        {
            FUNC_7('\\');
            FUNC_7('N');
        }
        else
        {
            FUNC_7(*VAR_5);
        }
        VAR_18++;
    }
    if (VAR_17 == VAR_16)
    {

        FUNC_9(VAR_8);
        FUNC_10(&VAR_15);
        return ((void*)0);
    }
    *VAR_16 = '\0';
    VAR_16++;


    VAR_15->size = VAR_16 - VAR_15->data;


    VAR_15->s.frametype = VAR_0;
    VAR_15->s.start = VAR_4->s.start;
    VAR_15->s.stop = VAR_4->s.stop;
    VAR_15->s.scr_sequence = VAR_4->s.scr_sequence;

fail:
    FUNC_9(VAR_8);

    return VAR_15;
}
