
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct timespec {int tv_sec; scalar_t__ tv_nsec; } ;
struct pvclock_wall_clock {int version; int sec; scalar_t__ nsec; } ;
struct pvclock_vcpu_time_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (struct pvclock_vcpu_time_info*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct timespec*,int,scalar_t__) ;

void FUNC_4(struct pvclock_wall_clock *VAR_1,
       struct pvclock_vcpu_time_info *VAR_2,
       struct timespec *VAR_3)
{
 u32 VAR_4;
 u64 VAR_5;
 struct timespec VAR_6;


 do {
  VAR_4 = VAR_1->version;
  FUNC_2();
  VAR_6.tv_sec = VAR_1->sec;
  VAR_6.tv_nsec = VAR_1->nsec;
  FUNC_2();
 } while ((VAR_1->version & 1) || (VAR_4 != VAR_1->version));

 VAR_5 = FUNC_1(VAR_2);
 VAR_5 += VAR_6.tv_sec * (u64)VAR_0 + VAR_6.tv_nsec;

 VAR_6.tv_nsec = FUNC_0(VAR_5, VAR_0);
 VAR_6.tv_sec = VAR_5;

 FUNC_3(VAR_3, VAR_6.tv_sec, VAR_6.tv_nsec);
}
