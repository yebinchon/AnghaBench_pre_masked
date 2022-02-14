
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct timespec {int tv_sec; scalar_t__ tv_nsec; } ;
typedef int s32 ;
typedef int dvddiskid ;
typedef int dvdcallbacklow ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct timespec*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int* VAR_6 ;

s32 FUNC_1(dvddiskid *VAR_7,dvdcallbacklow VAR_8)
{
 struct timespec VAR_9;

 VAR_4 = VAR_8;
 VAR_5 = 0;

 VAR_6[2] = VAR_3;
 VAR_6[3] = 0;
 VAR_6[4] = VAR_0;
 VAR_6[5] = (u32)VAR_7;
 VAR_6[6] = VAR_0;
 VAR_6[7] = (VAR_1|VAR_2);

 VAR_9.tv_sec = 10;
 VAR_9.tv_nsec = 0;
 FUNC_0(&VAR_9);

 return 1;
}
