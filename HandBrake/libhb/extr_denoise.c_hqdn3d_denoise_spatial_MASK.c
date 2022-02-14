
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned short,unsigned int,short*) ;

__attribute__((used)) static void FUNC_1( unsigned char * VAR_0,
                                    unsigned char * VAR_1,
                                    unsigned short * VAR_2,
                                    unsigned short * VAR_3,
                                    int VAR_4, int VAR_5,
                                    short * VAR_6,
                                    short * VAR_7 )
{
    int VAR_8, VAR_9;
    unsigned int VAR_10;
    unsigned int VAR_11;

    VAR_6 += 0x1000;
    VAR_7 += 0x1000;


    VAR_10 = VAR_0[0]<<8;
    for ( VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
    {
        VAR_2[VAR_8] = VAR_11 = VAR_10 = FUNC_0( VAR_10,
                                                            VAR_0[VAR_8]<<8,
                                                            VAR_6 );
        VAR_3[VAR_8] = VAR_11 = FUNC_0( VAR_3[VAR_8],
                                                 VAR_11,
                                                 VAR_7 );
        VAR_1[VAR_8] = (VAR_11+0x7F)>>8;
    }

    for( VAR_9 = 1; VAR_9 < VAR_5; VAR_9++ )
    {
        VAR_0 += VAR_4;
        VAR_1 += VAR_4;
        VAR_3 += VAR_4;
        VAR_10 = VAR_0[0]<<8;
        for ( VAR_8 = 0; VAR_8 < VAR_4-1; VAR_8++ )
        {
            VAR_2[VAR_8] = VAR_11 = FUNC_0( VAR_2[VAR_8],
                                                     VAR_10,
                                                     VAR_6 );
            VAR_10 = FUNC_0( VAR_10,
                                                     VAR_0[VAR_8+1]<<8,
                                                     VAR_6 );
            VAR_3[VAR_8] = VAR_11 = FUNC_0( VAR_3[VAR_8],
                                                     VAR_11,
                                                     VAR_7 );
            VAR_1[VAR_8] = (VAR_11+0x7F)>>8;
        }
        VAR_2[VAR_8] = VAR_11 = FUNC_0( VAR_2[VAR_8],
                                                 VAR_10,
                                                 VAR_6 );
        VAR_3[VAR_8] = VAR_11 = FUNC_0( VAR_3[VAR_8],
                                                 VAR_11,
                                                 VAR_7 );
        VAR_1[VAR_8] = (VAR_11+0x7F)>>8;
    }
}
