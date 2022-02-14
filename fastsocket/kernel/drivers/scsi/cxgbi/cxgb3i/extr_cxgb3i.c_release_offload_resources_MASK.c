
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct t3cdev {int dummy; } ;
struct cxgbi_sock {scalar_t__ wr_cred; scalar_t__ wr_max_cred; TYPE_1__* cdev; int * dst; int tid; scalar_t__ rss_qid; int flags; int state; } ;
struct TYPE_2__ {scalar_t__ lldev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct t3cdev*,void*,int ) ;
 int FUNC_1 (struct cxgbi_sock*,int ) ;
 scalar_t__ FUNC_2 (struct cxgbi_sock*,int ) ;
 int FUNC_3 (struct cxgbi_sock*) ;
 int FUNC_4 (struct cxgbi_sock*) ;
 int FUNC_5 (struct cxgbi_sock*) ;
 int FUNC_6 (struct cxgbi_sock*) ;
 int FUNC_7 (struct cxgbi_sock*) ;
 int FUNC_8 (struct cxgbi_sock*) ;
 int FUNC_9 (int,char*,struct cxgbi_sock*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_10(struct cxgbi_sock *VAR_4)
{
 struct t3cdev *VAR_5 = (struct t3cdev *)VAR_4->cdev->lldev;

 FUNC_9(1 << VAR_3 | 1 << VAR_2,
  "csk 0x%p,%u,0x%lx,%u.\n",
  VAR_4, VAR_4->state, VAR_4->flags, VAR_4->tid);

 VAR_4->rss_qid = 0;
 FUNC_3(VAR_4);

 if (VAR_4->wr_cred != VAR_4->wr_max_cred) {
  FUNC_4(VAR_4);
  FUNC_6(VAR_4);
 }
 FUNC_8(VAR_4);
 if (FUNC_2(VAR_4, VAR_0))
  FUNC_7(VAR_4);
 else if (FUNC_2(VAR_4, VAR_1)) {
  FUNC_0(VAR_5, (void *)VAR_4, VAR_4->tid);
  FUNC_1(VAR_4, VAR_1);
  FUNC_5(VAR_4);
 }
 VAR_4->dst = ((void*)0);
 VAR_4->cdev = ((void*)0);
}
