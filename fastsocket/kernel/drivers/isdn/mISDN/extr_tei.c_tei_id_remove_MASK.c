
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {int (* printdebug ) (struct FsmInst*,char*,int) ;} ;
struct teimgr {TYPE_1__* l2; TYPE_2__ tei_m; int timer; } ;
struct FsmInst {struct teimgr* userdata; } ;
struct TYPE_3__ {int tei; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct FsmInst*,char*,int) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct FsmInst *VAR_5, int VAR_6, void *VAR_7)
{
 struct teimgr *VAR_8 = VAR_5->userdata;
 u_char *VAR_9 = VAR_7;
 int VAR_10;

 VAR_10 = *(VAR_9+3) >> 1;
 if (*VAR_4 & VAR_0)
  VAR_8->tei_m.printdebug(VAR_5, "identity remove tei %d", VAR_10);
 if ((VAR_8->l2->tei != VAR_1) &&
     ((VAR_10 == VAR_1) || (VAR_10 == VAR_8->l2->tei))) {
  FUNC_1(&VAR_8->timer, 5);
  FUNC_0(&VAR_8->tei_m, VAR_3);
  FUNC_3(VAR_8->l2, VAR_2, 0);
 }
}
