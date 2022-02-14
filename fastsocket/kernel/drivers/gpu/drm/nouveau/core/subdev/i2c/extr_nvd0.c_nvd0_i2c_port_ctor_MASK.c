
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * func; } ;
struct nv50_i2c_port {int state; int addr; int ctrl; int data; TYPE_1__ base; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct dcb_i2c_entry {int drive; int share; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int ,int *,struct nv50_i2c_port**) ;
 struct nouveau_object* FUNC_1 (struct nv50_i2c_port*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(struct nouveau_object *VAR_3, struct nouveau_object *VAR_4,
     struct nouveau_oclass *VAR_5, void *VAR_6, u32 VAR_7,
     struct nouveau_object **VAR_8)
{
 struct dcb_i2c_entry *VAR_9 = VAR_6;
 struct nv50_i2c_port *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_7,
         &VAR_1, &VAR_10);
 *VAR_8 = FUNC_1(VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_10->base.func = &VAR_2;
 VAR_10->state = 0x00000007;
 VAR_10->addr = 0x00d014 + (VAR_9->drive * 0x20);
 if (VAR_9->share != VAR_0) {
  VAR_10->ctrl = 0x00e500 + (VAR_9->share * 0x50);
  VAR_10->data = 0x0000e001;
 }
 return 0;
}
