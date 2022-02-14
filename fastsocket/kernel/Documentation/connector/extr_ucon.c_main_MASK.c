
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
struct sockaddr_nl {int nl_groups; scalar_t__ nl_pid; int nl_family; } ;
struct sockaddr {int dummy; } ;
struct pollfd {int fd; scalar_t__ revents; int events; } ;
struct nlmsghdr {int nlmsg_type; } ;
struct TYPE_2__ {int idx; int val; } ;
struct cn_msg {int seq; int ack; TYPE_1__ id; scalar_t__ len; } ;
typedef int on ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct nlmsghdr*) ;


 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int,struct sockaddr*,int) ;
 int FUNC_2 (int) ;
 char* FUNC_3 (int *) ;
 int VAR_10 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (int *,char*,...) ;
 int FUNC_7 (int,char**,char*) ;
 int FUNC_8 (char*,int ,int) ;
 int VAR_11 ;
 int FUNC_9 (int,struct cn_msg*) ;
 int VAR_12 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct pollfd*,int,int) ;
 int FUNC_12 (int,char*,int,int ) ;
 int VAR_13 ;
 int FUNC_13 (int,int ,int ,int*,int) ;
 int FUNC_14 (int ,int ,int ) ;
 int * VAR_14 ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (char*,...) ;
 int FUNC_18 () ;

int FUNC_19(int VAR_15, char *VAR_16[])
{
 int VAR_17;
 char VAR_18[1024];
 int VAR_19;
 struct nlmsghdr *VAR_20;
 struct sockaddr_nl VAR_21;
 struct cn_msg *VAR_22;
 FILE *VAR_23;
 time_t VAR_24;
 struct pollfd VAR_25;
 bool VAR_26 = 0;

 while ((VAR_17 = FUNC_7(VAR_15, VAR_16, "hs")) != -1) {
  switch (VAR_17) {
  case 's':
   VAR_26 = 1;
   break;

  case 'h':
   FUNC_18();
   return 0;

  default:

   FUNC_18();
   return 1;
  }
 }

 if (VAR_15 != VAR_12) {
  VAR_23 = FUNC_5(VAR_16[VAR_12], "a+");
  if (!VAR_23) {
   FUNC_17("Unable to open %s for writing: %s\n",
    VAR_16[1], FUNC_15(VAR_10));
   VAR_23 = VAR_14;
  }
 } else
  VAR_23 = VAR_14;

 FUNC_8(VAR_18, 0, sizeof(VAR_18));

 VAR_17 = FUNC_14(VAR_6, VAR_8, VAR_5);
 if (VAR_17 == -1) {
  FUNC_10("socket");
  return -1;
 }

 VAR_21.nl_family = VAR_0;
 VAR_21.nl_groups = -1;
 VAR_21.nl_pid = 0;

 FUNC_17("subscribing to %u.%u\n", VAR_1, VAR_2);

 if (FUNC_1(VAR_17, (struct sockaddr *)&VAR_21, sizeof(struct sockaddr_nl)) == -1) {
  FUNC_10("bind");
  FUNC_2(VAR_17);
  return -1;
 }







 if (VAR_26) {
  int VAR_27, VAR_28;

  FUNC_8(VAR_18, 0, sizeof(VAR_18));

  VAR_22 = (struct cn_msg *)VAR_18;

  VAR_22->id.idx = VAR_1;
  VAR_22->id.val = VAR_2;
  VAR_22->seq = VAR_13++;
  VAR_22->ack = 0;
  VAR_22->len = 0;

  for (VAR_28=0; VAR_28<10; ++VAR_28) {
   for (VAR_27=0; VAR_27<1000; ++VAR_27) {
    VAR_19 = FUNC_9(VAR_17, VAR_22);
   }

   FUNC_17("%d messages have been sent to %08x.%08x.\n", VAR_27, VAR_22->id.idx, VAR_22->id.val);
  }

  return 0;
 }


 VAR_25.fd = VAR_17;

 while (!VAR_11) {
  VAR_25.events = VAR_7;
  VAR_25.revents = 0;
  switch (FUNC_11(&VAR_25, 1, -1)) {
   case 0:
    VAR_11 = 1;
    break;
   case -1:
    if (VAR_10 != VAR_3) {
     VAR_11 = 1;
     break;
    }
    continue;
  }
  if (VAR_11)
   break;

  FUNC_8(VAR_18, 0, sizeof(VAR_18));
  VAR_19 = FUNC_12(VAR_17, VAR_18, sizeof(VAR_18), 0);
  if (VAR_19 == -1) {
   FUNC_10("recv buf");
   FUNC_2(VAR_17);
   return -1;
  }
  VAR_20 = (struct nlmsghdr *)VAR_18;

  switch (VAR_20->nlmsg_type) {
  case 128:
   FUNC_6(VAR_23, "Error message received.\n");
   FUNC_4(VAR_23);
   break;
  case 129:
   VAR_22 = (struct cn_msg *)FUNC_0(VAR_20);

   FUNC_16(&VAR_24);
   FUNC_6(VAR_23, "%.24s : [%x.%x] [%08u.%08u].\n",
    FUNC_3(&VAR_24), VAR_22->id.idx, VAR_22->id.val, VAR_22->seq, VAR_22->ack);
   FUNC_4(VAR_23);
   break;
  default:
   break;
  }
 }

 FUNC_2(VAR_17);
 return 0;
}
