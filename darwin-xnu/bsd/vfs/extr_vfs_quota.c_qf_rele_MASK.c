
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quotafile {scalar_t__ qf_refcnt; int qf_qflags; } ;


 int VAR_0 ;
 int FUNC_0 (int*) ;

__attribute__((used)) static void
FUNC_1(struct quotafile *VAR_1)
{
 VAR_1->qf_refcnt--;

 if ( (VAR_1->qf_qflags & VAR_0) && VAR_1->qf_refcnt == 0) {
         VAR_1->qf_qflags &= ~VAR_0;
         FUNC_0(&VAR_1->qf_qflags);
 }
}
