
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
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 () ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_4 (char*,char*) ;
 void* VAR_21 ;
 void* FUNC_5 (char*,int *,int ) ;
 void* VAR_22 ;
 void* VAR_23 ;
 int FUNC_6 (char const*) ;
 void* VAR_24 ;
 int VAR_25 ;

void FUNC_7(int VAR_26, char *VAR_27[]) {
 host_basic_info_data_t VAR_28;
 mach_msg_type_number_t VAR_29;
 kern_return_t VAR_30;


 VAR_8 = VAR_11;
 VAR_13 = 64;
 VAR_14 = 100000;
 VAR_5 = 0;
 VAR_12 = 4;

 VAR_29 = VAR_1;
 VAR_30 = FUNC_2(FUNC_3(), VAR_0,
   (host_info_t)&VAR_28, &VAR_29);
 if (VAR_30 == VAR_2 && VAR_28.avail_cpus > 1)
  VAR_15 = VAR_28.avail_cpus / 2;
 else
  VAR_15 = 1;

 const char *VAR_31 = VAR_27[0];
 VAR_26--; VAR_27++;
 while (0 < VAR_26) {
  if (0 == FUNC_4("-verbose", VAR_27[0])) {
   VAR_25++;
   VAR_26--; VAR_27++;
  } else if (0 == FUNC_4("-affinity", VAR_27[0])) {
   VAR_4 = VAR_3;
   VAR_26--; VAR_27++;
  } else if (0 == FUNC_4("-timeshare", VAR_27[0])) {
   VAR_23 = VAR_3;
   VAR_26--; VAR_27++;
  } else if (0 == FUNC_4("-threaded", VAR_27[0])) {
   VAR_22 = VAR_3;
   VAR_26--; VAR_27++;
  } else if (0 == FUNC_4("-oneway", VAR_27[0])) {
   VAR_16 = VAR_3;
   VAR_26--; VAR_27++;
  } else if (0 == FUNC_4("-perf", VAR_27[0])) {
   VAR_18 = VAR_3;
   VAR_26--; VAR_27++;
  } else if (0 == FUNC_4("-type", VAR_27[0])) {
   if (VAR_26 < 2)
    FUNC_6(VAR_31);
   if (0 == FUNC_4("trivial", VAR_27[1])) {
    VAR_8 = VAR_11;
   } else if (0 == FUNC_4("inline", VAR_27[1])) {
    VAR_8 = VAR_10;
   } else if (0 == FUNC_4("complex", VAR_27[1])) {
    VAR_8 = VAR_9;
   } else
    FUNC_6(VAR_31);
   VAR_26 -= 2; VAR_27 += 2;
  } else if (0 == FUNC_4("-numints", VAR_27[0])) {
   if (VAR_26 < 2)
    FUNC_6(VAR_31);
   VAR_13 = FUNC_5(VAR_27[1], ((void*)0), 0);
   VAR_26 -= 2; VAR_27 += 2;
  } else if (0 == FUNC_4("-count", VAR_27[0])) {
   if (VAR_26 < 2)
    FUNC_6(VAR_31);
   VAR_14 = FUNC_5(VAR_27[1], ((void*)0), 0);
   VAR_26 -= 2; VAR_27 += 2;
  } else if (0 == FUNC_4("-clients", VAR_27[0])) {
   if (VAR_26 < 2)
    FUNC_6(VAR_31);
   VAR_12 = FUNC_5(VAR_27[1], ((void*)0), 0);
   VAR_26 -= 2; VAR_27 += 2;
  } else if (0 == FUNC_4("-servers", VAR_27[0])) {
   if (VAR_26 < 2)
    FUNC_6(VAR_31);
   VAR_15 = FUNC_5(VAR_27[1], ((void*)0), 0);
   VAR_26 -= 2; VAR_27 += 2;
  } else if (0 == FUNC_4("-delay", VAR_27[0])) {
   if (VAR_26 < 2)
    FUNC_6(VAR_31);
   VAR_5 = FUNC_5(VAR_27[1], ((void*)0), 0);
   VAR_26 -= 2; VAR_27 += 2;
  } else if (0 == FUNC_4("-spin", VAR_27[0])) {
   if (VAR_26 < 2)
    FUNC_6(VAR_31);
   VAR_7 = FUNC_5(VAR_27[1], ((void*)0), 0);
   VAR_26 -= 2; VAR_27 += 2;
  } else if (0 == FUNC_4("-pages", VAR_27[0])) {
   if (VAR_26 < 2)
    FUNC_6(VAR_31);
   VAR_6 = FUNC_5(VAR_27[1], ((void*)0), 0);
   VAR_26 -= 2; VAR_27 += 2;
  } else if (0 == FUNC_4("-set", VAR_27[0])) {
   if (VAR_26 < 3)
    FUNC_6(VAR_31);
   VAR_19 = FUNC_5(VAR_27[1], ((void*)0), 0);
   VAR_17 = FUNC_5(VAR_27[2], ((void*)0), 0);
   if (VAR_19 <= 0 || VAR_17 <= 0)
    FUNC_6(VAR_31);
   VAR_24 = VAR_3;
   VAR_26 -= 3; VAR_27 += 3;
  } else if (0 == FUNC_4("-prepost", VAR_27[0])) {
   VAR_21 = VAR_3;
   VAR_22 = VAR_3;
   VAR_26--; VAR_27++;
  } else {
   FUNC_1(VAR_20, "unknown option '%s'\n", VAR_27[0]);
   FUNC_6(VAR_31);
  }
 }

 if (VAR_21) {
  if (!VAR_22) {
   FUNC_1(VAR_20, "Prepost stress test _must_ be threaded\n");
   FUNC_0(1);
  }
  if (VAR_17 < 1 || VAR_19 < 1) {
   FUNC_1(VAR_20, "Prepost stress test requires >= 1 port in >= 1 set.\n");
   FUNC_0(1);
  }
 }
}
