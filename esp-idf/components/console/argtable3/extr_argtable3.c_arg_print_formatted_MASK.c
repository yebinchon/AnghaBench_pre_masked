
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (char const,int *) ;
 scalar_t__ FUNC_2 (int) ;
 unsigned int FUNC_3 (char const*) ;

void FUNC_4( FILE *VAR_0,
                          const unsigned VAR_1,
                          const unsigned VAR_2,
                          const char *VAR_3 )
{
    const unsigned VAR_4 = FUNC_3( VAR_3 );
    unsigned VAR_5 = 0;
    unsigned VAR_6 = VAR_4 + 1;
    const unsigned VAR_7 = (VAR_2 - VAR_1) + 1;


    if ( VAR_6 < VAR_5 )
    { FUNC_0( VAR_0, "%s\n", VAR_3 ); }

    while (VAR_6 - 1 > VAR_5 )
    {



        while ( FUNC_2((int) *(VAR_3 + VAR_5)) )
        { VAR_5++; }

        if ((VAR_6 - VAR_5) > VAR_7 )
        { VAR_6 = VAR_5 + VAR_7; }


        while ( ( VAR_6 > VAR_5 )
                && ( VAR_6 - VAR_5 > VAR_7 )
                && !FUNC_2((int) *(VAR_3 + VAR_6)))
        { VAR_6--; }




        VAR_6--;


        while ( VAR_5 < VAR_6 )
        {
            FUNC_1(*(VAR_3 + VAR_5), VAR_0 );
            VAR_5++;
        }
        FUNC_1( '\n', VAR_0 );


        if ( VAR_6 + 1 < VAR_4 )
        {
            unsigned VAR_8;

            for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++ )
            { FUNC_1( ' ', VAR_0 ); }

            VAR_6 = VAR_4;
        }


        VAR_6++;

    }
}
