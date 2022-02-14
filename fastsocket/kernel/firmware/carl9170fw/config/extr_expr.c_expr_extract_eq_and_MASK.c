
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expr {int dummy; } ;


 int VAR_0 ;
 struct expr* FUNC_0 (struct expr*) ;
 int FUNC_1 (int ,struct expr**,struct expr**,struct expr**) ;

struct expr *FUNC_2(struct expr **VAR_1, struct expr **VAR_2)
{
 struct expr *VAR_3 = ((void*)0);
 FUNC_1(VAR_0, &VAR_3, VAR_1, VAR_2);
 if (VAR_3) {
  *VAR_1 = FUNC_0(*VAR_1);
  *VAR_2 = FUNC_0(*VAR_2);
 }
 return VAR_3;
}
