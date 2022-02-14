
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static int FUNC_0(const uint8_t *VAR_0)
{



    int VAR_1;
    int VAR_2 = VAR_0[4] >> 4;
    if ( VAR_2 == 0x02 )
    {


        if( ( VAR_0[4] & 0xf1 ) != 0x21 ||
            ( VAR_0[6] & 0x01 ) != 0x01 ||
            ( VAR_0[8] & 0x01 ) != 0x01 ||
            ( VAR_0[9] & 0x80 ) != 0x80 ||
            ( VAR_0[11] & 0x01 ) != 0x01 )
        {
            return 0;
        }

        VAR_1 = 12;
    }
    else
    {


        if( ( VAR_0[4] & 0xC4 ) != 0x44 ||
            ( VAR_0[6] & 0x04 ) != 0x04 ||
            ( VAR_0[8] & 0x04 ) != 0x04 ||
            ( VAR_0[9] & 0x01 ) != 0x01 ||
            ( VAR_0[12] & 0x03 ) != 0x03 )
        {
            return 0;
        }

        VAR_1 = 14 + ( VAR_0[13] & 0x7 );
    }
    return (VAR_0[VAR_1+0] == 0x00) && (VAR_0[VAR_1+1] == 0x00) && (VAR_0[VAR_1+2] == 0x01);
}
