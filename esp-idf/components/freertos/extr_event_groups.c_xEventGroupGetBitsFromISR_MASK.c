
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UBaseType_t ;
struct TYPE_2__ {int uxEventBits; } ;
typedef TYPE_1__ EventGroup_t ;
typedef scalar_t__ EventGroupHandle_t ;
typedef int EventBits_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;

EventBits_t FUNC_2( EventGroupHandle_t VAR_0 )
{
UBaseType_t VAR_1;
EventGroup_t *VAR_2 = ( EventGroup_t * ) VAR_0;
EventBits_t VAR_3;

 VAR_1 = FUNC_1();
 {
  VAR_3 = VAR_2->uxEventBits;
 }
 FUNC_0( VAR_1 );

 return VAR_3;
}
