
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int mqmsg_t ;
typedef int mqbox_t ;
struct TYPE_4__ {int id; } ;
struct TYPE_5__ {TYPE_1__ object; int mqueue; } ;
typedef TYPE_2__ mqbox_st ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int ,void*,scalar_t__*,scalar_t__,int ) ;

BOOL FUNC_3(mqbox_t VAR_5,mqmsg_t *VAR_6,u32 VAR_7)
{
 BOOL VAR_8;
 mqbox_st *VAR_9;
 u32 VAR_10,VAR_11 = (VAR_7==VAR_3)?VAR_4:VAR_0;

 VAR_9 = FUNC_0(VAR_5);
 if(!VAR_9) return VAR_0;

 VAR_8 = VAR_0;
 if(FUNC_2(&VAR_9->mqueue,VAR_9->object.id,(void*)VAR_6,&VAR_10,VAR_11,VAR_2)==VAR_1) VAR_8 = VAR_4;
 FUNC_1();

 return VAR_8;
}
