
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cmd_code; int count; int flags; scalar_t__ cda; } ;
struct qeth_channel {scalar_t__ state; int ccwdev; TYPE_1__ ccw; } ;
struct qeth_card {int wait_q; struct qeth_channel data; } ;
struct ciw {scalar_t__ cmd; int count; } ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
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
 scalar_t__ FUNC_0 (char*) ;
 struct ciw* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int,int) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static int FUNC_9(struct qeth_card *VAR_13, void **VAR_14,
          int *VAR_15)
{
 struct ciw *VAR_16;
 char *VAR_17;
 int VAR_18;
 struct qeth_channel *VAR_19 = &VAR_13->data;
 unsigned long VAR_20;




 VAR_16 = FUNC_1(VAR_19->ccwdev, VAR_4);
 if (!VAR_16 || VAR_16->cmd == 0)
  return -VAR_7;
 VAR_17 = FUNC_5(VAR_16->count, VAR_9 | VAR_8);
 if (!VAR_17)
  return -VAR_6;

 VAR_19->ccw.cmd_code = VAR_16->cmd;
 VAR_19->ccw.cda = (__u32) FUNC_0(VAR_17);
 VAR_19->ccw.count = VAR_16->count;
 VAR_19->ccw.flags = VAR_0;
 VAR_19->state = VAR_2;
 FUNC_6(FUNC_3(VAR_19->ccwdev), VAR_20);
 VAR_18 = FUNC_2(VAR_19->ccwdev, &VAR_19->ccw,
           VAR_11, VAR_10, 0,
           VAR_12);
 FUNC_7(FUNC_3(VAR_19->ccwdev), VAR_20);
 if (!VAR_18)
  FUNC_8(VAR_13->wait_q,
      (VAR_19->state == VAR_3 ||
       VAR_19->state == VAR_1));
 if (VAR_19->state == VAR_1)
  VAR_18 = -VAR_5;
 else
  VAR_19->state = VAR_1;
 if (VAR_18) {
  FUNC_4(VAR_17);
  *VAR_14 = ((void*)0);
  *VAR_15 = 0;
 } else {
  *VAR_15 = VAR_16->count;
  *VAR_14 = VAR_17;
 }
 return VAR_18;
}
