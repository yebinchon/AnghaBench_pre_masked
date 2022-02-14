
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dquot {int dq_flags; } ;


 int VAR_0 ;
 struct dquot* VAR_1 ;
 int FUNC_0 (struct dquot*) ;
 int FUNC_1 (struct dquot*) ;
 int FUNC_2 (struct dquot*) ;

int
FUNC_3(struct dquot *VAR_2)
{
        int VAR_3 = 0;

 if (VAR_2 != VAR_1) {
         FUNC_0(VAR_2);

  if ( (VAR_2->dq_flags & VAR_0) )
         VAR_3 = FUNC_1(VAR_2);

  FUNC_2(VAR_2);
 }
 return (VAR_3);
}
