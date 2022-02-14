
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int fattributes_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (char const*,struct stat*) ;

int FUNC_3(const char *VAR_3, fattributes_t *VAR_4)
{
    struct stat VAR_5;

    FUNC_0("vc_hostfs_get_attr: '%s'", VAR_3 );

    *VAR_4 = 0;

    if ( FUNC_2( VAR_3, &VAR_5 ) == 0 )
    {
        if ( FUNC_1( VAR_5.st_mode ))
        {
            *VAR_4 |= VAR_0;
        }

        if (( VAR_5.st_mode & VAR_2 ) == 0 )
        {
            *VAR_4 |= VAR_1;
        }

        return 0;
    }
    return -1;
}
