
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct timespec {int tv_sec; scalar_t__ tv_nsec; } ;
typedef int s32 ;
typedef int dvddrvinfo ;
typedef int dvdcallbacklow ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct timespec*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int* VAR_5 ;

s32 FUNC_1(dvddrvinfo *VAR_6,dvdcallbacklow VAR_7)
{
 struct timespec VAR_8;

 VAR_3 = VAR_7;
 VAR_4 = 0;

 VAR_5[2] = VAR_2;
 VAR_5[4] = 0x20;
 VAR_5[5] = (u32)VAR_6;
 VAR_5[6] = 0x20;
 VAR_5[7] = (VAR_0|VAR_1);

 VAR_8.tv_sec = 10;
 VAR_8.tv_nsec = 0;
 FUNC_0(&VAR_8);

 return 1;
}
