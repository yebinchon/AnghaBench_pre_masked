
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int q_depth; } ;
struct rsxx_cardinfo {scalar_t__ regmap; TYPE_1__ creg_ctrl; } ;
struct creg_completion {int st; unsigned int creg_status; int * cmd_done; } ;


 int FUNC_0 (struct rsxx_cardinfo*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct rsxx_cardinfo*,unsigned int,unsigned int,unsigned int,void*,int,int ,struct creg_completion*) ;
 int FUNC_3 (struct rsxx_cardinfo*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,int,unsigned int) ;
 int FUNC_6 (scalar_t__) ;
 unsigned long FUNC_7 (int) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct rsxx_cardinfo *VAR_5,
      unsigned int VAR_6,
      unsigned int VAR_7,
      unsigned int VAR_8,
      void *VAR_9,
      int VAR_10,
      unsigned int *VAR_11)
{
 FUNC_1(VAR_3);
 struct creg_completion VAR_12;
 unsigned long VAR_13;
 int VAR_14;

 VAR_12.cmd_done = &VAR_3;
 VAR_12.st = 0;
 VAR_12.creg_status = 0;

 VAR_14 = FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_4,
       &VAR_12);
 if (VAR_14)
  return VAR_14;






 VAR_13 = FUNC_7(VAR_0 *
       VAR_5->creg_ctrl.q_depth + 20000);





 VAR_14 = FUNC_8(VAR_12.cmd_done, VAR_13);
 if (VAR_14 == 0) {




  FUNC_4(FUNC_0(VAR_5),
   "cregs timer failed\n");
  FUNC_3(VAR_5);
  return -VAR_1;
 }

 *VAR_11 = VAR_12.creg_status;

 if (VAR_12.st) {







  FUNC_6(VAR_5->regmap + VAR_2);

  FUNC_5(FUNC_0(VAR_5),
   "creg command failed(%d x%08x)\n",
   VAR_12.st, VAR_7);
  return VAR_12.st;
 }

 return 0;
}
