
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_card {int work; } ;


 int FUNC_0 (struct fw_card*) ;
 int FUNC_1 (struct fw_card*) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct fw_card *VAR_0, unsigned long VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_0);
 VAR_2 = FUNC_2(&VAR_0->work, VAR_1);
 if (!VAR_2)
  FUNC_1(VAR_0);
}
