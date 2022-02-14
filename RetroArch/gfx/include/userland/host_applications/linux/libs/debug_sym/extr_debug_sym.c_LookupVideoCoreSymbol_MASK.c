
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int symName ;
typedef int VC_MEM_ADDR_T ;
typedef TYPE_1__* VC_MEM_ACCESS_HANDLE_T ;
struct TYPE_4__ {unsigned int numSymbols; } ;


 int FUNC_0 (char*,char const*,...) ;
 int FUNC_1 (TYPE_1__*,unsigned int,char*,int,int *,size_t*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

int FUNC_3( VC_MEM_ACCESS_HANDLE_T VAR_0, const char *VAR_1, VC_MEM_ADDR_T *VAR_2, size_t *VAR_3 )
{
    unsigned VAR_4;
    char VAR_5[ 64 ];
    VC_MEM_ADDR_T VAR_6 = 0;
    size_t VAR_7 = 0;

    for ( VAR_4 = 0; VAR_4 < VAR_0->numSymbols; VAR_4++ )
    {
        FUNC_1( VAR_0, VAR_4, VAR_5, sizeof( VAR_5 ), &VAR_6, &VAR_7 );
        if ( FUNC_2( VAR_1, VAR_5 ) == 0 )
        {
            if ( VAR_2 != ((void*)0) )
            {
                *VAR_2 = VAR_6;
            }
            if ( VAR_3 != 0 )
            {
                *VAR_3 = VAR_7;
            }

            FUNC_0( "%s found, addr = 0x%08x size = %zu", VAR_1, VAR_6, VAR_7 );
            return 1;
        }
    }

    if ( VAR_2 != ((void*)0) )
    {
        *VAR_2 = 0;
    }
    if ( VAR_3 != 0 )
    {
        *VAR_3 = 0;
    }
    FUNC_0( "%s not found", VAR_1 );
    return 0;
}
