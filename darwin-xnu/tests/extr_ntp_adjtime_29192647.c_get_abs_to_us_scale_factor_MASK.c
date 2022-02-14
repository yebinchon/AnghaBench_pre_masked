
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_3__ {int numer; int denom; int member_1; int member_0; } ;
typedef TYPE_1__ mach_timebase_info_data_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int,unsigned long long,char*,int,int,int,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int*,int *,struct timespec*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(uint64_t* VAR_4, uint64_t* VAR_5){
 struct timespec VAR_6;
 uint64_t VAR_7, VAR_8;
 uint64_t VAR_9, VAR_10;
 uint64_t VAR_11, VAR_12;
 mach_timebase_info_data_t VAR_13 = { 0, 0 };

 VAR_2; FUNC_0(FUNC_2(&VAR_7, ((void*)0), &VAR_6), VAR_1, ((void*)0));

 VAR_9 = (uint64_t)VAR_6.tv_sec * VAR_3 + (uint64_t)VAR_6.tv_nsec/1000;

 FUNC_4(1);

 VAR_2; FUNC_0(FUNC_2(&VAR_8, ((void*)0), &VAR_6), VAR_1, ((void*)0));

 VAR_10 = (uint64_t)VAR_6.tv_sec * VAR_3 + (uint64_t)VAR_6.tv_nsec/1000;


 FUNC_0(FUNC_3(&VAR_13), VAR_1, ((void*)0));

 VAR_10 -= VAR_9;
 VAR_8 -= VAR_7;

 VAR_11 = VAR_8;
 VAR_11 *= VAR_13.numer;
 VAR_11 /= VAR_13.denom * 1000;

 if (VAR_11 > VAR_10)
  VAR_12 = VAR_11 - VAR_10;
 else
  VAR_12 = VAR_10 - VAR_11;

 FUNC_1(VAR_12, (unsigned long long)VAR_0, "Check scale factor time base (%u/%u) delta read usec %llu delta converted %llu delta abs %llu", VAR_13.numer, VAR_13.denom, VAR_11, VAR_10, VAR_8);

 *VAR_4 = (uint64_t)VAR_13.numer;
 *VAR_5 = (uint64_t)VAR_13.denom * 1000;
}
