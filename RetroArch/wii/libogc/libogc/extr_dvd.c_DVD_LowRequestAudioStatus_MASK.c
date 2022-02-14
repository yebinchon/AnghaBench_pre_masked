
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct timespec {int tv_sec; scalar_t__ tv_nsec; } ;
typedef int s32 ;
typedef int dvdcallbacklow ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct timespec*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int* VAR_4 ;

s32 FUNC_1(u32 VAR_5,dvdcallbacklow VAR_6)
{
 struct timespec VAR_7;

 VAR_2 = VAR_6;
 VAR_3 = 0;

 VAR_4[2] = VAR_0|VAR_5;
 VAR_4[7] = VAR_1;

 VAR_7.tv_sec = 10;
 VAR_7.tv_nsec = 0;
 FUNC_0(&VAR_7);

 return 1;
}
