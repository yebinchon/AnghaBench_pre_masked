
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int maxSessions; } ;
struct TYPE_4__ {TYPE_1__ cfg; } ;
typedef int TSCKSUM ;
typedef int SCompHeader ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int VAR_9 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int ,int ) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (char*,int,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *,int) ;
 int FUNC_9 (int,char*,int) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int,int,char*,char*,char*) ;
 TYPE_2__* VAR_10 ;

int FUNC_12(int VAR_11, int VAR_12) {
  char VAR_13[VAR_7];
  char VAR_14[VAR_7];
  char VAR_15[VAR_7];
  int VAR_16;
  char *VAR_17;

  if (FUNC_11(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15) < 0) {
    FUNC_1("failed to create head data file, vnode: %d, fileId: %d", VAR_11, VAR_12);
    return -1;
  }

  VAR_16 = FUNC_6(VAR_13, VAR_2 | VAR_0 | VAR_1, VAR_6 | VAR_4 | VAR_5);
  if (VAR_16 < 0) {
    FUNC_1("failed to create head file:%s, reason:%s", VAR_13, FUNC_7(VAR_9));
    return -1;
  }

  FUNC_10(VAR_16);
  int VAR_18 = sizeof(SCompHeader) * VAR_10[VAR_11].cfg.maxSessions + sizeof(TSCKSUM);
  VAR_17 = FUNC_4(VAR_18);
  FUNC_5(VAR_17, 0, VAR_18);
  FUNC_8(0, (uint8_t *)VAR_17, VAR_18);

  FUNC_3(VAR_16, VAR_8, VAR_3);
  FUNC_9(VAR_16, VAR_17, VAR_18);
  FUNC_2(VAR_17);
  FUNC_0(VAR_16);

  VAR_16 = FUNC_6(VAR_14, VAR_2 | VAR_0 | VAR_1, VAR_6 | VAR_4 | VAR_5);
  if (VAR_16 < 0) {
    FUNC_1("failed to create data file:%s, reason:%s", VAR_14, FUNC_7(VAR_9));
    return -1;
  }
  FUNC_10(VAR_16);
  FUNC_0(VAR_16);

  VAR_16 = FUNC_6(VAR_15, VAR_2 | VAR_0 | VAR_1, VAR_6 | VAR_4 | VAR_5);
  if (VAR_16 < 0) {
    FUNC_1("failed to create last file:%s, reason:%s", VAR_15, FUNC_7(VAR_9));
    return -1;
  }
  FUNC_10(VAR_16);
  FUNC_0(VAR_16);

  return 0;
}
