
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TaskHandle_t ;
struct TYPE_3__ {int xCoreID; } ;
typedef TYPE_1__ TCB_t ;
typedef int BaseType_t ;


 TYPE_1__* FUNC_0 (int ) ;

BaseType_t FUNC_1( TaskHandle_t VAR_0 )
{
 TCB_t *VAR_1;

 VAR_1 = FUNC_0( VAR_0 );

 return VAR_1->xCoreID;
}
