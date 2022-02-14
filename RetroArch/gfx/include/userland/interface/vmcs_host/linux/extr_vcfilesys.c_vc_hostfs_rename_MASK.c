
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 char* FUNC_4 (char const*) ;

int FUNC_5(const char *VAR_0, const char *VAR_1)
{
    char *VAR_2 = FUNC_4(VAR_0);
    char *VAR_3 = FUNC_4(VAR_1);
    int VAR_4 = -1;

    FUNC_0( "vc_hostfs_rename: '%s' to '%s'", VAR_0, VAR_1 );

    if (VAR_2 && VAR_3)
    {
       FUNC_1(VAR_2);
       FUNC_1(VAR_3);

       if ( FUNC_3( VAR_2, VAR_3 ) == 0 )
          VAR_4 = 0;
    }

    if (VAR_2)
       FUNC_2(VAR_2);

    if (VAR_3)
       FUNC_2(VAR_3);

    return VAR_4;
}
