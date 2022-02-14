
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cstat; int dstat; } ;
struct TYPE_4__ {TYPE_1__ cmd; } ;
struct irb {TYPE_2__ scsw; scalar_t__ ecw; } ;
struct ccw_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int ,int,int) ;
 int FUNC_1 (int ,int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 char VAR_10 ;
 size_t VAR_11 ;
 char VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ,char*,int ,int,int,struct irb*,int,int) ;

__attribute__((used)) static int FUNC_5(struct ccw_device *VAR_14, struct irb *VAR_15)
{
 int VAR_16, VAR_17;
 char *VAR_18;

 VAR_18 = (char *) VAR_15->ecw;
 VAR_17 = VAR_15->scsw.cmd.cstat;
 VAR_16 = VAR_15->scsw.cmd.dstat;

 if (VAR_17 & (VAR_4 | VAR_6 |
       VAR_5 | VAR_3 |
       VAR_8 | VAR_7)) {
  FUNC_1(VAR_13, 2, "CGENCHK");
  FUNC_3(&VAR_14->dev, "The qeth device driver "
   "failed to recover an error on the device\n");
  FUNC_0(2, "%s check on device dstat=x%x, cstat=x%x\n",
   FUNC_2(&VAR_14->dev), VAR_16, VAR_17);
  FUNC_4(VAR_2, "qeth: irb ", VAR_1,
    16, 1, VAR_15, 64, 1);
  return 1;
 }

 if (VAR_16 & VAR_0) {
  if (VAR_18[VAR_11] &
      VAR_12) {
   FUNC_1(VAR_13, 2, "REVIND");
   return 1;
  }
  if (VAR_18[VAR_9] &
      VAR_10) {
   FUNC_1(VAR_13, 2, "CMDREJi");
   return 1;
  }
  if ((VAR_18[2] == 0xaf) && (VAR_18[3] == 0xfe)) {
   FUNC_1(VAR_13, 2, "AFFE");
   return 1;
  }
  if ((!VAR_18[0]) && (!VAR_18[1]) && (!VAR_18[2]) && (!VAR_18[3])) {
   FUNC_1(VAR_13, 2, "ZEROSEN");
   return 0;
  }
  FUNC_1(VAR_13, 2, "DGENCHK");
   return 1;
 }
 return 0;
}
