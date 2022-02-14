
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_system_type {int name; int fs_supers; scalar_t__ next; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 struct file_system_type** FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct file_system_type * VAR_2)
{
 int VAR_3 = 0;
 struct file_system_type ** VAR_4;

 FUNC_0(FUNC_3(VAR_2->name, '.'));
 if (VAR_2->next)
  return -VAR_0;
 FUNC_1(&VAR_2->fs_supers);
 FUNC_5(&VAR_1);
 VAR_4 = FUNC_2(VAR_2->name, FUNC_4(VAR_2->name));
 if (*VAR_4)
  VAR_3 = -VAR_0;
 else
  *VAR_4 = VAR_2;
 FUNC_6(&VAR_1);
 return VAR_3;
}
