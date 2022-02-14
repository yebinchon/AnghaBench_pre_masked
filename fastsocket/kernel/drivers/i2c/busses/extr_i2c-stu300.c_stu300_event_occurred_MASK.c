
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stu300_dev {TYPE_1__* pdev; int cmd_err; scalar_t__ virtbase; } ;
typedef enum stu300_event { ____Placeholder_stu300_event } stu300_event ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int *,char*,int,int,int) ;
 int FUNC_1 (struct stu300_dev*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct stu300_dev *VAR_16,
       enum stu300_event VAR_17) {
 u32 VAR_18;
 u32 VAR_19;


 VAR_18 = FUNC_2(VAR_16->virtbase + VAR_0);

 if (!(VAR_18 & VAR_4))

  return 0;

 VAR_19 = FUNC_2(VAR_16->virtbase + VAR_6);


 FUNC_1(VAR_16);


 if (VAR_19 & VAR_7) {
  VAR_16->cmd_err = VAR_12;
  return 1;
 } else if (VAR_19 & VAR_9) {
  VAR_16->cmd_err = VAR_14;
  return 1;
 } else if (VAR_19 & VAR_8) {
  VAR_16->cmd_err = VAR_13;
  return 1;
 }

 switch (VAR_17) {
 case 136:
  if (VAR_18 & VAR_2)
   return 1;
  break;
 case 135:
 case 134:
 case 130:
 case 129:
  if (VAR_18 & VAR_3) {
   return 1;
  }
  break;
 case 133:
  if (VAR_19 & VAR_11)
   return 1;
  break;
 case 132:
  if (VAR_18 & VAR_5)

   return 1;
  break;
 case 131:
  if (VAR_19 & VAR_10) {

   return 1;
  }
  break;
 case 128:
  if (VAR_18 & VAR_1)
   return 1;
  break;
 default:
  break;
 }





 VAR_16->cmd_err = VAR_15;
 FUNC_0(&VAR_16->pdev->dev,
  "Unhandled interrupt! %d sr1: 0x%x sr2: 0x%x\n",
  VAR_17, VAR_18, VAR_19);
 return 0;
}
