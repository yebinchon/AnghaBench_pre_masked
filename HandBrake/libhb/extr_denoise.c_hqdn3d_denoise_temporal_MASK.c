
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned short,unsigned char,short*) ;

__attribute__((used)) static void FUNC_1( unsigned char * VAR_0,
                                     unsigned char * VAR_1,
                                     unsigned short * VAR_2,
                                     int VAR_3, int VAR_4,
                                     short * VAR_5)
{
    int VAR_6, VAR_7;
    unsigned int VAR_8;

    VAR_5 += 0x1000;

    for( VAR_7 = 0; VAR_7 < VAR_4; VAR_7++ )
    {
        for( VAR_6 = 0; VAR_6 < VAR_3; VAR_6++ )
        {
            VAR_2[VAR_6] = VAR_8 = FUNC_0( VAR_2[VAR_6],
                                                     VAR_0[VAR_6]<<8,
                                                     VAR_5 );
            VAR_1[VAR_6] = (VAR_8+0x7F)>>8;
        }

        VAR_0 += VAR_3;
        VAR_1 += VAR_3;
        VAR_2 += VAR_3;
    }
}
