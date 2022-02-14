
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t3cdev {int dummy; } ;
struct sk_buff {int dummy; } ;
struct cxgbi_sock {int tid; int flags; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct cxgbi_sock*) ;
 int FUNC_2 (int,char*,struct cxgbi_sock*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct t3cdev *VAR_2, struct sk_buff *VAR_3, void *VAR_4)
{
 struct cxgbi_sock *VAR_5 = VAR_4;

 FUNC_2(1 << VAR_1 | 1 << VAR_0,
  "csk 0x%p,%u,0x%lx,%u.\n",
  VAR_5, VAR_5->state, VAR_5->flags, VAR_5->tid);

 FUNC_1(VAR_5);
 FUNC_0(VAR_3);
 return 0;
}
