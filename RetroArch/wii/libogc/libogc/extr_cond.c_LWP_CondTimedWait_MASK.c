
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct timespec {int dummy; } ;
typedef int s32 ;
typedef int mutex_t ;
typedef int cond_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (struct timespec const*) ;

s32 FUNC_2(cond_t VAR_2,mutex_t VAR_3,const struct timespec *VAR_4)
{
 u64 VAR_5 = VAR_1;
 bool VAR_6 = VAR_0;

 if(VAR_4) VAR_5 = FUNC_1(VAR_4);
 return FUNC_0(VAR_2,VAR_3,VAR_5,VAR_6);
}
