
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char*) ;

int FUNC_5(const char *VAR_0)
{
    char *VAR_1 = FUNC_3(VAR_0);
    int VAR_2 = -1;

    FUNC_0( "vc_hostfs_remove: '%s'", VAR_0 );

    if (VAR_1)
    {
       FUNC_1(VAR_1);

       if ( FUNC_4( VAR_1 ) == 0 )
          VAR_2 = 0;
    }

    FUNC_2(VAR_1);

    return VAR_2;
}
