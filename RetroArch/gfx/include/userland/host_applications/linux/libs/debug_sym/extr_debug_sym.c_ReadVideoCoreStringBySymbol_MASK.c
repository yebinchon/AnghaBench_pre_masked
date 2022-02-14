
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VC_MEM_ADDR_T ;
typedef int VC_MEM_ACCESS_HANDLE_T ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,char const*,int *,size_t*) ;
 int FUNC_2 (int ,char*,int ,size_t) ;

int FUNC_3( VC_MEM_ACCESS_HANDLE_T VAR_0,
                                 const char *VAR_1,
                                 char *VAR_2,
                                 size_t VAR_3 )
{
    VC_MEM_ADDR_T VAR_4;
    size_t VAR_5;

    if ( !FUNC_1( VAR_0, VAR_1, &VAR_4, &VAR_5 ))
    {
        FUNC_0( "Symbol not found: '%s'", VAR_1 );
        return 0;
    }

    if ( VAR_5 > VAR_3 )
    {
        VAR_5 = VAR_3;
    }

    if ( !FUNC_2( VAR_0, VAR_2, VAR_4, VAR_5 ))
    {
        FUNC_0( "Unable to read %zu bytes @ 0x%08x", VAR_5, VAR_4 );
        return 0;
    }



    VAR_2[VAR_5-1] = '\0';
    return 1;
}
