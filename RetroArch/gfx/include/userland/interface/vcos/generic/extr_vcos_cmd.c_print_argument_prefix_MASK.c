
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * argv_orig; int * argv; } ;
typedef TYPE_1__ VCOS_CMD_PARAM_T ;


 int FUNC_0 (TYPE_1__*,char*,int ) ;

__attribute__((used)) static void FUNC_1( VCOS_CMD_PARAM_T *VAR_0 )
{
    int VAR_1;

    for ( VAR_1 = 0; &VAR_0->argv_orig[VAR_1] != VAR_0->argv; VAR_1++ )
    {
        FUNC_0( VAR_0, "%s ", VAR_0->argv_orig[VAR_1] );
    }
}
