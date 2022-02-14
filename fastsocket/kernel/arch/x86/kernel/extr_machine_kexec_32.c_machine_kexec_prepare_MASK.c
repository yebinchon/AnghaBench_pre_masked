
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kimage {int control_code_page; } ;


 int FUNC_0 (struct kimage*) ;
 int FUNC_1 (struct kimage*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,int) ;

int FUNC_3(struct kimage *VAR_1)
{
 int VAR_2;

 if (VAR_0)
  FUNC_2(VAR_1->control_code_page, 1);
 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  return VAR_2;
 FUNC_1(VAR_1);
 return 0;
}
