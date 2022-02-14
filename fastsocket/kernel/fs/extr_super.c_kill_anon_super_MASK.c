
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_5(struct super_block *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_3->s_dev);

 FUNC_1(VAR_3);
 FUNC_3(&VAR_1);
 FUNC_2(&VAR_0, VAR_4);
 if (VAR_4 < VAR_2)
  VAR_2 = VAR_4;
 FUNC_4(&VAR_1);
}
