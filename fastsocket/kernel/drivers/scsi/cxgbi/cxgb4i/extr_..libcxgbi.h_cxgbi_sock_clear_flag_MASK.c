
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgbi_sock {int flags; int state; } ;
typedef enum cxgbi_sock_flags { ____Placeholder_cxgbi_sock_flags } cxgbi_sock_flags ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,char*,struct cxgbi_sock*,int ,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct cxgbi_sock *VAR_1,
     enum cxgbi_sock_flags VAR_2)
{
 FUNC_0(VAR_2, &VAR_1->flags);
 FUNC_1(1 << VAR_0,
  "csk 0x%p,%u,0x%lx, bit %d.\n",
  VAR_1, VAR_1->state, VAR_1->flags, VAR_2);
}
