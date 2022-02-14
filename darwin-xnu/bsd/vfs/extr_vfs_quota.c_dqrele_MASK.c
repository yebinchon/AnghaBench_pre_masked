
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dquot {int dq_cnt; int dq_flags; } ;


 int VAR_0 ;
 struct dquot* VAR_1 ;
 int FUNC_0 (int *,struct dquot*,int ) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct dquot*) ;
 int VAR_3 ;
 int FUNC_4 (struct dquot*) ;
 int FUNC_5 (struct dquot*) ;
 int FUNC_6 (struct dquot*) ;

void
FUNC_7(struct dquot *VAR_4)
{

 if (VAR_4 == VAR_1)
  return;
 FUNC_4(VAR_4);

 if (VAR_4->dq_cnt > 1) {
  VAR_4->dq_cnt--;

  FUNC_6(VAR_4);
  return;
 }
 if (VAR_4->dq_flags & VAR_0)
  (void) FUNC_5(VAR_4);
 VAR_4->dq_cnt--;

 FUNC_1();
 FUNC_0(&VAR_3, VAR_4, VAR_2);
        FUNC_3(VAR_4);
 FUNC_2();
}
