
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_11__ {scalar_t__ first; } ;
typedef TYPE_3__ lwp_queue ;
struct TYPE_9__ {scalar_t__ next; } ;
struct TYPE_10__ {TYPE_1__ node; } ;
struct TYPE_12__ {TYPE_2__ object; } ;
typedef TYPE_4__ lwp_cntrl ;


 size_t VAR_0 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_4__*) ;
 TYPE_3__* VAR_1 ;
 TYPE_4__* VAR_2 ;
 int FUNC_4 (char*) ;

void FUNC_5()
{
 u32 VAR_3,VAR_4;
 lwp_queue *VAR_5;
 lwp_cntrl *VAR_6,*VAR_7;



 FUNC_0(VAR_4);
 for(VAR_3=0;VAR_3<VAR_0;VAR_3++) {
  VAR_5 = &VAR_1[VAR_3];
  VAR_6 = (lwp_cntrl*)VAR_5->first;
  while(VAR_6!=(lwp_cntrl*)FUNC_2(&VAR_1[VAR_3])) {
   VAR_7 = (lwp_cntrl*)VAR_6->object.node.next;
   if(VAR_6!=VAR_2)
    FUNC_3(VAR_6);

   VAR_6 = VAR_7;
  }
 }
 FUNC_1(VAR_4);



}
