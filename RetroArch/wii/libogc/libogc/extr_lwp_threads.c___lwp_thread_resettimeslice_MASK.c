
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {scalar_t__ first; } ;
typedef TYPE_2__ lwp_queue ;
struct TYPE_9__ {int node; } ;
struct TYPE_11__ {TYPE_1__ object; TYPE_2__* ready; } ;
typedef TYPE_3__ lwp_cntrl ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 TYPE_3__* VAR_3 ;

void FUNC_7()
{
 u32 VAR_4;
 lwp_cntrl *VAR_5;
 lwp_queue *VAR_6;

 VAR_5 = VAR_2;
 VAR_6 = VAR_5->ready;

 FUNC_0(VAR_4);
 if(FUNC_5(VAR_6)) {
  FUNC_2(VAR_4);
  return;
 }

 FUNC_4(&VAR_5->object.node);
 FUNC_3(VAR_6,&VAR_5->object.node);

 FUNC_1(VAR_4);

 if(FUNC_6(VAR_5))
  VAR_3 = (lwp_cntrl*)VAR_6->first;

 VAR_1 = VAR_0;
 FUNC_2(VAR_4);
}
