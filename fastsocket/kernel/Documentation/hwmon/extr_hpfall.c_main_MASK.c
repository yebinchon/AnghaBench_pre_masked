
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_param {int sched_priority; } ;
typedef int count ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,char*) ;
 int VAR_10 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int,unsigned char*,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,struct sched_param*) ;
 int FUNC_14 (int) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int ,int ) ;
 int VAR_11 ;
 int FUNC_17 () ;

int FUNC_18(int VAR_12, char **VAR_13)
{
 int VAR_14, VAR_15;
 struct sched_param VAR_16;

 if (VAR_12 == 1)
  VAR_15 = FUNC_15("/dev/sda");
 else if (VAR_12 == 2)
  VAR_15 = FUNC_15(VAR_13[1]);
 else
  VAR_15 = -VAR_1;

 if (VAR_15 || !FUNC_17()) {
  FUNC_4(VAR_11, "usage: %s <device> (default: /dev/sda)\n",
    VAR_13[0]);
  FUNC_3(1);
 }

 VAR_14 = FUNC_8("/dev/freefall", VAR_6);
 if (VAR_14 < 0) {
  FUNC_9("/dev/freefall");
  return VAR_2;
 }

 FUNC_2(0, 0);
 VAR_16.sched_priority = FUNC_12(VAR_7);
 FUNC_13(0, VAR_7, &VAR_16);
 FUNC_6(VAR_4|VAR_5);

 FUNC_16(VAR_8, VAR_10);

 for (;;) {
  unsigned char VAR_17;

  VAR_15 = FUNC_11(VAR_14, &VAR_17, sizeof(VAR_17));
  FUNC_0(0);
  if ((VAR_15 == -1) && (VAR_9 == VAR_0)) {

   continue;
  }

  if (VAR_15 != sizeof(VAR_17)) {
   FUNC_9("read");
   break;
  }

  FUNC_10(21);
  FUNC_14(1);
  if (1 || FUNC_7() || FUNC_5())
   FUNC_0(2);
  else
   FUNC_0(20);
 }

 FUNC_1(VAR_14);
 return VAR_3;
}
