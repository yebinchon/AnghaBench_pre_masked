
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quotafile {int qf_lock; scalar_t__ qf_qflags; int qf_vp; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_1(struct quotafile *VAR_3)
{
        VAR_3->qf_vp = VAR_0;
 VAR_3->qf_qflags = 0;

 FUNC_0(&VAR_3->qf_lock, VAR_2, VAR_1);
}
