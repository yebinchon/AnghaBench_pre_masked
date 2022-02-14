
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgbi_sock {int atid; int cdev; } ;
struct cxgb4_lld_info {int tids; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct cxgb4_lld_info* FUNC_1 (int ) ;
 int FUNC_2 (struct cxgbi_sock*,int ) ;
 scalar_t__ FUNC_3 (struct cxgbi_sock*,int ) ;
 int FUNC_4 (struct cxgbi_sock*) ;

__attribute__((used)) static inline void FUNC_5(struct cxgbi_sock *VAR_1)
{
 struct cxgb4_lld_info *VAR_2 = FUNC_1(VAR_1->cdev);

 if (FUNC_3(VAR_1, VAR_0)) {
  FUNC_0(VAR_2->tids, VAR_1->atid);
  FUNC_2(VAR_1, VAR_0);
  FUNC_4(VAR_1);
 }
}
