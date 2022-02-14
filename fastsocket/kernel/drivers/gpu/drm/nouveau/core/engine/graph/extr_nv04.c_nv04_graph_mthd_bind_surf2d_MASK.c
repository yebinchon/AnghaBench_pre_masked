
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_object {int dummy; } ;


 int FUNC_0 (struct nouveau_object*,void*,int ) ;
 int FUNC_1 (struct nouveau_object*,int,int ) ;
 int FUNC_2 (struct nouveau_object*,int,int) ;

__attribute__((used)) static int
FUNC_3(struct nouveau_object *VAR_0, u32 VAR_1,
       void *VAR_2, u32 VAR_3)
{
 switch (FUNC_0(VAR_0, VAR_2, VAR_3)) {
 case 0x30:
  FUNC_1(VAR_0, 0x00004000, 0);
  FUNC_2(VAR_0, 0x02000000, 0);
  return 0;
 case 0x42:
  FUNC_1(VAR_0, 0x00004000, 0);
  FUNC_2(VAR_0, 0x02000000, 0x02000000);
  return 0;
 }
 return 1;
}
