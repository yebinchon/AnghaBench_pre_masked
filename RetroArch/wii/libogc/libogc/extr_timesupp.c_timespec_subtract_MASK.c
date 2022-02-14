
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;


 int VAR_0 ;

void FUNC_0(const struct timespec *VAR_1,const struct timespec *VAR_2,struct timespec *VAR_3)
{
 struct timespec VAR_4 = *VAR_1;
 struct timespec *VAR_5 = &VAR_4;
 u32 VAR_6 = VAR_0;

 if(VAR_2->tv_nsec<VAR_5->tv_nsec) {
  int VAR_7 = (VAR_5->tv_nsec - VAR_2->tv_nsec)/VAR_6+1;
  VAR_5->tv_nsec -= VAR_6 * VAR_7;
  VAR_5->tv_sec += VAR_7;
 }
 if((VAR_2->tv_nsec - VAR_5->tv_nsec)>VAR_6) {
  int VAR_8 = (VAR_5->tv_nsec - VAR_2->tv_nsec)/VAR_6;
  VAR_5->tv_nsec += VAR_6 * VAR_8;
  VAR_5->tv_sec -= VAR_8;
 }

 VAR_3->tv_sec = (VAR_2->tv_sec - VAR_5->tv_sec);
 VAR_3->tv_nsec = (VAR_2->tv_nsec - VAR_5->tv_nsec);
}
