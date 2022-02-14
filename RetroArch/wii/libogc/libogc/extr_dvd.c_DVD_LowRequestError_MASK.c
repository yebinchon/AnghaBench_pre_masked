
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; scalar_t__ tv_nsec; } ;
typedef int s32 ;
typedef int dvdcallbacklow ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct timespec*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;

s32 FUNC_1(dvdcallbacklow VAR_5)
{
 struct timespec VAR_6;

 VAR_2 = VAR_5;
 VAR_3 = 0;

 VAR_4[2] = VAR_1;
 VAR_4[7] = VAR_0;

 VAR_6.tv_sec = 10;
 VAR_6.tv_nsec = 0;
 FUNC_0(&VAR_6);

 return 1;
}
