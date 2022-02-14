
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfi_buf {scalar_t__ cfi_pending_first; scalar_t__ cfi_pending_last; scalar_t__ cfi_pending_mbcnt; int cfi_inject_q; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct cfi_buf *VAR_0)
{
 FUNC_0(&VAR_0->cfi_inject_q);

 FUNC_1(VAR_0->cfi_pending_first <= VAR_0->cfi_pending_last);
 FUNC_1(VAR_0->cfi_pending_mbcnt >= 0);
}
