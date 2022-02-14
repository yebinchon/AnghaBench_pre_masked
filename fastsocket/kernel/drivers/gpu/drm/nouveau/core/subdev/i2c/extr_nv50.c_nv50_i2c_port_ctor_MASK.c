
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * func; } ;
struct nv50_i2c_port {int state; int addr; TYPE_1__ base; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct dcb_i2c_entry {size_t drive; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int ,int *,struct nv50_i2c_port**) ;
 int * VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 struct nouveau_object* FUNC_1 (struct nv50_i2c_port*) ;

__attribute__((used)) static int
FUNC_2(struct nouveau_object *VAR_5, struct nouveau_object *VAR_6,
     struct nouveau_oclass *VAR_7, void *VAR_8, u32 VAR_9,
     struct nouveau_object **VAR_10)
{
 struct dcb_i2c_entry *VAR_11 = VAR_8;
 struct nv50_i2c_port *VAR_12;
 int VAR_13;

 VAR_13 = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_9,
         &VAR_1, &VAR_12);
 *VAR_10 = FUNC_1(VAR_12);
 if (VAR_13)
  return VAR_13;

 if (VAR_11->drive >= VAR_3)
  return -VAR_0;

 VAR_12->base.func = &VAR_4;
 VAR_12->state = 0x00000007;
 VAR_12->addr = VAR_2[VAR_11->drive];
 return 0;
}
