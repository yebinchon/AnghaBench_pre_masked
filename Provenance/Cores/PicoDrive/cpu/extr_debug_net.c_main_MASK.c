
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr_in6 {int dummy; } ;
struct sockaddr {int dummy; } ;
struct addrinfo {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; int ai_flags; } ;
typedef int socklen_t ;
typedef int sa ;
struct TYPE_6__ {int cpuid; int len; } ;
struct TYPE_7__ {unsigned int* regs; TYPE_1__ header; } ;
typedef TYPE_2__ packet_t ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,struct sockaddr*,int*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct addrinfo*) ;
 int FUNC_5 (char*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_6 (int,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_8 (struct addrinfo*,int ,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int,TYPE_2__*,int,int ) ;
 char** VAR_5 ;
 int FUNC_12 (int ,int ,int ) ;
 int VAR_6 ;

int FUNC_13(int VAR_7, char *VAR_8[])
{
  unsigned int VAR_9[5][4], VAR_10[5] = { 0, };
  struct addrinfo *VAR_11, *VAR_12, VAR_13;
  int VAR_14 = -1, VAR_15, VAR_16;
  struct sockaddr_in6 VAR_17;
  packet_t VAR_18, VAR_19;
  int VAR_20, VAR_21, VAR_22, VAR_23;
  int VAR_24 = 0;
  socklen_t VAR_25;

  if (VAR_8[1] != ((void*)0))
    VAR_24 = FUNC_1(VAR_8[1]);

  FUNC_8(&VAR_13, 0, sizeof(VAR_13));
  VAR_13.ai_flags = VAR_0;
  VAR_13.ai_family = VAR_2;
  VAR_13.ai_socktype = VAR_3;

  VAR_21 = FUNC_5("::", "1234", &VAR_13, &VAR_12);
  if (VAR_21 != 0)
    return -1;

  for (VAR_11 = VAR_12; VAR_11 != ((void*)0); VAR_11 = VAR_11->ai_next) {
    VAR_14 = FUNC_12(VAR_11->ai_family, VAR_11->ai_socktype, VAR_11->ai_protocol);
    if (VAR_14 == -1)
      continue;

    VAR_21 = FUNC_2(VAR_14, VAR_11->ai_addr, VAR_11->ai_addrlen);
    if (VAR_21 != 0) {
      FUNC_3(VAR_14);
      VAR_14 = -1;
      continue;
    }
    break;
  }
  FUNC_4(VAR_12);

  if (VAR_14 == -1) {
    FUNC_9("failed to bind");
    return -1;
  }

  VAR_21 = FUNC_6(VAR_14, VAR_4);
  if (VAR_21 != 0) {
    FUNC_9("failed to listen");
    return -1;
  }

  VAR_25 = sizeof(VAR_17);
  VAR_15 = FUNC_0(VAR_14, (struct sockaddr *)&VAR_17, &VAR_25);
  if (VAR_15 == -1) {
    FUNC_9("failed to accept");
    return -1;
  }
  FUNC_10("client1 connected\n");

  VAR_25 = sizeof(VAR_17);
  VAR_16 = FUNC_0(VAR_14, (struct sockaddr *)&VAR_17, &VAR_25);
  if (VAR_16 == -1) {
    FUNC_9("failed to accept");
    return -1;
  }
  FUNC_10("client2 connected\n");

  for (VAR_22 = 0; ; VAR_22++)
  {
    int VAR_26;

    VAR_21 = FUNC_11(VAR_15, &VAR_18, (4+4 + 24*4 + 2*4), VAR_1);
    if (VAR_21 != (4+4 + 24*4 + 2*4)) {
      if (VAR_21 < 0)
        FUNC_9("recv1");
      else
        FUNC_10("recv1 %d\n", VAR_21);
      return -1;
    }
    VAR_21 = FUNC_11(VAR_16, &VAR_19, (4+4 + 24*4 + 2*4), VAR_1);
    if (VAR_21 != (4+4 + 24*4 + 2*4)) {
      if (VAR_21 < 0)
        FUNC_9("recv2");
      else
        FUNC_10("recv2 %d\n", VAR_21);
      return -1;
    }

    VAR_23 = VAR_18;
    VAR_26 = sizeof(VAR_18) + VAR_18;
    if (VAR_24 > 0)
      VAR_26 = VAR_24;

    if (FUNC_7(&VAR_18, &VAR_19, VAR_26) == 0) {
      VAR_9[VAR_23][VAR_10[VAR_23]++ & 3] = VAR_18[0];
      continue;
    }

    if (VAR_18 != VAR_19)
      FUNC_10("%d: CPU %d %d\n", VAR_22, VAR_18 & 0xff, VAR_19 & 0xff);
    else if (*(int *)&VAR_18 != *(int *)&VAR_19)
      FUNC_10("%d: header\n", VAR_22);


    for (VAR_20 = 0; VAR_20 < 1+24+2; VAR_20++)
      if (VAR_18[VAR_20] != VAR_19[VAR_20])
        FUNC_10("%d: %3s: %08x %08x\n", VAR_22, VAR_5[VAR_20], VAR_18[VAR_20], VAR_19[VAR_20]);

    break;
  }

  FUNC_10("--\nCPU %d\n", VAR_23);
  for (VAR_23 = 0; VAR_23 < 2; VAR_23++) {
    FUNC_10("trace%d: ", VAR_23);
    for (VAR_20 = 0; VAR_20 < 4; VAR_20++)
      FUNC_10(" %08x", VAR_9[VAR_23][VAR_10[VAR_23]++ & 3]);

    if (VAR_18 == VAR_23)
      FUNC_10(" %08x", VAR_18[0]);
    else if (VAR_19 == VAR_23)
      FUNC_10(" %08x", VAR_19[0]);
    FUNC_10("\n");
  }

  for (VAR_20 = 0; VAR_20 < 24+1; VAR_20++)
    FUNC_10("%3s: %08x %08x\n", VAR_5[VAR_20], VAR_18[VAR_20], VAR_19[VAR_20]);

  return 0;
}
