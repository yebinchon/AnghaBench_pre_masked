
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int tqueue_st ;
struct TYPE_8__ {int object; } ;
typedef TYPE_1__ lwp_cntrl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_1__*,int *,scalar_t__,int,int ,int ) ;
 int FUNC_4 (TYPE_1__*,void*,int *) ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 TYPE_1__* VAR_9 ;
 TYPE_1__* VAR_10 ;
 TYPE_1__* VAR_11 ;
 void* VAR_12 ;

void FUNC_5()
{
 FUNC_1(&VAR_6,VAR_0,sizeof(lwp_cntrl));
 FUNC_1(&VAR_7,VAR_1,sizeof(tqueue_st));


 VAR_10 = (lwp_cntrl*)FUNC_0(&VAR_6);
 FUNC_3(VAR_10,((void*)0),0,255,0,VAR_2);
 VAR_8 = VAR_9 = VAR_10;
 FUNC_4(VAR_10,VAR_12,((void*)0));
 FUNC_2(&VAR_6,&VAR_10->object);



 VAR_11 = (lwp_cntrl*)FUNC_0(&VAR_6);
 FUNC_3(VAR_11,VAR_5,((u32)VAR_4-(u32)VAR_5),191,0,VAR_2);
 FUNC_4(VAR_11,(void*)VAR_3,((void*)0));
 FUNC_2(&VAR_6,&VAR_11->object);
}
