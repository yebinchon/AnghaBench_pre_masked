
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mach_msg_type_number_t ;
typedef scalar_t__ kern_return_t ;
typedef int host_info_t ;
struct TYPE_2__ {int avail_cpus; } ;
typedef TYPE_1__ host_basic_info_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 () ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 void* FUNC_3 (char*,int *,int ) ;
 void* VAR_19 ;
 void* VAR_20 ;
 int FUNC_4 (char const*) ;
 void* VAR_21 ;

void FUNC_5(int VAR_22, char *VAR_23[]) {
 host_basic_info_data_t VAR_24;
 mach_msg_type_number_t VAR_25;
 kern_return_t VAR_26;


 VAR_9 = VAR_12;
 VAR_14 = 64;
 VAR_15 = 100000;
 VAR_5 = 0;
 VAR_13 = 4;

 VAR_25 = VAR_1;
 VAR_26 = FUNC_0(FUNC_1(), VAR_0,
   (host_info_t)&VAR_24, &VAR_25);
 if (VAR_26 == VAR_2 && VAR_24.avail_cpus > 1)
  VAR_16 = VAR_24.avail_cpus / 2;
 else
  VAR_16 = 1;

 const char *VAR_27 = VAR_23[0];
 VAR_22--; VAR_23++;
 while (0 < VAR_22) {
  if (0 == FUNC_2("-verbose", VAR_23[0])) {
   VAR_21 = VAR_3;
   VAR_22--; VAR_23++;
  } else if (0 == FUNC_2("-affinity", VAR_23[0])) {
   VAR_4 = VAR_3;
   VAR_22--; VAR_23++;
  } else if (0 == FUNC_2("-timeshare", VAR_23[0])) {
   VAR_20 = VAR_3;
   VAR_22--; VAR_23++;
  } else if (0 == FUNC_2("-threaded", VAR_23[0])) {
   VAR_19 = VAR_3;
   VAR_22--; VAR_23++;
  } else if (0 == FUNC_2("-oneway", VAR_23[0])) {
   VAR_17 = VAR_3;
   VAR_22--; VAR_23++;
  } else if (0 == FUNC_2("-type", VAR_23[0])) {
   if (VAR_22 < 2)
    FUNC_4(VAR_27);
   if (0 == FUNC_2("trivial", VAR_23[1])) {
    VAR_9 = VAR_12;
   } else if (0 == FUNC_2("inline", VAR_23[1])) {
    VAR_9 = VAR_11;
   } else if (0 == FUNC_2("complex", VAR_23[1])) {
    VAR_9 = VAR_10;
   } else
    FUNC_4(VAR_27);
   VAR_22 -= 2; VAR_23 += 2;
  } else if (0 == FUNC_2("-numints", VAR_23[0])) {
   if (VAR_22 < 2)
    FUNC_4(VAR_27);
   VAR_14 = FUNC_3(VAR_23[1], ((void*)0), 0);
   VAR_22 -= 2; VAR_23 += 2;
  } else if (0 == FUNC_2("-count", VAR_23[0])) {
   if (VAR_22 < 2)
    FUNC_4(VAR_27);
   VAR_15 = FUNC_3(VAR_23[1], ((void*)0), 0);
   VAR_22 -= 2; VAR_23 += 2;
  } else if (0 == FUNC_2("-clients", VAR_23[0])) {
   if (VAR_22 < 2)
    FUNC_4(VAR_27);
   VAR_13 = FUNC_3(VAR_23[1], ((void*)0), 0);
   VAR_22 -= 2; VAR_23 += 2;
  } else if (0 == FUNC_2("-servers", VAR_23[0])) {
   if (VAR_22 < 2)
    FUNC_4(VAR_27);
   VAR_16 = FUNC_3(VAR_23[1], ((void*)0), 0);
   VAR_22 -= 2; VAR_23 += 2;
  } else if (0 == FUNC_2("-delay", VAR_23[0])) {
   if (VAR_22 < 2)
    FUNC_4(VAR_27);
   VAR_5 = FUNC_3(VAR_23[1], ((void*)0), 0);
   VAR_22 -= 2; VAR_23 += 2;
  } else if (0 == FUNC_2("-spin", VAR_23[0])) {
   if (VAR_22 < 2)
    FUNC_4(VAR_27);
   VAR_7 = FUNC_3(VAR_23[1], ((void*)0), 0);
   VAR_22 -= 2; VAR_23 += 2;
  } else if (0 == FUNC_2("-pages", VAR_23[0])) {
   if (VAR_22 < 2)
    FUNC_4(VAR_27);
   VAR_6 = FUNC_3(VAR_23[1], ((void*)0), 0);
   VAR_22 -= 2; VAR_23 += 2;
  } else if (0 == FUNC_2("-select", VAR_23[0])) {
   VAR_8 = VAR_3;
   VAR_22--; VAR_23++;
  } else if (0 == FUNC_2("-perf", VAR_23[0])) {
   VAR_18 = VAR_3;
   VAR_22--; VAR_23++;
  } else
   FUNC_4(VAR_27);
 }
}
