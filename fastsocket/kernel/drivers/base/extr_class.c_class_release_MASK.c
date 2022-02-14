
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct class_private {struct class* class; } ;
struct class {int name; int (* class_release ) (struct class*) ;} ;


 int FUNC_0 (struct class_private*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct class*) ;
 struct class_private* FUNC_3 (struct kobject*) ;

__attribute__((used)) static void FUNC_4(struct kobject *VAR_0)
{
 struct class_private *VAR_1 = FUNC_3(VAR_0);
 struct class *VAR_2 = VAR_1->class;

 FUNC_1("class '%s': release.\n", VAR_2->name);

 if (VAR_2->class_release)
  VAR_2->class_release(VAR_2);
 else
  FUNC_1("class '%s' does not have a release() function, "
    "be careful\n", VAR_2->name);

 FUNC_0(VAR_1);
}
