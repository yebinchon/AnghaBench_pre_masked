
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;
struct lock_class_key {int dummy; } ;
struct class {char const* name; int class_release; struct module* owner; } ;


 int VAR_0 ;
 struct class* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct class*,struct lock_class_key*) ;
 int VAR_2 ;
 int FUNC_2 (struct class*) ;
 struct class* FUNC_3 (int,int ) ;

struct class *FUNC_4(struct module *VAR_3, const char *VAR_4,
        struct lock_class_key *VAR_5)
{
 struct class *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_1);
 if (!VAR_6) {
  VAR_7 = -VAR_0;
  goto error;
 }

 VAR_6->name = VAR_4;
 VAR_6->owner = VAR_3;
 VAR_6->class_release = VAR_2;

 VAR_7 = FUNC_1(VAR_6, VAR_5);
 if (VAR_7)
  goto error;

 return VAR_6;

error:
 FUNC_2(VAR_6);
 return FUNC_0(VAR_7);
}
