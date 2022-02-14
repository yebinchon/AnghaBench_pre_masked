
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int hb_buffer_t ;
struct TYPE_5__ {int stream; int chapter; int next_chap; int h; int bd; } ;
typedef TYPE_1__ hb_bd_t ;
struct TYPE_6__ {int event; int param; } ;
typedef TYPE_2__ BD_EVENT ;






 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int,char*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int ) ;
 int * FUNC_8 (int ,int*,int ,int) ;
 int FUNC_9 (int ,int*) ;

hb_buffer_t * FUNC_10( hb_bd_t * VAR_1 )
{
    int VAR_2;
    int VAR_3 = 0;
    int VAR_4 = 0;
    uint8_t VAR_5[192];
    BD_EVENT VAR_6;
    uint64_t VAR_7;
    hb_buffer_t * VAR_8 = ((void*)0);
    uint8_t VAR_9;

    while ( 1 )
    {
        VAR_9 = 0;
        VAR_2 = FUNC_9( VAR_1->bd, VAR_5 );
        while ( FUNC_0( VAR_1->bd, &VAR_6 ) )
        {
            switch ( VAR_6.event )
            {
                case 131:


                    if (VAR_6.param > VAR_1->chapter)
                    {
                        VAR_1->next_chap = VAR_6.param;
                    }
                    break;

                case 129:
                    VAR_9 = 1;
                    FUNC_4(2, "bd: Play item %u", VAR_6.param);
                    break;

                case 128:
                    FUNC_1( VAR_1->bd );
                    break;

                case 130:
                    FUNC_6("bd: End of title");
                    if (VAR_2 <= 0)
                    {
                        return ((void*)0);
                    }
                    break;

                default:
                    break;
            }
        }

        if ( VAR_2 < 0 )
        {
            FUNC_5("bd: Read Error");
            VAR_7 = FUNC_3( VAR_1->bd );
            FUNC_2( VAR_1->bd, VAR_7 + 192 );
            VAR_3++;
            if (VAR_3 > 10)
            {
                FUNC_5("bd: Error, too many consecutive read errors");
                FUNC_7(VAR_1->h, VAR_0);
                return ((void*)0);
            }
            continue;
        }
        else if ( VAR_2 == 0 )
        {



            VAR_4++;
            if (VAR_4 > 1000)
            {


                return ((void*)0);
            }
            continue;
        }

        if (VAR_4 > 0)
        {
            FUNC_5("bd: Read Error, skipping bad data.");
            VAR_4 = 0;
        }

        VAR_3 = 0;

        if (VAR_1->chapter != VAR_1->next_chap)
        {
            VAR_1->chapter = VAR_1->next_chap;
            VAR_8 = FUNC_8(VAR_1->stream, VAR_5+4, VAR_1->chapter, VAR_9);
        }
        else
        {
            VAR_8 = FUNC_8(VAR_1->stream, VAR_5+4, 0, VAR_9);
        }
        if (VAR_8 != ((void*)0))
        {
            return VAR_8;
        }
    }
    return ((void*)0);
}
