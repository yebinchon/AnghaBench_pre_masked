
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int VC_MEM_ADDR_T ;
typedef int VC_MEM_ACCESS_HANDLE_T ;


 int FUNC_0 (char*,char const*,size_t,int) ;
 int FUNC_1 (int ,char const*,int *,size_t*) ;

int FUNC_2( VC_MEM_ACCESS_HANDLE_T VAR_0,
                                 const char *VAR_1,
                                 VC_MEM_ADDR_T *VAR_2 )
{
    size_t VAR_3;

    if ( !FUNC_1( VAR_0, VAR_1, VAR_2, &VAR_3 ))
    {
        return 0;
    }

    if ( VAR_3 != sizeof( uint32_t ))
    {
        FUNC_0( "Symbol: '%s' has a size of %zu, expecting %zu", VAR_1, VAR_3, sizeof( uint32_t ));
        return 0;
    }
    return 1;
}
