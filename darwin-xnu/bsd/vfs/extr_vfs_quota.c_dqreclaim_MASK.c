
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dquot {scalar_t__ dq_cnt; int dq_flags; } ;


 int VAR_0 ;
 struct dquot* VAR_1 ;
 int FUNC_0 (int *,struct dquot*,int ) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct dquot*) ;
 int FUNC_4 (struct dquot*) ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_5(struct dquot *VAR_5)
{

 if (VAR_5 == VAR_1)
  return;

 FUNC_1();
 FUNC_3(VAR_5);

 if (--VAR_5->dq_cnt > 0) {
         FUNC_4(VAR_5);
  FUNC_2();
  return;
 }
 if (VAR_5->dq_flags & VAR_0)
  FUNC_0(&VAR_3, VAR_5, VAR_2);
 else
  FUNC_0(&VAR_4, VAR_5, VAR_2);

 FUNC_4(VAR_5);
 FUNC_2();
}
