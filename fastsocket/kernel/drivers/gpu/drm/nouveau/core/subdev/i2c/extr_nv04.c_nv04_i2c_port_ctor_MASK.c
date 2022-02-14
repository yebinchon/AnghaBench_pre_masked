
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * func; } ;
struct nv04_i2c_port {int sense; int drive; TYPE_1__ base; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct dcb_i2c_entry {int sense; int drive; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int ,int *,struct nv04_i2c_port**) ;
 int VAR_1 ;
 struct nouveau_object* FUNC_1 (struct nv04_i2c_port*) ;

__attribute__((used)) static int
FUNC_2(struct nouveau_object *VAR_2, struct nouveau_object *VAR_3,
     struct nouveau_oclass *VAR_4, void *VAR_5, u32 VAR_6,
     struct nouveau_object **VAR_7)
{
 struct dcb_i2c_entry *VAR_8 = VAR_5;
 struct nv04_i2c_port *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_6,
         &VAR_0, &VAR_9);
 *VAR_7 = FUNC_1(VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_9->base.func = &VAR_1;
 VAR_9->drive = VAR_8->drive;
 VAR_9->sense = VAR_8->sense;
 return 0;
}
