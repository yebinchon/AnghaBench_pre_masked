
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int reject; int use_count; scalar_t__ ep; scalar_t__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (struct urb*,int ) ;
 int VAR_1 ;
 int FUNC_5 (int ,int) ;

void FUNC_6(struct urb *VAR_2)
{
 FUNC_3();
 if (!(VAR_2 && VAR_2->dev && VAR_2->ep))
  return;
 FUNC_1(&VAR_2->reject);

 FUNC_4(VAR_2, -VAR_0);
 FUNC_5(VAR_1, FUNC_2(&VAR_2->use_count) == 0);

 FUNC_0(&VAR_2->reject);
}
