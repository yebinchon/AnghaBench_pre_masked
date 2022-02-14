
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expr {int type; } ;




 int FUNC_0 (int,struct expr**,struct expr**) ;
 int FUNC_1 (int,struct expr**,struct expr**) ;
 struct expr* FUNC_2 (struct expr*) ;
 int VAR_0 ;

struct expr *FUNC_3(struct expr *VAR_1)
{
 int VAR_2;
 if (!VAR_1)
  return VAR_1;

 VAR_2 = VAR_0;
 while (1) {
  VAR_0 = 0;
  switch (VAR_1->type) {
  case 128: case 129:
   FUNC_0(VAR_1->type, &VAR_1, &VAR_1);
   FUNC_1(VAR_1->type, &VAR_1, &VAR_1);
  default:
   ;
  }
  if (!VAR_0)
   break;
  VAR_1 = FUNC_2(VAR_1);
 }
 VAR_0 = VAR_2;
 return VAR_1;
}
