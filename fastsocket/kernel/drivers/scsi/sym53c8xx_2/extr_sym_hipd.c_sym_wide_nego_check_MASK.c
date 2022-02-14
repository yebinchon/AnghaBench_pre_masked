
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
struct sym_hcb {scalar_t__* msgin; scalar_t__ maxwide; scalar_t__* msgout; } ;
struct sym_ccb {int target; int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__*,scalar_t__) ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct sym_hcb*,int,char*,scalar_t__*) ;
 int FUNC_3 (struct sym_hcb*,int,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(struct sym_hcb *VAR_3, int VAR_4, struct sym_ccb *VAR_5)
{
 int VAR_6 = VAR_5->target;
 u_char VAR_7, VAR_8;

 if (VAR_0 & VAR_1) {
  FUNC_2(VAR_3, VAR_6, "wide msgin", VAR_3->msgin);
 }




 VAR_7 = 0;
 VAR_8 = VAR_3->msgin[3];




 if (VAR_8 > VAR_3->maxwide) {
  VAR_7 = 1;
  VAR_8 = VAR_3->maxwide;
 }

 if (VAR_0 & VAR_1) {
  FUNC_1(VAR_5->cmd, "wdtr: wide=%d chg=%d.\n",
    VAR_8, VAR_7);
 }





 if (!VAR_4 && VAR_7)
  goto reject_it;




 FUNC_3 (VAR_3, VAR_6, VAR_8);




 if (!VAR_4)
  return 0;




 FUNC_0(VAR_3->msgout, VAR_8);

 VAR_3->msgin [0] = VAR_2;

 if (VAR_0 & VAR_1) {
  FUNC_2(VAR_3, VAR_6, "wide msgout", VAR_3->msgout);
 }

 return 0;

reject_it:
 return -1;
}
