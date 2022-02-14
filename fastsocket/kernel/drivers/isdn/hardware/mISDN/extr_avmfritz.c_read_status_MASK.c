
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fritzcard {int type; int addr; } ;




 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static u32
FUNC_2(struct fritzcard *VAR_0, u32 VAR_1)
{
 switch (VAR_0->type) {
 case 128:
  return FUNC_1(VAR_0->addr, VAR_1);
 case 129:
  return FUNC_0(VAR_0->addr, VAR_1);
 }

 return 0;
}
