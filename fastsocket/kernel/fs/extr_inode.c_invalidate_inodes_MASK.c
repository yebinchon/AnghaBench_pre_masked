
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_inodes; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int) ;
 int VAR_1 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int FUNC_8 (int *) ;

int FUNC_9(struct super_block *VAR_3, bool VAR_4)
{
 int VAR_5;
 FUNC_0(VAR_2);

 FUNC_2(&VAR_1);
 FUNC_6(&VAR_0);
 FUNC_4(&VAR_3->s_inodes);
 FUNC_3(&VAR_3->s_inodes);
 VAR_5 = FUNC_5(&VAR_3->s_inodes, &VAR_2, VAR_4);
 FUNC_7(&VAR_0);

 FUNC_1(&VAR_2);
 FUNC_8(&VAR_1);

 return VAR_5;
}
