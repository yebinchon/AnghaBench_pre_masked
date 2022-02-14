
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct corgikbd {int timer; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct corgikbd*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct corgikbd *VAR_3 = VAR_2;

 if (!FUNC_1(&VAR_3->timer)) {

  FUNC_2(20);
  FUNC_0(VAR_3);
 }

 return VAR_0;
}
