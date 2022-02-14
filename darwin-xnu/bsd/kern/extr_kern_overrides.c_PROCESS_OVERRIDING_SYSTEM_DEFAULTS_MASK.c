
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long uint64_t ;
struct timespec {long tv_sec; long tv_nsec; } ;
typedef int caddr_t ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int,char*,struct timespec*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static __attribute__((noinline)) void
FUNC_1(uint64_t VAR_5)
{
 struct timespec VAR_6;
 VAR_6.tv_sec = VAR_5 / VAR_0;
 VAR_6.tv_nsec = VAR_5 - ((long)VAR_6.tv_sec * VAR_0);
 FUNC_0((caddr_t)&VAR_4, &VAR_3, VAR_2 | VAR_1, "system_override", &VAR_6);
}
