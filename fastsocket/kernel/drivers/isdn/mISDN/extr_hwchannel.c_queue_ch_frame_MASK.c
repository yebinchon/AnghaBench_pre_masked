
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sk_buff {int dummy; } ;
struct mISDNhead {int id; int prim; } ;
struct mISDNchannel {scalar_t__ peer; int (* recv ) (scalar_t__,struct sk_buff*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mISDNchannel*,int ,int,int ,int *,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 struct mISDNhead* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (scalar_t__,struct sk_buff*) ;

void
FUNC_4(struct mISDNchannel *VAR_1, u_int VAR_2, int VAR_3, struct sk_buff *VAR_4)
{
 struct mISDNhead *VAR_5;

 if (!VAR_4) {
  FUNC_0(VAR_1, VAR_2, VAR_3, 0, ((void*)0), VAR_0);
 } else {
  if (VAR_1->peer) {
   VAR_5 = FUNC_2(VAR_4);
   VAR_5->prim = VAR_2;
   VAR_5->id = VAR_3;
   if (!VAR_1->recv(VAR_1->peer, VAR_4))
    return;
  }
  FUNC_1(VAR_4);
 }
}
