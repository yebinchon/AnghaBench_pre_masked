
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int f_flags; int f_path; } ;


 int VAR_0 ;
 struct file* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct file* FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;

struct file *FUNC_3(struct file *VAR_5, int VAR_6)
{

 struct file *VAR_7 = FUNC_1(&VAR_5->f_path, VAR_1,
        &VAR_4);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 FUNC_2(&VAR_5->f_path);
 VAR_7->f_flags = VAR_3 | (VAR_6 & VAR_2);

 return VAR_7;
}
