
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nouveau_subdev {char const* name; int mmio; int debug; int mutex; } ;
struct nouveau_oclass {int lock_class_key; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_device {void** subdev; int dbgopt; } ;
struct TYPE_2__ {int mmio; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,int *) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int,int,void**) ;
 struct nouveau_device* FUNC_3 (struct nouveau_object*) ;
 int FUNC_4 (struct nouveau_subdev*) ;
 TYPE_1__* FUNC_5 (struct nouveau_device*) ;

int
FUNC_6(struct nouveau_object *VAR_1,
         struct nouveau_object *VAR_2,
         struct nouveau_oclass *VAR_3, u32 VAR_4,
         const char *VAR_5, const char *VAR_6,
         int VAR_7, void **VAR_8)
{
 struct nouveau_subdev *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4 |
         VAR_0, VAR_7, VAR_8);
 VAR_9 = *VAR_8;
 if (VAR_10)
  return VAR_10;

 FUNC_0(&VAR_9->mutex, VAR_5, &VAR_3->lock_class_key);
 VAR_9->name = VAR_5;

 if (VAR_1) {
  struct nouveau_device *VAR_11 = FUNC_3(VAR_1);
  int VAR_12 = FUNC_4(VAR_9) & 0xff;

  VAR_9->debug = FUNC_1(VAR_11->dbgopt, VAR_5);
  VAR_9->mmio = FUNC_5(VAR_11)->mmio;
  VAR_11->subdev[VAR_12] = *VAR_8;
 }

 return 0;
}
