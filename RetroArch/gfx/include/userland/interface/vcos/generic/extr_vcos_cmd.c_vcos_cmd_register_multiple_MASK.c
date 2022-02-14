
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VCOS_STATUS_T ;
struct TYPE_4__ {int * name; } ;
typedef TYPE_1__ VCOS_CMD_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

VCOS_STATUS_T FUNC_1( VCOS_CMD_T *VAR_1 )
{
    VCOS_STATUS_T VAR_2;

    while ( VAR_1->name != ((void*)0) )
    {
        if (( VAR_2 = FUNC_0( VAR_1 )) != VAR_0 )
        {
            return VAR_2;
        }
        VAR_1++;
    }
    return VAR_0;
}
