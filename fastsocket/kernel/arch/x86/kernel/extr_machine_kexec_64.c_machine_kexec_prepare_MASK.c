
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kimage {int control_code_page; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct kimage*,unsigned long) ;
 unsigned long FUNC_1 (int ) ;

int FUNC_2(struct kimage *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;


 VAR_2 = FUNC_1(VAR_1->control_code_page) << VAR_0;


 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 return 0;
}
