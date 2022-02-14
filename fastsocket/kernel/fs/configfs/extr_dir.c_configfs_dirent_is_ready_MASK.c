
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct configfs_dirent {int s_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct configfs_dirent *VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_1);
 VAR_3 = !(VAR_2->s_type & VAR_0);
 FUNC_1(&VAR_1);

 return VAR_3;
}
