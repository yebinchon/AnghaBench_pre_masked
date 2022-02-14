
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_rf {int (* clear ) (struct zd_rf*) ;} ;


 int FUNC_0 (struct zd_rf*,int) ;
 int FUNC_1 (struct zd_rf*) ;

void FUNC_2(struct zd_rf *VAR_0)
{
 if (VAR_0->clear)
  VAR_0->clear(VAR_0);
 FUNC_0(VAR_0, sizeof(*VAR_0));
}
