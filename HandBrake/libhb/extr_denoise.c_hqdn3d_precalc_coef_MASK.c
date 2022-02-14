
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double) ;
 double FUNC_1 (double,double) ;
 double FUNC_2 (double) ;
 double FUNC_3 (double,double) ;

__attribute__((used)) static void FUNC_4( short * VAR_0,
                                 double VAR_1 )
{
    int VAR_2;
    double VAR_3, VAR_4, VAR_5;

    VAR_3 = FUNC_2( 0.25 ) / FUNC_2( 1.0 - FUNC_1(VAR_1,252.0)/255.0 - 0.00001 );

    for( VAR_2 = -255*16; VAR_2 <= 255*16; VAR_2++ )
    {

        double VAR_6 = (VAR_2 + 15.0/32.0) / 16.0;
        VAR_4 = 1.0 - FUNC_0(VAR_6) / 255.0;
        VAR_5 = FUNC_3(VAR_4, VAR_3) * 256.0 * VAR_6;
        VAR_0[16*256+VAR_2] = (VAR_5<0) ? (VAR_5-0.5) : (VAR_5+0.5);
    }

    VAR_0[0] = (VAR_1 != 0);
}
