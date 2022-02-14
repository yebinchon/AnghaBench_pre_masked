
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_9__ {scalar_t__ next; } ;
struct TYPE_8__ {scalar_t__ first; } ;
struct TYPE_7__ {scalar_t__ owner; TYPE_3__ node; } ;
typedef TYPE_1__ ARQRequest ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int * VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;

u32 FUNC_4(u32 VAR_4)
{
 u32 VAR_5,VAR_6;
 ARQRequest *VAR_7;

 FUNC_0(VAR_5);

 VAR_6 = 0;
 VAR_7 = (ARQRequest*)VAR_2.first;
 while(VAR_7!=(ARQRequest*)FUNC_3(&VAR_2)) {
  if(VAR_7->owner==VAR_4) {
   FUNC_2(&VAR_7->node);
   VAR_6++;
  }
  VAR_7 = (ARQRequest*)VAR_7->node.next;
 }

 VAR_7 = (ARQRequest*)VAR_3.first;
 while(VAR_7!=(ARQRequest*)FUNC_3(&VAR_3)) {
  if(VAR_7->owner==VAR_4) {
   FUNC_2(&VAR_7->node);
   VAR_6++;
  }
  VAR_7 = (ARQRequest*)VAR_7->node.next;
 }
 if(VAR_1 && VAR_1==VAR_7 && VAR_0==((void*)0)) VAR_1 = ((void*)0);
 FUNC_1(VAR_5);

 return VAR_6;
}
