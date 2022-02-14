
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * name; } ;
typedef TYPE_1__ VCOS_CMD_T ;


 scalar_t__ FUNC_0 (int *,char const*) ;

__attribute__((used)) static VCOS_CMD_T *FUNC_1( VCOS_CMD_T *VAR_0, const char *VAR_1 )
{
    VCOS_CMD_T *VAR_2 = VAR_0;

    while ( VAR_2->name != ((void*)0) )
    {
        if ( FUNC_0( VAR_2->name, VAR_1 ) == 0 )
        {
            return VAR_2;
        }
        VAR_2++;
    }

    return ((void*)0);
}
