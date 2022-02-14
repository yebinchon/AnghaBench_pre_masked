
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;

char* FUNC_1( const char* VAR_0, const char* VAR_1 ) {
    register int VAR_2, VAR_3 = FUNC_0( VAR_1 );

    for ( ; *VAR_0 != 0; VAR_0++ )
        for ( VAR_2 = 0; VAR_2 < VAR_3; VAR_2++ )
            if (*VAR_0 == VAR_1[VAR_2])
                return (char*)VAR_0;

    return 0;
}
