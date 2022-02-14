
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int * f_op; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct file* FUNC_0 (int ) ;
 struct file* FUNC_1 (int) ;
 int FUNC_2 (struct file*) ;
 int VAR_2 ;

__attribute__((used)) static struct file *FUNC_3(int VAR_3)
{
 struct file *VAR_4;

 VAR_4 = FUNC_1(VAR_3);
 if (!VAR_4)
  return FUNC_0(-VAR_0);
 if (VAR_4->f_op != &VAR_2) {
  FUNC_2(VAR_4);
  return FUNC_0(-VAR_1);
 }

 return VAR_4;
}
