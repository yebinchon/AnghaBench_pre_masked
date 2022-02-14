
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * func; } ;
struct nv50_i2c_port {int state; int ctrl; int data; int addr; TYPE_1__ base; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct dcb_i2c_entry {size_t drive; int share; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int ,int *,struct nv50_i2c_port**) ;
 int * VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 struct nouveau_object* FUNC_1 (struct nv50_i2c_port*) ;

__attribute__((used)) static int
FUNC_2(struct nouveau_object *VAR_6, struct nouveau_object *VAR_7,
     struct nouveau_oclass *VAR_8, void *VAR_9, u32 VAR_10,
     struct nouveau_object **VAR_11)
{
 struct dcb_i2c_entry *VAR_12 = VAR_9;
 struct nv50_i2c_port *VAR_13;
 int VAR_14;

 VAR_14 = FUNC_0(VAR_6, VAR_7, VAR_8, VAR_10,
         &VAR_2, &VAR_13);
 *VAR_11 = FUNC_1(VAR_13);
 if (VAR_14)
  return VAR_14;

 if (VAR_12->drive >= VAR_4)
  return -VAR_1;

 VAR_13->base.func = &VAR_5;
 VAR_13->state = 7;
 VAR_13->addr = VAR_3[VAR_12->drive];
 if (VAR_12->share != VAR_0) {
  VAR_13->ctrl = 0x00e500 + (VAR_12->share * 0x50);
  VAR_13->data = 0x0000e001;
 }
 return 0;
}
