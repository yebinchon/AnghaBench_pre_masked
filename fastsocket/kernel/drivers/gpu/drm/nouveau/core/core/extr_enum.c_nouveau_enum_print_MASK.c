
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_enum {int name; } ;


 struct nouveau_enum* FUNC_0 (struct nouveau_enum const*,int ) ;
 int FUNC_1 (char*,int ) ;

const struct nouveau_enum *
FUNC_2(const struct nouveau_enum *VAR_0, u32 VAR_1)
{
 VAR_0 = FUNC_0(VAR_0, VAR_1);
 if (VAR_0)
  FUNC_1("%s", VAR_0->name);
 else
  FUNC_1("(unknown enum 0x%08x)", VAR_1);
 return VAR_0;
}
