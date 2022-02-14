
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct device {int kobj; int release; struct device* parent; struct class* class; int devt; } ;
struct class {int dummy; } ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct device* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct class*) ;
 int FUNC_2 (struct device*,void*) ;
 int VAR_3 ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (int *,char const*,int ) ;
 struct device* FUNC_5 (int,int ) ;
 int FUNC_6 (struct device*) ;

struct device *FUNC_7(struct class *VAR_4, struct device *VAR_5,
       dev_t VAR_6, void *VAR_7, const char *VAR_8,
       va_list VAR_9)
{
 struct device *VAR_10 = ((void*)0);
 int VAR_11 = -VAR_0;

 if (VAR_4 == ((void*)0) || FUNC_1(VAR_4))
  goto error;

 VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_2);
 if (!VAR_10) {
  VAR_11 = -VAR_1;
  goto error;
 }

 VAR_10->devt = VAR_6;
 VAR_10->class = VAR_4;
 VAR_10->parent = VAR_5;
 VAR_10->release = VAR_3;
 FUNC_2(VAR_10, VAR_7);

 VAR_11 = FUNC_4(&VAR_10->kobj, VAR_8, VAR_9);
 if (VAR_11)
  goto error;

 VAR_11 = FUNC_3(VAR_10);
 if (VAR_11)
  goto error;

 return VAR_10;

error:
 FUNC_6(VAR_10);
 return FUNC_0(VAR_11);
}
