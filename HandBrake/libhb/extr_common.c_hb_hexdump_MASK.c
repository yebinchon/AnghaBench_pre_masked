
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int hb_debug_level_t ;


 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (int const) ;
 int FUNC_2 (char*,char,int) ;
 int FUNC_3 (char*,char*,int const) ;

void FUNC_4( hb_debug_level_t VAR_0, const char * VAR_1, const uint8_t * VAR_2, int VAR_3 )
{
    int VAR_4;
    char VAR_5[80], VAR_6[19], *VAR_7;

    VAR_6[18] = 0;
    VAR_6[0] = '|';
    VAR_6[17] = '|';
    FUNC_2(&VAR_6[1], '.', 16);
    VAR_7 = VAR_5;
    if( VAR_1 )
        FUNC_0(VAR_0, "++++ %s ++++", VAR_1);
    else
        FUNC_0(VAR_0, "++++++++++++");
    for( VAR_4 = 0; VAR_4 < VAR_3; VAR_4++ )
    {
        if( ( VAR_4 & 0x0f ) == 0x0f )
        {
            VAR_7 += FUNC_3( VAR_7, "%02x", VAR_2[VAR_4] );
            FUNC_0( VAR_0, "    %-50s%20s", VAR_5, VAR_6 );
            FUNC_2(&VAR_6[1], '.', 16);
            VAR_7 = VAR_5;
        }
        else if( ( VAR_4 & 0x07 ) == 0x07 )
        {
            VAR_7 += FUNC_3( VAR_7, "%02x  ", VAR_2[VAR_4] );
        }
        else
        {
            VAR_7 += FUNC_3( VAR_7, "%02x ", VAR_2[VAR_4] );
        }
        if( FUNC_1( VAR_2[VAR_4] ) )
            VAR_6[(VAR_4 & 0x0f) + 1] = VAR_2[VAR_4];
        else
            VAR_6[(VAR_4 & 0x0f) + 1] = '.';
    }
    if( VAR_7 != VAR_5 )
    {
        FUNC_0( VAR_0, "    %-50s%20s", VAR_5, VAR_6 );
    }
}
