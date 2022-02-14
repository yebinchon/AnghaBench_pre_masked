
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_gpio {int get; int set; int find; int events; } ;


 int FUNC_0 (int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int ,char*,char*,int,void**) ;

int
FUNC_2(struct nouveau_object *VAR_3,
       struct nouveau_object *VAR_4,
       struct nouveau_oclass *VAR_5, int VAR_6,
       int VAR_7, void **VAR_8)
{
 struct nouveau_gpio *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_3, VAR_4, VAR_5, 0, "GPIO", "gpio",
         VAR_7, VAR_8);
 VAR_9 = *VAR_8;
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_0(VAR_6, &VAR_9->events);
 if (VAR_10)
  return VAR_10;

 VAR_9->find = VAR_0;
 VAR_9->set = VAR_2;
 VAR_9->get = VAR_1;
 return 0;
}
