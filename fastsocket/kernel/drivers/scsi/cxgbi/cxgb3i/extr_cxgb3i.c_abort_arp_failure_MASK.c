
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t3cdev {int dummy; } ;
struct sk_buff {int dummy; } ;
struct cpl_abort_req {int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cpl_abort_req*) ;
 struct cpl_abort_req* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct t3cdev*,struct sk_buff*) ;
 int FUNC_3 (int,char*,struct t3cdev*,int ,struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct t3cdev *VAR_3, struct sk_buff *VAR_4)
{
 struct cpl_abort_req *VAR_5 = FUNC_1(VAR_4);

 FUNC_3(1 << VAR_2 | 1 << VAR_1,
  "t3dev 0x%p, tid %u, skb 0x%p.\n",
  VAR_3, FUNC_0(VAR_5), VAR_4);
 VAR_5->cmd = VAR_0;
 FUNC_2(VAR_3, VAR_4);
}
