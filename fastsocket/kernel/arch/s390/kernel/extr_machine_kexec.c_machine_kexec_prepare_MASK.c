
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kimage {scalar_t__ type; int control_code_page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (void*,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_3(struct kimage *VAR_8)
{
 void *VAR_9;


 if (VAR_5 & VAR_2)
  return -VAR_1;

 if (VAR_8->type == VAR_3)
  return FUNC_0();


 if (VAR_8->type != VAR_4)
  return -VAR_0;


 VAR_9 = (void *) FUNC_2(VAR_8->control_code_page);


 FUNC_1(VAR_9, VAR_6, VAR_7);
 return 0;
}
