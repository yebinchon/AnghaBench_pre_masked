
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;
struct class {int devnode; int resume; int suspend; } ;


 struct class* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct class*) ;
 int FUNC_2 (struct class*) ;
 int VAR_0 ;
 struct class* FUNC_3 (struct module*,char*) ;
 int FUNC_4 (struct class*,int *) ;
 int FUNC_5 (struct class*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

struct class *FUNC_6(struct module *VAR_4, char *VAR_5)
{
 struct class *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_4, VAR_5);
 if (FUNC_1(VAR_6)) {
  VAR_7 = FUNC_2(VAR_6);
  goto err_out;
 }

 VAR_6->suspend = VAR_2;
 VAR_6->resume = VAR_1;

 VAR_7 = FUNC_4(VAR_6, &VAR_0);
 if (VAR_7)
  goto err_out_class;

 VAR_6->devnode = VAR_3;

 return VAR_6;

err_out_class:
 FUNC_5(VAR_6);
err_out:
 return FUNC_0(VAR_7);
}
