
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nouveau_oclass {scalar_t__ handle; } ;
typedef void nouveau_object ;
struct nouveau_i2c {struct nouveau_i2c* (* find ) (struct nouveau_i2c*,int ) ;int ports; int identify; int find_type; } ;
struct nouveau_bios {int dummy; } ;
struct dcb_output {int type; int i2c_index; int extdev; int location; } ;
struct dcb_i2c_entry {scalar_t__ type; } ;


 int FUNC_0 (struct nouveau_oclass**) ;
 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct nouveau_bios*,int,struct dcb_i2c_entry*) ;
 int FUNC_5 (struct nouveau_bios*,int,int *,int *,struct dcb_output*) ;
 struct nouveau_bios* FUNC_6 (void*) ;
 struct nouveau_oclass** VAR_3 ;
 struct nouveau_i2c* FUNC_7 (struct nouveau_i2c*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (void*,void*,struct nouveau_oclass*,struct dcb_i2c_entry*,int,void**) ;
 int FUNC_9 (void*,void*,struct nouveau_oclass*,int ,char*,char*,struct nouveau_i2c**) ;
 void* FUNC_10 (struct nouveau_i2c*) ;
 struct nouveau_i2c* FUNC_11 (struct nouveau_i2c*,int ) ;

int
FUNC_12(struct nouveau_object *VAR_6,
      struct nouveau_object *VAR_7,
      struct nouveau_oclass *VAR_8,
      struct nouveau_oclass *VAR_9,
      int VAR_10, void **VAR_11)
{
 struct nouveau_bios *VAR_12 = FUNC_6(VAR_6);
 struct nouveau_i2c *VAR_13;
 struct nouveau_object *VAR_14;
 struct dcb_i2c_entry VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19 = -1;
 struct dcb_output VAR_20;
 u8 VAR_21, VAR_22;
 u32 VAR_23;

 VAR_16 = FUNC_9(VAR_6, VAR_7, VAR_8, 0,
        "I2C", "i2c", &VAR_13);
 *VAR_11 = FUNC_10(VAR_13);
 if (VAR_16)
  return VAR_16;

 VAR_13->find = FUNC_7;
 VAR_13->find_type = VAR_4;
 VAR_13->identify = VAR_5;
 FUNC_1(&VAR_13->ports);

 while (!FUNC_4(VAR_12, ++VAR_19, &VAR_15)) {
  if (VAR_15.type == VAR_0)
   continue;

  VAR_8 = VAR_9;
  do {
   VAR_16 = -VAR_1;
   if (VAR_8->handle == VAR_15.type) {
    VAR_16 = FUNC_8(*VAR_11, *VAR_11,
         VAR_8, &VAR_15,
         VAR_19, &VAR_14);
   }
  } while (VAR_16 && (++VAR_8)->handle);
 }





 VAR_19 = ((VAR_19 + 0x0f) / 0x10) * 0x10;
 VAR_17 = -1;
 while ((VAR_23 = FUNC_5(VAR_12, ++VAR_17, &VAR_21, &VAR_22, &VAR_20))) {
  if (!VAR_20.location || !VAR_20.extdev)
   continue;

  switch (VAR_20.type) {
  case 128:
   VAR_15.type = FUNC_3(VAR_20.extdev);
   break;
  case 129:
   VAR_15.type = FUNC_2(VAR_20.extdev);
   break;
  default:
   continue;
  }

  VAR_16 = -VAR_2;
  VAR_18 = -1;
  while (VAR_16 && ++VAR_18 < FUNC_0(VAR_3)) {
   VAR_6 = FUNC_10(VAR_13->find(VAR_13, VAR_20.i2c_index));
   VAR_8 = VAR_3[VAR_18];
   do {
    if (VAR_8->handle != VAR_15.type)
     continue;
    VAR_16 = FUNC_8(VAR_6, *VAR_11,
         VAR_8, ((void*)0),
         VAR_19++, &VAR_14);
   } while (VAR_16 && (++VAR_8)->handle);
  }
 }

 return 0;
}
