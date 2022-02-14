
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct timespec {int tv_sec; scalar_t__ tv_nsec; } ;
typedef int s64 ;
typedef int dvdcallbacklow ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct timespec*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int* VAR_7 ;

__attribute__((used)) static void FUNC_1(void *VAR_8,u32 VAR_9,s64 VAR_10,dvdcallbacklow VAR_11)
{
 u32 VAR_12;
 struct timespec VAR_13;
 VAR_3 = VAR_11;
 VAR_6 = 0;
 VAR_4 = 1;

 VAR_7[2] = VAR_2;
 VAR_7[3] = (u32)(VAR_10>>2);
 VAR_7[4] = VAR_9;
 VAR_7[5] = (u32)VAR_8;
 VAR_7[6] = VAR_9;

 VAR_5 = VAR_9;

 VAR_7[7] = (VAR_0|VAR_1);
 VAR_12 = VAR_7[7];
 if(VAR_12>0x00a00000) {
  VAR_13.tv_sec = 20;
  VAR_13.tv_nsec = 0;
  FUNC_0(&VAR_13);
 } else {
  VAR_13.tv_sec = 10;
  VAR_13.tv_nsec = 0;
  FUNC_0(&VAR_13);
 }
}
