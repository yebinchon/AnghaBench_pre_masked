
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int refcount; } ;
struct cxgbi_sock {TYPE_1__ refcnt; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int,char*,char const*,struct cxgbi_sock*,int ) ;

__attribute__((used)) static inline void FUNC_3(const char *VAR_2, struct cxgbi_sock *VAR_3)
{
 FUNC_2(1 << VAR_0,
  "%s, put csk 0x%p, ref %u-1.\n",
  VAR_2, VAR_3, FUNC_0(&VAR_3->refcnt.refcount));
 FUNC_1(&VAR_3->refcnt, VAR_1);
}
