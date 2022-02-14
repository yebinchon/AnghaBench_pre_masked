
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nouveau_ramht {int bits; } ;
struct nouveau_object {struct nouveau_object* engine; } ;
struct TYPE_2__ {int size; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct nouveau_object*,struct nouveau_object*,int *,int ,struct nouveau_object*,int ,int ,int ,struct nouveau_ramht**) ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (struct nouveau_ramht*) ;

int
FUNC_3(struct nouveau_object *VAR_2, struct nouveau_object *VAR_3,
    u32 VAR_4, u32 VAR_5, struct nouveau_ramht **VAR_6)
{
 struct nouveau_ramht *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_2, VAR_2->engine ?
        VAR_2->engine : VAR_2,
        &VAR_1, 0, VAR_3, VAR_4,
        VAR_5, VAR_0, &VAR_7);
 *VAR_6 = VAR_7;
 if (VAR_8)
  return VAR_8;

 VAR_7->bits = FUNC_0(FUNC_2(VAR_7)->size >> 3);
 return 0;
}
