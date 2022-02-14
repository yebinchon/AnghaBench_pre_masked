
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mISDN_ctrl_req {int op; int p1; int p2; } ;
struct TYPE_3__ {TYPE_2__* peer; } ;
struct dsp {TYPE_1__ ch; } ;
typedef int cq ;
struct TYPE_4__ {int (* ctrl ) (TYPE_2__*,int ,struct mISDN_ctrl_req*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mISDN_ctrl_req*,int ,int) ;
 int FUNC_1 (TYPE_2__*,int ,struct mISDN_ctrl_req*) ;

__attribute__((used)) static void
FUNC_2(struct dsp *VAR_1, u32 VAR_2, u32 VAR_3, u32 VAR_4,
    u32 VAR_5, u32 VAR_6)
{
 struct mISDN_ctrl_req VAR_7;

 FUNC_0(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.op = VAR_2;
 VAR_7.p1 = VAR_3 | (VAR_4 << 8);
 VAR_7.p2 = VAR_5 | (VAR_6 << 8);
 if (VAR_1->ch.peer)
  VAR_1->ch.peer->ctrl(VAR_1->ch.peer, VAR_0, &VAR_7);
}
