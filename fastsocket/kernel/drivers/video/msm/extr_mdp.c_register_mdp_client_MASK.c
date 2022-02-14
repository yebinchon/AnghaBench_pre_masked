
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct class_interface {scalar_t__ class; } ;


 int VAR_0 ;
 int FUNC_0 (struct class_interface*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;

int FUNC_2(struct class_interface *VAR_2)
{
 if (!VAR_1) {
  FUNC_1("mdp: no mdp_class when registering mdp client\n");
  return -VAR_0;
 }
 VAR_2->class = VAR_1;
 return FUNC_0(VAR_2);
}
