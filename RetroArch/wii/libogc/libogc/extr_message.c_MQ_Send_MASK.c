
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
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int ,void*,int,int ,scalar_t__,int ) ;

BOOL FUNC_3(mqbox_t VAR_6,mqmsg_t VAR_7,u32 VAR_8)
{
 BOOL VAR_9;
 mqbox_st *VAR_10;
 u32 VAR_11 = (VAR_8==VAR_4)?VAR_5:VAR_0;

 VAR_10 = FUNC_0(VAR_6);
 if(!VAR_10) return VAR_0;

 VAR_9 = VAR_0;
 if(FUNC_2(&VAR_10->mqueue,VAR_10->object.id,(void*)&VAR_7,sizeof(mqmsg_t),VAR_1,VAR_11,VAR_3)==VAR_2) VAR_9 = VAR_5;
 FUNC_1();

 return VAR_9;
}
