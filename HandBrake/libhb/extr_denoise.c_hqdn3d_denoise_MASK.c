
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,unsigned char*,unsigned short*,unsigned short*,int,int,short*,short*) ;
 int FUNC_1 (unsigned char*,unsigned char*,unsigned short*,int,int,short*) ;
 unsigned short* FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3( unsigned char * VAR_0,
                            unsigned char * VAR_1,
                            unsigned short * VAR_2,
                            unsigned short ** VAR_3,
                            int VAR_4,
                            int VAR_5,
                            short * VAR_6,
                            short * VAR_7 )
{
    int VAR_8, VAR_9;
    unsigned short* VAR_10 = (*VAR_3);

    if( !VAR_10)
    {
        unsigned char * VAR_11 = VAR_0;
        (*VAR_3) = VAR_10 = FUNC_2( VAR_4*VAR_5*sizeof(unsigned short) );
        for ( VAR_9 = 0; VAR_9 < VAR_5; VAR_9++, VAR_0 += VAR_4, VAR_10 += VAR_4 )
        {
            for( VAR_8 = 0; VAR_8 < VAR_4; VAR_8++ )
            {
                VAR_10[VAR_8] = VAR_0[VAR_8]<<8;
            }
        }
        VAR_0 = VAR_11;
        VAR_10 = *VAR_3;
    }


    if( VAR_6[0] )
    {
        FUNC_0( VAR_0,
                                VAR_1,
                                VAR_2,
                                VAR_10,
                                VAR_4, VAR_5,
                                VAR_6,
                                VAR_7 );
    }
    else
    {
        FUNC_1( VAR_0,
                                 VAR_1,
                                 VAR_10,
                                 VAR_4, VAR_5,
                                 VAR_7);
    }
}
