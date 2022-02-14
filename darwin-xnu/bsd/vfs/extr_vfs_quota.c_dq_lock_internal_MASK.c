
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dquot {int dq_lflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int ,int ,char*,int *) ;
 int VAR_3 ;

void
FUNC_1(struct dquot *VAR_4)
{
        while (VAR_4->dq_lflags & VAR_0) {
         VAR_4->dq_lflags |= VAR_1;
         FUNC_0(&VAR_4->dq_lflags, VAR_3, VAR_2, "dq_lock_internal", ((void*)0));
 }
 VAR_4->dq_lflags |= VAR_0;
}
