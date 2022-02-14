
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tx ;
typedef int timer_t ;
typedef int timeout ;
struct TYPE_10__ {int nsec; scalar_t__ sec; } ;
struct TYPE_9__ {int sec; scalar_t__ nsec; } ;
struct TYPE_8__ {int tv_sec; } ;
struct TYPE_7__ {int tv_sec; } ;
struct TYPE_11__ {int tv_sec; scalar_t__ tv_usec; } ;
struct timex {TYPE_4__ period; TYPE_3__ start; scalar_t__ index; TYPE_2__ it_value; TYPE_1__ it_interval; scalar_t__ flags; TYPE_5__ time; int modes; int freq; } ;
struct timespec {int tv_sec; int tv_nsec; } ;
struct sigevent {void* sigev_signo; void* sigev_notify; } ;
struct ptp_perout_request {TYPE_4__ period; TYPE_3__ start; scalar_t__ index; TYPE_2__ it_value; TYPE_1__ it_interval; scalar_t__ flags; TYPE_5__ time; int modes; int freq; } ;
struct ptp_extts_request {TYPE_4__ period; TYPE_3__ start; scalar_t__ index; TYPE_2__ it_value; TYPE_1__ it_interval; scalar_t__ flags; TYPE_5__ time; int modes; int freq; } ;
struct TYPE_12__ {int nsec; int sec; } ;
struct ptp_extts_event {int index; TYPE_6__ t; } ;
struct ptp_clock_caps {int max_adj; int n_alarm; int n_ext_ts; int n_per_out; int pps; } ;
struct itimerspec {TYPE_4__ period; TYPE_3__ start; scalar_t__ index; TYPE_2__ it_value; TYPE_1__ it_interval; scalar_t__ flags; TYPE_5__ time; int modes; int freq; } ;
typedef int perout_request ;
typedef int extts_request ;
typedef int event ;
typedef scalar_t__ clockid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (scalar_t__,struct timex*) ;
 scalar_t__ FUNC_2 (scalar_t__,struct timespec*) ;
 scalar_t__ FUNC_3 (scalar_t__,struct timespec*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int*) ;
 int VAR_14 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int,char**,char*) ;
 int VAR_15 ;
 int FUNC_10 (void*,int ) ;
 scalar_t__ FUNC_11 (int,int ,...) ;
 int FUNC_12 (struct timex*,int ,int) ;
 int FUNC_13 (char*,int ) ;
 char* VAR_16 ;
 int FUNC_14 () ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int) ;
 int FUNC_17 (char*,int,int,int,...) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (int,struct ptp_extts_event*,int) ;
 int VAR_17 ;
 int VAR_18 ;
 char* FUNC_20 (int ) ;
 char* FUNC_21 (char*,char) ;
 scalar_t__ FUNC_22 (scalar_t__,struct sigevent*,int *) ;
 int FUNC_23 (int ) ;
 scalar_t__ FUNC_24 (int ,int ,struct timex*,int *) ;
 int FUNC_25 (char*) ;

int FUNC_26(int VAR_19, char *VAR_20[])
{
 struct ptp_clock_caps VAR_21;
 struct ptp_extts_event VAR_22;
 struct ptp_extts_request VAR_23;
 struct ptp_perout_request VAR_24;
 struct timespec VAR_25;
 struct timex VAR_26;

 static timer_t VAR_27;
 struct itimerspec VAR_28;
 struct sigevent VAR_29;

 char *VAR_30;
 int VAR_31, VAR_32, VAR_33;

 char *VAR_34 = VAR_4;
 clockid_t VAR_35;
 int VAR_36 = 0x7fffffff;
 int VAR_37 = 0;
 int VAR_38 = 0;
 int VAR_39 = 0;
 int VAR_40 = 0;
 int VAR_41 = 0;
 int VAR_42 = 0;
 int VAR_43 = -1;
 int VAR_44 = -1;
 int VAR_45 = 0;

 VAR_30 = FUNC_21(VAR_20[0], '/');
 VAR_30 = VAR_30 ? 1+VAR_30 : VAR_20[0];
 while (VAR_5 != (VAR_31 = FUNC_9(VAR_19, VAR_20, "a:A:cd:e:f:ghp:P:sSt:v"))) {
  switch (VAR_31) {
  case 'a':
   VAR_41 = FUNC_0(VAR_16);
   break;
  case 'A':
   VAR_42 = FUNC_0(VAR_16);
   break;
  case 'c':
   VAR_38 = 1;
   break;
  case 'd':
   VAR_34 = VAR_16;
   break;
  case 'e':
   VAR_39 = FUNC_0(VAR_16);
   break;
  case 'f':
   VAR_36 = FUNC_0(VAR_16);
   break;
  case 'g':
   VAR_40 = 1;
   break;
  case 'p':
   VAR_43 = FUNC_0(VAR_16);
   break;
  case 'P':
   VAR_44 = FUNC_0(VAR_16);
   break;
  case 's':
   VAR_45 = 1;
   break;
  case 'S':
   VAR_45 = 2;
   break;
  case 't':
   VAR_37 = FUNC_0(VAR_16);
   break;
  case 'h':
   FUNC_25(VAR_30);
   return 0;
  case '?':
  default:
   FUNC_25(VAR_30);
   return -1;
  }
 }

 VAR_33 = FUNC_13(VAR_34, VAR_6);
 if (VAR_33 < 0) {
  FUNC_7(VAR_17, "opening %s: %s\n", VAR_34, FUNC_20(VAR_14));
  return -1;
 }

 VAR_35 = FUNC_8(VAR_33);
 if (VAR_2 == VAR_35) {
  FUNC_7(VAR_17, "failed to read clock id\n");
  return -1;
 }

 if (VAR_38) {
  if (FUNC_11(VAR_33, VAR_7, &VAR_21)) {
   FUNC_15("PTP_CLOCK_GETCAPS");
  } else {
   FUNC_17("capabilities:\n"
          "  %d maximum frequency adjustment (ppb)\n"
          "  %d programmable alarms\n"
          "  %d external time stamp channels\n"
          "  %d programmable periodic signals\n"
          "  %d pulse per second\n",
          VAR_21.max_adj,
          VAR_21.n_alarm,
          VAR_21.n_ext_ts,
          VAR_21.n_per_out,
          VAR_21.pps);
  }
 }

 if (0x7fffffff != VAR_36) {
  FUNC_12(&VAR_26, 0, sizeof(VAR_26));
  VAR_26.modes = VAR_0;
  VAR_26.freq = FUNC_16(VAR_36);
  if (FUNC_1(VAR_35, &VAR_26)) {
   FUNC_15("clock_adjtime");
  } else {
   FUNC_18("frequency adjustment okay");
  }
 }

 if (VAR_37) {
  FUNC_12(&VAR_26, 0, sizeof(VAR_26));
  VAR_26.modes = VAR_1;
  VAR_26.time.tv_sec = VAR_37;
  VAR_26.time.tv_usec = 0;
  if (FUNC_1(VAR_35, &VAR_26) < 0) {
   FUNC_15("clock_adjtime");
  } else {
   FUNC_18("time shift okay");
  }
 }

 if (VAR_40) {
  if (FUNC_2(VAR_35, &VAR_25)) {
   FUNC_15("clock_gettime");
  } else {
   FUNC_17("clock time: %ld.%09ld or %s",
          VAR_25.tv_sec, VAR_25.tv_nsec, FUNC_5(&VAR_25.tv_sec));
  }
 }

 if (VAR_45 == 1) {
  FUNC_2(VAR_3, &VAR_25);
  if (FUNC_3(VAR_35, &VAR_25)) {
   FUNC_15("clock_settime");
  } else {
   FUNC_18("set time okay");
  }
 }

 if (VAR_45 == 2) {
  FUNC_2(VAR_35, &VAR_25);
  if (FUNC_3(VAR_3, &VAR_25)) {
   FUNC_15("clock_settime");
  } else {
   FUNC_18("set time okay");
  }
 }

 if (VAR_39) {
  FUNC_12(&VAR_23, 0, sizeof(VAR_23));
  VAR_23.index = 0;
  VAR_23.flags = VAR_8;
  if (FUNC_11(VAR_33, VAR_10, &VAR_23)) {
   FUNC_15("PTP_EXTTS_REQUEST");
   VAR_39 = 0;
  } else {
   FUNC_18("external time stamp request okay");
  }
  for (; VAR_39; VAR_39--) {
   VAR_32 = FUNC_19(VAR_33, &VAR_22, sizeof(VAR_22));
   if (VAR_32 != sizeof(VAR_22)) {
    FUNC_15("read");
    break;
   }
   FUNC_17("event index %u at %lld.%09u\n", VAR_22.index,
          VAR_22.t.sec, VAR_22.t.nsec);
   FUNC_6(VAR_18);
  }

  VAR_23.flags = 0;
  if (FUNC_11(VAR_33, VAR_10, &VAR_23)) {
   FUNC_15("PTP_EXTTS_REQUEST");
  }
 }

 if (VAR_41) {
  FUNC_10(VAR_12, VAR_15);

  VAR_29.sigev_notify = VAR_13;
  VAR_29.sigev_signo = VAR_12;
  if (FUNC_22(VAR_35, &VAR_29, &VAR_27)) {
   FUNC_15("timer_create");
   return -1;
  }

  FUNC_12(&VAR_28, 0, sizeof(VAR_28));
  VAR_28.it_value.tv_sec = VAR_41;
  if (FUNC_24(VAR_27, 0, &VAR_28, ((void*)0))) {
   FUNC_15("timer_settime");
   return -1;
  }
  FUNC_14();
  FUNC_23(VAR_27);
 }

 if (VAR_42) {
  FUNC_10(VAR_12, VAR_15);

  VAR_29.sigev_notify = VAR_13;
  VAR_29.sigev_signo = VAR_12;
  if (FUNC_22(VAR_35, &VAR_29, &VAR_27)) {
   FUNC_15("timer_create");
   return -1;
  }

  FUNC_12(&VAR_28, 0, sizeof(VAR_28));
  VAR_28.it_interval.tv_sec = VAR_42;
  VAR_28.it_value.tv_sec = VAR_42;
  if (FUNC_24(VAR_27, 0, &VAR_28, ((void*)0))) {
   FUNC_15("timer_settime");
   return -1;
  }
  while (1) {
   FUNC_14();
  }
  FUNC_23(VAR_27);
 }

 if (VAR_43 >= 0) {
  if (FUNC_2(VAR_35, &VAR_25)) {
   FUNC_15("clock_gettime");
   return -1;
  }
  FUNC_12(&VAR_24, 0, sizeof(VAR_24));
  VAR_24.index = 0;
  VAR_24.start.sec = VAR_25.tv_sec + 2;
  VAR_24.start.nsec = 0;
  VAR_24.period.sec = 0;
  VAR_24.period.nsec = VAR_43;
  if (FUNC_11(VAR_33, VAR_11, &VAR_24)) {
   FUNC_15("PTP_PEROUT_REQUEST");
  } else {
   FUNC_18("periodic output request okay");
  }
 }

 if (VAR_44 != -1) {
  int VAR_46 = VAR_44 ? 1 : 0;
  if (FUNC_11(VAR_33, VAR_9, VAR_46)) {
   FUNC_15("PTP_ENABLE_PPS");
  } else {
   FUNC_18("pps for system time request okay");
  }
 }

 FUNC_4(VAR_33);
 return 0;
}
