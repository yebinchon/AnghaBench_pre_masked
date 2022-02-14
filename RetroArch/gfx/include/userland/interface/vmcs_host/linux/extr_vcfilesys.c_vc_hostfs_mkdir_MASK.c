
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,int) ;

int FUNC_2(const char *VAR_0)
{
    FUNC_0( "vc_hostfs_mkdir: '%s'", VAR_0 );
    if ( FUNC_1( VAR_0, 0777 ) == 0 )
    {
        return 0;
    }
    return -1;
}
