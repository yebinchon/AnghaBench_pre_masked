
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
struct sockaddr_ctl {int sc_len; scalar_t__ sc_unit; int ctl_id; int sc_id; int ss_sysaddr; int sc_family; int ctl_name; } ;
struct sockaddr {int dummy; } ;
struct ctl_info {int sc_len; scalar_t__ sc_unit; int ctl_id; int sc_id; int ss_sysaddr; int sc_family; int ctl_name; } ;
typedef int socklen_t ;
typedef int kernctl_info ;
typedef int kernctl_addr ;
typedef int enable_netif ;
typedef int enable_flowswitch ;
typedef int enable_channel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (unsigned long,int,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int,int ,int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (int,struct sockaddr*,int) ;
 int FUNC_8 (int,int,int,int,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,struct sockaddr*,int) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_11 () ;
 int FUNC_12 (int,int ,int ,int ,int*) ;
 int FUNC_13 (int,int ,struct sockaddr_ctl*) ;
 int FUNC_14 (struct sockaddr_ctl*,int ,int) ;
 int FUNC_15 (int,int ,int ,int*,int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int ,int ,int ) ;
 int FUNC_18 (int ,int ,int) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;

__attribute__((used)) static int
FUNC_21(int VAR_22, int VAR_23, int VAR_24)
{
 int VAR_25;
 struct ctl_info VAR_26;
 struct sockaddr_ctl VAR_27;
 uuid_t VAR_28;
 socklen_t VAR_29;

startover:

 VAR_13; FUNC_3(VAR_25 = FUNC_17(VAR_9, VAR_11, VAR_12), ((void*)0));

 FUNC_14(&VAR_26, 0, sizeof(VAR_26));
 FUNC_18(VAR_26.ctl_name, VAR_16, sizeof(VAR_26.ctl_name));
 VAR_13; VAR_14; FUNC_4(FUNC_13(VAR_25, VAR_2, &VAR_26), ((void*)0));

 FUNC_14(&VAR_27, 0, sizeof(VAR_27));
 VAR_27.sc_len = sizeof(VAR_27);
 VAR_27.sc_family = VAR_0;
 VAR_27.ss_sysaddr = VAR_1;
 VAR_27.sc_id = VAR_26.ctl_id;
 VAR_27.sc_unit = 0;




 VAR_13; FUNC_2(FUNC_15(VAR_25, VAR_12, VAR_19,
   &VAR_22, sizeof(VAR_22)), VAR_4, ((void*)0));
 VAR_13; FUNC_2(FUNC_15(VAR_25, VAR_12, VAR_18,
   &VAR_23, sizeof(VAR_23)), VAR_4, ((void*)0));
 VAR_13; FUNC_2(FUNC_15(VAR_25, VAR_12, VAR_17,
   &VAR_24, sizeof(VAR_24)), VAR_4, ((void*)0));
 FUNC_19(VAR_28);
 VAR_29 = sizeof(uuid_t);
 VAR_13; FUNC_2(FUNC_12(VAR_25, VAR_12, VAR_20,
   VAR_28, &VAR_29), VAR_4, ((void*)0));
 VAR_13; FUNC_0((unsigned long )VAR_29, sizeof(uuid_t), ((void*)0));
 VAR_13; FUNC_5(FUNC_20(VAR_28), ((void*)0));

 VAR_13; VAR_14; FUNC_4(FUNC_7(VAR_25, (struct sockaddr *)&VAR_27, sizeof(VAR_27)), ((void*)0));

 VAR_13; VAR_14; FUNC_4(FUNC_15(VAR_25, VAR_12, VAR_19,
    &VAR_22, sizeof(VAR_22)), ((void*)0));
 VAR_13; FUNC_2(FUNC_15(VAR_25, VAR_12, VAR_18,
   &VAR_23, sizeof(VAR_23)), VAR_4, ((void*)0));
 VAR_13; FUNC_2(FUNC_15(VAR_25, VAR_12, VAR_17,
   &VAR_24, sizeof(VAR_24)), VAR_4, ((void*)0));
 FUNC_19(VAR_28);
 VAR_29 = sizeof(uuid_t);
 VAR_13; FUNC_2(FUNC_12(VAR_25, VAR_12, VAR_20,
   VAR_28, &VAR_29), VAR_7, ((void*)0));
 VAR_13; FUNC_0((unsigned long )VAR_29, sizeof(uuid_t), ((void*)0));
 VAR_13; FUNC_5(FUNC_20(VAR_28), ((void*)0));

 int VAR_30 = FUNC_10(VAR_25, (struct sockaddr *)&VAR_27, sizeof(VAR_27));
 if (VAR_30 == -1 && VAR_15 == VAR_3) {



  FUNC_9(VAR_25);
  FUNC_6("connect got EBUSY, sleeping 1 second before retry");
  FUNC_16(1);
  goto startover;
 }
 VAR_13; VAR_14; FUNC_4(VAR_30, "connect()");

 VAR_13; FUNC_2(FUNC_15(VAR_25, VAR_12, VAR_19,
   &VAR_22, sizeof(VAR_22)), VAR_4, ((void*)0));

 if (FUNC_11() & VAR_10) {
  if (VAR_22) {
   VAR_13; VAR_14; FUNC_4(FUNC_15(VAR_25, VAR_12, VAR_18,
     &VAR_23, sizeof(VAR_23)), ((void*)0));
  } else {
   VAR_13; VAR_14; FUNC_2(FUNC_15(VAR_25, VAR_12, VAR_18,
     &VAR_23, sizeof(VAR_23)), VAR_5, ((void*)0));
  }
 } else {
  VAR_13; VAR_14; FUNC_2(FUNC_15(VAR_25, VAR_12, VAR_18,
    &VAR_23, sizeof(VAR_23)), VAR_6, ((void*)0));
 }

 if (VAR_24) {
  if (VAR_21 && !VAR_22) {

   VAR_13; FUNC_2(FUNC_15(VAR_25, VAR_12, VAR_17,
     &VAR_24, sizeof(VAR_24)), VAR_8, ((void*)0));
   FUNC_19(VAR_28);
   VAR_29 = sizeof(uuid_t);
   VAR_13; FUNC_2(FUNC_12(VAR_25, VAR_12, VAR_20,
     VAR_28, &VAR_29), VAR_7, ((void*)0));
   VAR_13; FUNC_0((unsigned long )VAR_29, sizeof(uuid_t), ((void*)0));
   VAR_13; FUNC_5(FUNC_20(VAR_28), ((void*)0));
  } else {
   VAR_13; VAR_14; FUNC_4(FUNC_15(VAR_25, VAR_12, VAR_17,
     &VAR_24, sizeof(VAR_24)), ((void*)0));
   FUNC_19(VAR_28);
   VAR_29 = sizeof(uuid_t);
   VAR_13; VAR_14; FUNC_4(FUNC_12(VAR_25, VAR_12, VAR_20,
     VAR_28, &VAR_29), ((void*)0));
   VAR_13; FUNC_0((unsigned long )VAR_29, sizeof(uuid_t), ((void*)0));
   VAR_13; FUNC_1(FUNC_20(VAR_28), ((void*)0));
  }
 } else {
  VAR_13; FUNC_2(FUNC_15(VAR_25, VAR_12, VAR_17,
    &VAR_24, sizeof(VAR_24)), VAR_7, ((void*)0));
  FUNC_19(VAR_28);
  VAR_29 = sizeof(uuid_t);
  VAR_13; FUNC_2(FUNC_12(VAR_25, VAR_12, VAR_20,
    VAR_28, &VAR_29), VAR_7, ((void*)0));
  VAR_13; FUNC_0((unsigned long )VAR_29, sizeof(uuid_t), ((void*)0));
  VAR_13; FUNC_5(FUNC_20(VAR_28), ((void*)0));
 }

 FUNC_8(VAR_25, VAR_22, VAR_23, VAR_24, VAR_28);



 return VAR_25;
}
