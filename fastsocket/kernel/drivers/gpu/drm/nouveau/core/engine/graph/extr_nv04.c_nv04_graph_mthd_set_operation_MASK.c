
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_object {int dummy; } ;


 int FUNC_0 (struct nouveau_object*,int,int) ;
 int FUNC_1 (struct nouveau_object*,int ,int ) ;
 int FUNC_2 (struct nouveau_object*,int ) ;

__attribute__((used)) static int
FUNC_3(struct nouveau_object *VAR_0, u32 VAR_1,
         void *VAR_2, u32 VAR_3)
{
 u32 VAR_4 = FUNC_2(VAR_0, 0) & 0xff;
 u32 VAR_5 = *(u32 *)VAR_2;
 if (VAR_5 > 5)
  return 1;

 if (VAR_5 > 2 && VAR_4 < 0x40)
  return 1;
 FUNC_0(VAR_0, 0x00038000, VAR_5 << 15);

 FUNC_1(VAR_0, 0, 0);
 return 0;
}
