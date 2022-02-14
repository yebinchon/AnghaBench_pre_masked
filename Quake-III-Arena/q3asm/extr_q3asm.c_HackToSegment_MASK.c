
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t segmentName_t ;
struct TYPE_5__ {int value; TYPE_1__* segment; } ;
struct TYPE_4__ {int imageUsed; } ;


 TYPE_1__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;

void FUNC_0( segmentName_t VAR_4 ) {
 if ( VAR_0 == &VAR_3[VAR_4] ) {
  return;
 }

 VAR_0 = &VAR_3[VAR_4];
 if ( VAR_2 == 0 ) {
  VAR_1->segment = VAR_0;
  VAR_1->value = VAR_0->imageUsed;
 }
}
